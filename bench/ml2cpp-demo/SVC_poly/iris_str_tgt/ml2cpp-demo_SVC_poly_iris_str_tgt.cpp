// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_poly
// Dataset : iris_str_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_poly_iris_str_tgt.exe ml2cpp-demo_SVC_poly_iris_str_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::string> get_classes(){
		std::vector<std::string> lClasses = { "CLASS_0", "CLASS_1", "CLASS_2" };

		return lClasses;
	}

	namespace pb_0_1 {
	
		std::vector<std::string> get_classes(){
			std::vector<std::string> lClasses = { "CLASS_0", "CLASS_1" };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_1 = { 
		0.0 ,0.49581829572140784 ,0.0 ,0.028515264659597972 ,-0.0 ,-0.5243335603810059 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_1 = { 
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 5.1, 3.8, 1.9, 0.4 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		};
		
	
		double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
			return poly_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.06541912694449836, 0.0, 3 ) + 1.1361110212790335;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_CLASS_0", "Score_CLASS_1",
				"Proba_CLASS_0", "Proba_CLASS_1",
				"LogProba_CLASS_0", "LogProba_CLASS_1" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_1 = poly_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.06541912694449836, 0.0, 3 ) + 1.1361110212790335;
	
			std::any lLogistic_0_1 = logistic(-1.628012575327851 * lDotProduct_0_1 + -0.938132247071702);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_0_1,
				lDotProduct_0_1 
			} ;
			lTable["Proba"] = { 
				lLogistic_0_1,
				1.0 - lLogistic_0_1 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_0_1
	

	namespace pb_0_2 {
	
		std::vector<std::string> get_classes(){
			std::vector<std::string> lClasses = { "CLASS_0", "CLASS_2" };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_2 = { 
		0.03552060575884974 ,0.027396535056970383 ,0.03847586820516666 ,0.0 ,-0.0 ,-0.10139300902098677 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_2 = { 
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 5.1, 3.8, 1.9, 0.4 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 4.9, 2.5, 4.5, 1.7 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 6.0, 2.2, 5.0, 1.5 },
		};
		
	
		double get_problem_0_2_decision_function( std::vector<std::any> const & inputs) {
			return poly_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.06541912694449836, 0.0, 3 ) + 1.1836485013121598;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_CLASS_0", "Score_CLASS_2",
				"Proba_CLASS_0", "Proba_CLASS_2",
				"LogProba_CLASS_0", "LogProba_CLASS_2" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_2 = poly_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.06541912694449836, 0.0, 3 ) + 1.1836485013121598;
	
			std::any lLogistic_0_2 = logistic(-1.9507655732507698 * lDotProduct_0_2 + -0.8273683250050299);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_0_2,
				lDotProduct_0_2 
			} ;
			lTable["Proba"] = { 
				lLogistic_0_2,
				1.0 - lLogistic_0_2 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_0_2
	

	namespace pb_1_2 {
	
		std::vector<std::string> get_classes(){
			std::vector<std::string> lClasses = { "CLASS_1", "CLASS_2" };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_1_2 = { 
		0.7113043198510227 ,0.0 ,0.8632675129781251 ,1.0 ,1.0 ,1.0 ,1.0 ,-1.0 ,-1.0 ,-0.07952498402657919 ,-1.0 ,-1.0 ,-1.0 ,-0.49504684880256855 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_1_2 = { 
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 4.9, 2.5, 4.5, 1.7 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 6.0, 2.2, 5.0, 1.5 },
		};
		
	
		double get_problem_1_2_decision_function( std::vector<std::any> const & inputs) {
			return poly_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.06541912694449836, 0.0, 3 ) + 3.4039755644222307;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_CLASS_1", "Score_CLASS_2",
				"Proba_CLASS_1", "Proba_CLASS_2",
				"LogProba_CLASS_1", "LogProba_CLASS_2" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_1_2 = poly_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.06541912694449836, 0.0, 3 ) + 3.4039755644222307;
	
			std::any lLogistic_1_2 = logistic(-1.5347491197734429 * lDotProduct_1_2 + -0.12625662241528524);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_1_2,
				lDotProduct_1_2 
			} ;
			lTable["Proba"] = { 
				lLogistic_1_2,
				1.0 - lLogistic_1_2 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_1_2
	

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

		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };

		std::map<uint, tTable> lBinaryScores = { 
			{ 0 , pb_0_1::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) },
			{ 1 , pb_0_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) },
			{ 2 , pb_1_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) }
		};

		tTable lOVRTable = compute_svc_ovr_scores(lBinaryScores, lClasses);


		tTable lTable = lOVRTable;

		int lBestClass = get_arg_max( lTable["Score"] );
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
