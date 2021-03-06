// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_linear
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_linear_BreastCancer.exe ml2cpp-demo_SVC_linear_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	std::vector<std::any> lProblem_data_dual = { 
	 -0.0021006550345941573 , 0.0006592039887299706 , 0.0014414510458641866 ,};
	

	std::vector<std::vector<std::any> > lProblem_data_sv = { 
	 { 13.82, 24.49, 92.33, 595.9, 0.1162, 0.1681, 0.1357, 0.06759, 0.2275, 0.07237, 0.4751, 1.528, 2.974, 39.05, 0.00968, 0.03856, 0.03476, 0.01616, 0.02434, 0.006995, 16.01, 32.94, 106.0, 788.0, 0.1794, 0.3966, 0.3381, 0.1521, 0.3651, 0.1183 },
	 { 14.44, 15.18, 93.97, 640.1, 0.0997, 0.1021, 0.08487, 0.05532, 0.1724, 0.06081, 0.2406, 0.7394, 2.12, 21.2, 0.005706, 0.02297, 0.03114, 0.01493, 0.01454, 0.002528, 15.85, 19.85, 108.6, 766.9, 0.1316, 0.2735, 0.3103, 0.1599, 0.2691, 0.07683 },
	 { 13.68, 16.33, 87.76, 575.5, 0.09277, 0.07255, 0.01752, 0.0188, 0.1631, 0.06155, 0.2047, 0.4801, 1.373, 17.25, 0.003828, 0.007228, 0.007078, 0.005077, 0.01054, 0.001697, 15.85, 20.2, 101.6, 773.4, 0.1264, 0.1564, 0.1206, 0.08704, 0.2806, 0.07782 },
	};
	

	double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
		return linear_kernel( lProblem_data_dual, lProblem_data_sv, inputs ) + 30.732283056164775;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1",
			"Proba_0", "Proba_1",
			"LogProba_0", "LogProba_1",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
		auto lClasses = get_classes();

		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29 };

		std::any lDotProduct_0_1 = linear_kernel( lProblem_data_dual, lProblem_data_sv, inputs ) + 30.732283056164775;

		std::any lLogistic_0_1 = logistic(-0.2720419529708692 * lDotProduct_0_1 + 0.6971438039354001);


		tTable lTable;

		lTable["Score"] = { 
			-lDotProduct_0_1,
			lDotProduct_0_1 
		} ;
		lTable["Proba"] = { 
			lLogistic_0_1,
			1.0 - lLogistic_0_1 
		} ;
		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BreastCancer.csv");
	return 0;
}
