// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_sigmoid
// Dataset : iris

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_sigmoid_iris.exe ml2cpp-demo_SVC_sigmoid_iris.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2 };

		return lClasses;
	}

	namespace pb_0_1 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_1 = { 
		1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_1 = { 
		 { 5.1, 3.7, 1.5, 0.4 },
		 { 4.7, 3.2, 1.3, 0.2 },
		 { 4.9, 3.1, 1.5, 0.2 },
		 { 4.6, 3.4, 1.4, 0.3 },
		 { 4.6, 3.1, 1.5, 0.2 },
		 { 5.0, 3.5, 1.6, 0.6 },
		 { 5.0, 3.5, 1.3, 0.3 },
		 { 5.2, 3.4, 1.4, 0.2 },
		 { 5.5, 4.2, 1.4, 0.2 },
		 { 4.8, 3.1, 1.6, 0.2 },
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.0, 3.4, 1.6, 0.4 },
		 { 5.4, 3.4, 1.5, 0.4 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 5.0, 3.6, 1.4, 0.2 },
		 { 5.0, 3.4, 1.5, 0.2 },
		 { 5.1, 3.5, 1.4, 0.2 },
		 { 5.1, 3.8, 1.5, 0.3 },
		 { 5.7, 3.8, 1.7, 0.3 },
		 { 4.6, 3.2, 1.4, 0.2 },
		 { 4.8, 3.4, 1.6, 0.2 },
		 { 5.1, 3.4, 1.5, 0.2 },
		 { 5.2, 4.1, 1.5, 0.1 },
		 { 4.4, 2.9, 1.4, 0.2 },
		 { 4.4, 3.0, 1.3, 0.2 },
		 { 5.1, 3.8, 1.6, 0.2 },
		 { 4.7, 3.2, 1.6, 0.2 },
		 { 5.1, 3.8, 1.9, 0.4 },
		 { 4.4, 3.2, 1.3, 0.2 },
		 { 4.8, 3.0, 1.4, 0.3 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 5.1, 3.5, 1.4, 0.3 },
		 { 5.7, 4.4, 1.5, 0.4 },
		 { 5.4, 3.4, 1.7, 0.2 },
		 { 5.4, 3.9, 1.3, 0.4 },
		 { 4.9, 3.6, 1.4, 0.1 },
		 { 4.3, 3.0, 1.1, 0.1 },
		 { 6.1, 2.8, 4.0, 1.3 },
		 { 6.0, 2.9, 4.5, 1.5 },
		 { 6.8, 2.8, 4.8, 1.4 },
		 { 5.5, 2.5, 4.0, 1.3 },
		 { 5.6, 2.5, 3.9, 1.1 },
		 { 5.8, 2.6, 4.0, 1.2 },
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 6.3, 3.3, 4.7, 1.6 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 5.6, 2.7, 4.2, 1.3 },
		 { 5.8, 2.7, 4.1, 1.0 },
		 { 7.0, 3.2, 4.7, 1.4 },
		 { 6.6, 3.0, 4.4, 1.4 },
		 { 5.5, 2.3, 4.0, 1.3 },
		 { 5.8, 2.7, 3.9, 1.2 },
		 { 5.5, 2.6, 4.4, 1.2 },
		 { 6.7, 3.1, 4.4, 1.4 },
		 { 5.2, 2.7, 3.9, 1.4 },
		 { 6.3, 2.3, 4.4, 1.3 },
		 { 5.0, 2.3, 3.3, 1.0 },
		 { 5.7, 3.0, 4.2, 1.2 },
		 { 5.7, 2.8, 4.5, 1.3 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 4.9, 2.4, 3.3, 1.0 },
		 { 5.5, 2.4, 3.8, 1.1 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.0, 3.4, 4.5, 1.6 },
		 { 5.5, 2.4, 3.7, 1.0 },
		 { 6.7, 3.1, 4.7, 1.5 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 5.0, 2.0, 3.5, 1.0 },
		 { 6.1, 2.9, 4.7, 1.4 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		 { 5.7, 2.6, 3.5, 1.0 },
		 { 5.9, 3.0, 4.2, 1.5 },
		 { 6.1, 2.8, 4.7, 1.2 },
		 { 6.2, 2.9, 4.3, 1.3 },
		 { 6.4, 3.2, 4.5, 1.5 },
		 { 6.9, 3.1, 4.9, 1.5 },
		};
		
	
		double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
			return sigmoid_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.06541912694449836,0.0 ) + -0.5651322901248932;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1",
				"Proba_0", "Proba_1",
				"LogProba_0", "LogProba_1" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_1 = sigmoid_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.06541912694449836,0.0 ) + -0.5651322901248932;
	
			std::any lLogistic_0_1 = logistic(0.5834722810556603 * lDotProduct_0_1 + 0.4137220267905177);
	
	
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
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 2 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_2 = { 
		1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_2 = { 
		 { 5.1, 3.7, 1.5, 0.4 },
		 { 4.7, 3.2, 1.3, 0.2 },
		 { 4.9, 3.1, 1.5, 0.2 },
		 { 4.6, 3.4, 1.4, 0.3 },
		 { 4.6, 3.1, 1.5, 0.2 },
		 { 5.0, 3.5, 1.6, 0.6 },
		 { 5.0, 3.5, 1.3, 0.3 },
		 { 5.2, 3.4, 1.4, 0.2 },
		 { 5.5, 4.2, 1.4, 0.2 },
		 { 4.8, 3.1, 1.6, 0.2 },
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.0, 3.4, 1.6, 0.4 },
		 { 5.4, 3.4, 1.5, 0.4 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 5.0, 3.6, 1.4, 0.2 },
		 { 5.0, 3.4, 1.5, 0.2 },
		 { 5.1, 3.5, 1.4, 0.2 },
		 { 5.1, 3.8, 1.5, 0.3 },
		 { 5.7, 3.8, 1.7, 0.3 },
		 { 4.6, 3.2, 1.4, 0.2 },
		 { 4.8, 3.4, 1.6, 0.2 },
		 { 5.1, 3.4, 1.5, 0.2 },
		 { 5.2, 4.1, 1.5, 0.1 },
		 { 4.4, 2.9, 1.4, 0.2 },
		 { 4.4, 3.0, 1.3, 0.2 },
		 { 5.1, 3.8, 1.6, 0.2 },
		 { 4.7, 3.2, 1.6, 0.2 },
		 { 5.1, 3.8, 1.9, 0.4 },
		 { 4.4, 3.2, 1.3, 0.2 },
		 { 4.8, 3.0, 1.4, 0.3 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 5.1, 3.5, 1.4, 0.3 },
		 { 5.7, 4.4, 1.5, 0.4 },
		 { 5.4, 3.4, 1.7, 0.2 },
		 { 5.4, 3.9, 1.3, 0.4 },
		 { 4.9, 3.6, 1.4, 0.1 },
		 { 4.3, 3.0, 1.1, 0.1 },
		 { 6.3, 3.3, 6.0, 2.5 },
		 { 7.9, 3.8, 6.4, 2.0 },
		 { 7.1, 3.0, 5.9, 2.1 },
		 { 6.5, 3.0, 5.2, 2.0 },
		 { 6.8, 3.0, 5.5, 2.1 },
		 { 5.8, 2.7, 5.1, 1.9 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 7.7, 3.0, 6.1, 2.3 },
		 { 6.8, 3.2, 5.9, 2.3 },
		 { 6.9, 3.1, 5.1, 2.3 },
		 { 7.7, 2.6, 6.9, 2.3 },
		 { 6.7, 2.5, 5.8, 1.8 },
		 { 6.4, 2.8, 5.6, 2.1 },
		 { 6.3, 3.4, 5.6, 2.4 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.9, 3.1, 5.4, 2.1 },
		 { 6.4, 3.2, 5.3, 2.3 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 7.2, 3.2, 6.0, 1.8 },
		 { 6.7, 3.1, 5.6, 2.4 },
		 { 5.9, 3.0, 5.1, 1.8 },
		 { 6.3, 2.9, 5.6, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.1, 2.6, 5.6, 1.4 },
		 { 6.2, 3.4, 5.4, 2.3 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 6.5, 3.0, 5.5, 1.8 },
		 { 6.7, 3.3, 5.7, 2.1 },
		 { 5.8, 2.7, 5.1, 1.9 },
		 { 6.7, 3.0, 5.2, 2.3 },
		 { 6.5, 3.0, 5.8, 2.2 },
		 { 6.7, 3.3, 5.7, 2.5 },
		 { 7.2, 3.6, 6.1, 2.5 },
		 { 7.2, 3.0, 5.8, 1.6 },
		 { 6.0, 2.2, 5.0, 1.5 },
		 { 6.9, 3.2, 5.7, 2.3 },
		 { 7.4, 2.8, 6.1, 1.9 },
		 { 7.3, 2.9, 6.3, 1.8 },
		 { 6.4, 2.7, 5.3, 1.9 },
		 { 6.3, 2.5, 5.0, 1.9 },
		};
		
	
		double get_problem_0_2_decision_function( std::vector<std::any> const & inputs) {
			return sigmoid_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.06541912694449836,0.0 ) + -0.8234640657901764;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_2",
				"Proba_0", "Proba_2",
				"LogProba_0", "LogProba_2" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_2 = sigmoid_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.06541912694449836,0.0 ) + -0.8234640657901764;
	
			std::any lLogistic_0_2 = logistic(21.70515591311935 * lDotProduct_0_2 + 23.002092663210234);
	
	
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
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 1, 2 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_1_2 = { 
		1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_1_2 = { 
		 { 6.1, 2.8, 4.0, 1.3 },
		 { 6.0, 2.9, 4.5, 1.5 },
		 { 6.8, 2.8, 4.8, 1.4 },
		 { 5.5, 2.5, 4.0, 1.3 },
		 { 5.6, 2.5, 3.9, 1.1 },
		 { 5.8, 2.6, 4.0, 1.2 },
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 6.3, 3.3, 4.7, 1.6 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 5.6, 2.7, 4.2, 1.3 },
		 { 5.8, 2.7, 4.1, 1.0 },
		 { 7.0, 3.2, 4.7, 1.4 },
		 { 6.6, 3.0, 4.4, 1.4 },
		 { 5.5, 2.3, 4.0, 1.3 },
		 { 5.8, 2.7, 3.9, 1.2 },
		 { 5.5, 2.6, 4.4, 1.2 },
		 { 6.7, 3.1, 4.4, 1.4 },
		 { 5.2, 2.7, 3.9, 1.4 },
		 { 6.3, 2.3, 4.4, 1.3 },
		 { 5.0, 2.3, 3.3, 1.0 },
		 { 5.7, 3.0, 4.2, 1.2 },
		 { 5.7, 2.8, 4.5, 1.3 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 4.9, 2.4, 3.3, 1.0 },
		 { 5.5, 2.4, 3.8, 1.1 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.0, 3.4, 4.5, 1.6 },
		 { 5.5, 2.4, 3.7, 1.0 },
		 { 6.7, 3.1, 4.7, 1.5 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 5.0, 2.0, 3.5, 1.0 },
		 { 6.1, 2.9, 4.7, 1.4 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		 { 5.7, 2.6, 3.5, 1.0 },
		 { 5.9, 3.0, 4.2, 1.5 },
		 { 6.1, 2.8, 4.7, 1.2 },
		 { 6.2, 2.9, 4.3, 1.3 },
		 { 6.4, 3.2, 4.5, 1.5 },
		 { 6.9, 3.1, 4.9, 1.5 },
		 { 6.3, 3.3, 6.0, 2.5 },
		 { 7.9, 3.8, 6.4, 2.0 },
		 { 7.1, 3.0, 5.9, 2.1 },
		 { 6.5, 3.0, 5.2, 2.0 },
		 { 6.8, 3.0, 5.5, 2.1 },
		 { 5.8, 2.7, 5.1, 1.9 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 7.7, 3.0, 6.1, 2.3 },
		 { 6.8, 3.2, 5.9, 2.3 },
		 { 6.9, 3.1, 5.1, 2.3 },
		 { 7.7, 2.6, 6.9, 2.3 },
		 { 6.7, 2.5, 5.8, 1.8 },
		 { 6.4, 2.8, 5.6, 2.1 },
		 { 6.3, 3.4, 5.6, 2.4 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.9, 3.1, 5.4, 2.1 },
		 { 6.4, 3.2, 5.3, 2.3 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 7.2, 3.2, 6.0, 1.8 },
		 { 6.7, 3.1, 5.6, 2.4 },
		 { 5.9, 3.0, 5.1, 1.8 },
		 { 6.3, 2.9, 5.6, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.1, 2.6, 5.6, 1.4 },
		 { 6.2, 3.4, 5.4, 2.3 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 6.5, 3.0, 5.5, 1.8 },
		 { 6.7, 3.3, 5.7, 2.1 },
		 { 5.8, 2.7, 5.1, 1.9 },
		 { 6.7, 3.0, 5.2, 2.3 },
		 { 6.5, 3.0, 5.8, 2.2 },
		 { 6.7, 3.3, 5.7, 2.5 },
		 { 7.2, 3.6, 6.1, 2.5 },
		 { 7.2, 3.0, 5.8, 1.6 },
		 { 6.0, 2.2, 5.0, 1.5 },
		 { 6.9, 3.2, 5.7, 2.3 },
		 { 7.4, 2.8, 6.1, 1.9 },
		 { 7.3, 2.9, 6.3, 1.8 },
		 { 6.4, 2.7, 5.3, 1.9 },
		 { 6.3, 2.5, 5.0, 1.9 },
		};
		
	
		double get_problem_1_2_decision_function( std::vector<std::any> const & inputs) {
			return sigmoid_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.06541912694449836,0.0 ) + -0.9806293547153473;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_1", "Score_2",
				"Proba_1", "Proba_2",
				"LogProba_1", "LogProba_2" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_1_2 = sigmoid_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.06541912694449836,0.0 ) + -0.9806293547153473;
	
			std::any lLogistic_1_2 = logistic(0.7568223179504932 * lDotProduct_1_2 + 0.38474111086711604);
	
	
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
			"Score_0", "Score_1", "Score_2",
			"Proba_0", "Proba_1", "Proba_2",
			"LogProba_0", "LogProba_1", "LogProba_2",
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
	score_csv_file("outputs/ml2cpp-demo/datasets/iris.csv");
	return 0;
}
