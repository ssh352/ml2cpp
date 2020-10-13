// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : CalibratedClassifierCV_sigmoid_Pipeline
// Dataset : iris_date_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_CalibratedClassifierCV_sigmoid_Pipeline_iris_date_tgt.exe ml2cpp-demo_CalibratedClassifierCV_sigmoid_Pipeline_iris_date_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };

		return lClasses;
	}

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 5.8474999999999975 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 3.040833333333332 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 3.844166666666667 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 1.2458333333333336 ) : ( Feature_3)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 5.8474999999999975 ) / 0.827039146594646 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 3.040833333333332 ) / 0.43922200789830873 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 3.844166666666667 ) / 1.7109839193347847 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 1.2458333333333336 ) / 0.7486538845747673 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
	
			return lClasses;
		}
	
		namespace BestEstimator_0 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
		
				return lClasses;
			}
		
			typedef std::vector<double> tNodeData;
			std::map<int, tNodeData> Decision_Tree_Node_data = {
					{ 1 ,  {1.0, 0.0, 0.0 }} ,
					{ 3 ,  {0.0, 1.0, 0.0 }} ,
					{ 7 ,  {0.0, 0.6666666666666666, 0.3333333333333333 }} ,
					{ 8 ,  {0.0, 0.0, 1.0 }} ,
					{ 9 ,  {0.0, 1.0, 0.0 }} ,
					{ 10 ,  {0.0, 0.0, 1.0 }} 
			};
			
		
			int get_decision_tree_node_index(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				int lNodeIndex = (scaler_output_5 <= -0.6622998267412186) ? ( 1 ) : ( (scaler_output_4 <= 0.5294224619865417) ? ( 3 ) : ( (scaler_output_4 <= 0.7047601938247681) ? ( (scaler_output_3 <= 0.020870234817266464) ? ( (scaler_output_5 <= 0.6734309196472168) ? ( 7 ) : ( 8 ) ) : ( 9 ) ) : ( 10 ) ) );
			
				return lNodeIndex;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
					"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
					"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
					"Decision", "DecisionProba" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				int lNodeIndex = get_decision_tree_node_index(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5);
		
				std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
		
		
				tTable lTable;
		
				lTable["Score"] = { 
					std::any(),
					std::any(),
					std::any() 
				} ;
				lTable["Proba"] = { 
					logistic(5.393626322122635 * coalesce( std::any() , lNodeValue [ 0 ] ) + -3.091045517303994),
					logistic(4.671313939641344 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.9060595363277137),
					logistic(4.750559975206732 * coalesce( std::any() , lNodeValue [ 2 ] ) + -2.3829244862170724) 
				} ;
				int lBestClass = get_arg_max( lTable["Proba"] );
				auto lDecision = lClasses[lBestClass];
				lTable["Decision"] = { lDecision } ;
				lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
		
				recompute_log_probas( lTable );
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace BestEstimator_0
		
	
		namespace BestEstimator_1 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
		
				return lClasses;
			}
		
			typedef std::vector<double> tNodeData;
			std::map<int, tNodeData> Decision_Tree_Node_data = {
					{ 1 ,  {1.0, 0.0, 0.0 }} ,
					{ 4 ,  {0.0, 1.0, 0.0 }} ,
					{ 6 ,  {0.0, 0.0, 1.0 }} ,
					{ 7 ,  {0.0, 1.0, 0.0 }} ,
					{ 10 ,  {0.0, 0.0, 1.0 }} ,
					{ 11 ,  {0.0, 1.0, 0.0 }} ,
					{ 12 ,  {0.0, 0.0, 1.0 }} 
			};
			
		
			int get_decision_tree_node_index(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				int lNodeIndex = (scaler_output_5 <= -0.5955132991075516) ? ( 1 ) : ( (scaler_output_4 <= 0.646314263343811) ? ( (scaler_output_5 <= 0.5398578494787216) ? ( 4 ) : ( (scaler_output_3 <= 0.13470788672566414) ? ( 6 ) : ( 7 ) ) ) : ( (scaler_output_4 <= 0.7047601938247681) ? ( (scaler_output_2 <= 0.7889590263366699) ? ( 10 ) : ( 11 ) ) : ( 12 ) ) );
			
				return lNodeIndex;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
					"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
					"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
					"Decision", "DecisionProba" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				int lNodeIndex = get_decision_tree_node_index(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5);
		
				std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
		
		
				tTable lTable;
		
				lTable["Score"] = { 
					std::any(),
					std::any(),
					std::any() 
				} ;
				lTable["Proba"] = { 
					logistic(5.393626322122635 * coalesce( std::any() , lNodeValue [ 0 ] ) + -3.091045517303994),
					logistic(5.442417342523718 * coalesce( std::any() , lNodeValue [ 1 ] ) + -3.0445224878196573),
					logistic(5.48063825977776 * coalesce( std::any() , lNodeValue [ 2 ] ) + -2.995732594243071) 
				} ;
				int lBestClass = get_arg_max( lTable["Proba"] );
				auto lDecision = lClasses[lBestClass];
				lTable["Decision"] = { lDecision } ;
				lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
		
				recompute_log_probas( lTable );
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace BestEstimator_1
		
	
		namespace BestEstimator_2 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
		
				return lClasses;
			}
		
			typedef std::vector<double> tNodeData;
			std::map<int, tNodeData> Decision_Tree_Node_data = {
					{ 1 ,  {1.0, 0.0, 0.0 }} ,
					{ 5 ,  {0.0, 0.0, 1.0 }} ,
					{ 6 ,  {0.0, 1.0, 0.0 }} ,
					{ 8 ,  {0.0, 0.0, 1.0 }} ,
					{ 9 ,  {0.0, 1.0, 0.0 }} ,
					{ 10 ,  {0.0, 0.0, 1.0 }} 
			};
			
		
			int get_decision_tree_node_index(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				int lNodeIndex = (scaler_output_5 <= -0.5955132991075516) ? ( 1 ) : ( (scaler_output_5 <= 0.6734309196472168) ? ( (scaler_output_4 <= 0.646314263343811) ? ( (scaler_output_2 <= -1.0851964950561523) ? ( 5 ) : ( 6 ) ) : ( (scaler_output_5 <= 0.5398578494787216) ? ( 8 ) : ( 9 ) ) ) : ( 10 ) );
			
				return lNodeIndex;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
					"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
					"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
					"Decision", "DecisionProba" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				int lNodeIndex = get_decision_tree_node_index(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5);
		
				std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
		
		
				tTable lTable;
		
				lTable["Score"] = { 
					std::any(),
					std::any(),
					std::any() 
				} ;
				lTable["Proba"] = { 
					logistic(5.393626322122635 * coalesce( std::any() , lNodeValue [ 0 ] ) + -3.091045517303994),
					logistic(4.34695826320431 * coalesce( std::any() , lNodeValue [ 1 ] ) + -1.9490625020164078),
					logistic(4.3109878254872465 * coalesce( std::any() , lNodeValue [ 2 ] ) + -2.995735836256492) 
				} ;
				int lBestClass = get_arg_max( lTable["Proba"] );
				auto lDecision = lClasses[lBestClass];
				lTable["Decision"] = { lDecision } ;
				lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
		
				recompute_log_probas( lTable );
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace BestEstimator_2
		
	
		namespace BestEstimator_3 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
		
				return lClasses;
			}
		
			typedef std::vector<double> tNodeData;
			std::map<int, tNodeData> Decision_Tree_Node_data = {
					{ 1 ,  {1.0, 0.0, 0.0 }} ,
					{ 4 ,  {0.0, 1.0, 0.0 }} ,
					{ 6 ,  {0.0, 0.0, 1.0 }} ,
					{ 7 ,  {0.0, 1.0, 0.0 }} ,
					{ 10 ,  {0.0, 1.0, 0.0 }} ,
					{ 11 ,  {0.0, 0.0, 1.0 }} ,
					{ 12 ,  {0.0, 0.0, 1.0 }} 
			};
			
		
			int get_decision_tree_node_index(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				int lNodeIndex = (scaler_output_5 <= -0.5955132991075516) ? ( 1 ) : ( (scaler_output_4 <= 0.5878683626651764) ? ( (scaler_output_5 <= 0.5398578494787216) ? ( 4 ) : ( (scaler_output_3 <= 0.13470788672566414) ? ( 6 ) : ( 7 ) ) ) : ( (scaler_output_3 <= -1.117506206035614) ? ( (scaler_output_4 <= 0.646314263343811) ? ( 10 ) : ( 11 ) ) : ( 12 ) ) );
			
				return lNodeIndex;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
					"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
					"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
					"Decision", "DecisionProba" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				int lNodeIndex = get_decision_tree_node_index(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5);
		
				std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
		
		
				tTable lTable;
		
				lTable["Score"] = { 
					std::any(),
					std::any(),
					std::any() 
				} ;
				lTable["Proba"] = { 
					logistic(5.442417342523718 * coalesce( std::any() , lNodeValue [ 0 ] ) + -3.0445224878196573),
					logistic(4.346958263204307 * coalesce( std::any() , lNodeValue [ 1 ] ) + -1.9490625020164078),
					logistic(4.261122708431462 * coalesce( std::any() , lNodeValue [ 2 ] ) + -3.0445238393052825) 
				} ;
				int lBestClass = get_arg_max( lTable["Proba"] );
				auto lDecision = lClasses[lBestClass];
				lTable["Decision"] = { lDecision } ;
				lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
		
				recompute_log_probas( lTable );
		
				return lTable;
			}
		
			tTable compute_model_outputs_from_table( tTable const & iTable) {
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace BestEstimator_3
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
				"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
				"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
				"Decision", "DecisionProba" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
			auto lClasses = get_classes();
	
			std::vector<tTable> lBaseScores = { 
				BestEstimator_0::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5),
				BestEstimator_1::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5),
				BestEstimator_2::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5),
				BestEstimator_3::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5)
			};
	
			tTable lAggregatedTable = aggregate_calibrated_scores(lBaseScores, {"Proba", "Score"});
	
	
			tTable lTable = lAggregatedTable;
	
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
			"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
			"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable = lTable_model;

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
	score_csv_file("outputs/ml2cpp-demo/datasets/iris_date_tgt.csv");
	return 0;
}
