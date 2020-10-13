// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPClassifier
// Dataset : iris_str_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPClassifier_iris_str_tgt.exe ml2cpp-demo_MLPClassifier_iris_str_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { CLASS_0, CLASS_1, CLASS_2 };

		return lClasses;
	}

	namespace InputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["input_0"] = { Feature_0 };
			lTable["input_1"] = { Feature_1 };
			lTable["input_2"] = { Feature_2 };
			lTable["input_3"] = { Feature_3 };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace InputLayer
	

	namespace HiddenLayer_1 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "input_0", "input_1", "input_2", "input_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any input_0, std::any input_1, std::any input_2, std::any input_3) {
	
			tTable lTable;
	
			double output_1_0_BA = -0.13457531603114958 * input_0 + -0.5912993521771946 * input_1 + -0.732344697940501 * input_2 + -0.8190190363903049 * input_3 + 0.34759387273386655;
	
			double output_1_1_BA = 10.657914903177039 * input_0 + 5.941953815130946 * input_1 + -6.937405771979662 * input_2 + -7.019334620118317 * input_3 + 3.6145352357781833;
	
			double output_1_2_BA = -1.0441848226346788 * input_0 + -6.955189539940822 * input_1 + 18.674706371327666 * input_2 + 11.073084513265163 * input_3 + -2.6035349050352714;
	
			lTable["output_1_0"] = { relu(output_1_0_BA) };
			lTable["output_1_1"] = { relu(output_1_1_BA) };
			lTable["output_1_2"] = { relu(output_1_2_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("input_0")[0], iTable.at("input_1")[0], iTable.at("input_2")[0], iTable.at("input_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_1
	

	namespace HiddenLayer_2 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_1_0, std::any output_1_1, std::any output_1_2) {
	
			tTable lTable;
	
			double output_2_0_BA = 0.6727767304573575 * output_1_0 + 5.688322922522737 * output_1_1 + -2.493534878744366 * output_1_2 + 5.396399489330251;
	
			double output_2_1_BA = 0.64882026364598 * output_1_0 + -0.06939330935529928 * output_1_1 + -0.6459164312806044 * output_1_2 + -0.5292904296119374;
	
			double output_2_2_BA = -0.30071281604572275 * output_1_0 + -0.8273260662888292 * output_1_1 + -0.3010392779589697 * output_1_2 + -0.010394282503777497;
	
			double output_2_3_BA = -0.34132351043274806 * output_1_0 + -0.5188877348302131 * output_1_1 + -0.12232690165743483 * output_1_2 + -0.7406283496068888;
	
			double output_2_4_BA = -0.3867593378772344 * output_1_0 + -5.410036109731066 * output_1_1 + 17.917374698268016 * output_1_2 + -6.77455131888024;
	
			lTable["output_2_0"] = { relu(output_2_0_BA) };
			lTable["output_2_1"] = { relu(output_2_1_BA) };
			lTable["output_2_2"] = { relu(output_2_2_BA) };
			lTable["output_2_3"] = { relu(output_2_3_BA) };
			lTable["output_2_4"] = { relu(output_2_4_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_1_0")[0], iTable.at("output_1_1")[0], iTable.at("output_1_2")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_2
	

	namespace OutputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Score_CLASS_0", "Score_CLASS_1", "Score_CLASS_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_2_0, std::any output_2_1, std::any output_2_2, std::any output_2_3, std::any output_2_4) {
	
			tTable lTable;
	
			double output_3_0_BA = 6.379224722652574 * output_2_0 + 0.5914468402674011 * output_2_1 + -0.5047257015542682 * output_2_2 + -0.769776027834717 * output_2_3 + -18.961119287254288 * output_2_4 + 17.07117127447761;
	
			double output_3_1_BA = -0.4811094255724096 * output_2_0 + 0.66516225209344 * output_2_1 + 0.43320027975273556 * output_2_2 + 0.34923518482442095 * output_2_3 + 9.081239261735186 * output_2_4 + -3.026528075640485;
	
			double output_3_2_BA = -6.4058180345478295 * output_2_0 + 0.45775596662429885 * output_2_1 + 0.07954272165641774 * output_2_2 + -0.40661802335621333 * output_2_3 + 9.256789281229825 * output_2_4 + -15.22140003780373;
	
			lTable["Score_CLASS_0"] = { output_3_0_BA };
			lTable["Score_CLASS_1"] = { output_3_1_BA };
			lTable["Score_CLASS_2"] = { output_3_2_BA };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
	
			return lTable;
		}
	
	} // eof namespace OutputLayer
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_CLASS_0", "Score_CLASS_1", "Score_CLASS_2",
			"Proba_CLASS_0", "Proba_CLASS_1", "Proba_CLASS_2",
			"LogProba_CLASS_0", "LogProba_CLASS_1", "LogProba_CLASS_2",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		tTable lTable_InputLayer = InputLayer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );

		tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );

		tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );

		tTable lScores = tTable();

		lScores["Score"] = { lTable_OutputLayer[ "Score_CLASS_0" ][0], lTable_OutputLayer[ "Score_CLASS_1" ][0], lTable_OutputLayer[ "Score_CLASS_2" ][0] };

		tTable lSoftMaxTable = soft_max( lScores );


		tTable lTable = lSoftMaxTable;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/iris_str_tgt.csv");
	return 0;
}
