// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : CalibratedClassifierCV_sigmoid
// Dataset : iris

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_CalibratedClassifierCV_sigmoid_iris.exe ml2cpp-demo_CalibratedClassifierCV_sigmoid_iris.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2 };

		return lClasses;
	}

	namespace BestEstimator_0 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2 };
	
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
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_3 <= 0.75) ? ( 1 ) : ( (Feature_2 <= 4.75) ? ( 3 ) : ( (Feature_2 <= 5.049999952316284) ? ( (Feature_1 <= 3.049999952316284) ? ( (Feature_3 <= 1.75) ? ( 7 ) : ( 8 ) ) : ( 9 ) ) : ( 10 ) ) );
		
			return lNodeIndex;
		}
		
	
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
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
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
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_0
	

	namespace BestEstimator_1 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2 };
	
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
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_3 <= 0.800000011920929) ? ( 1 ) : ( (Feature_2 <= 4.950000047683716) ? ( (Feature_3 <= 1.6500000357627869) ? ( 4 ) : ( (Feature_1 <= 3.100000023841858) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_2 <= 5.049999952316284) ? ( (Feature_0 <= 6.5) ? ( 10 ) : ( 11 ) ) : ( 12 ) ) );
		
			return lNodeIndex;
		}
		
	
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
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
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
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_1
	

	namespace BestEstimator_2 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2 };
	
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
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_3 <= 0.800000011920929) ? ( 1 ) : ( (Feature_3 <= 1.75) ? ( (Feature_2 <= 4.950000047683716) ? ( (Feature_0 <= 4.950000047683716) ? ( 5 ) : ( 6 ) ) : ( (Feature_3 <= 1.6500000357627869) ? ( 8 ) : ( 9 ) ) ) : ( 10 ) );
		
			return lNodeIndex;
		}
		
	
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
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
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
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_2
	

	namespace BestEstimator_3 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2 };
	
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
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_3 <= 0.800000011920929) ? ( 1 ) : ( (Feature_2 <= 4.8500001430511475) ? ( (Feature_3 <= 1.6500000357627869) ? ( 4 ) : ( (Feature_1 <= 3.100000023841858) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 2.549999952316284) ? ( (Feature_2 <= 4.950000047683716) ? ( 10 ) : ( 11 ) ) : ( 12 ) ) );
		
			return lNodeIndex;
		}
		
	
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
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
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
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_3
	

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

		std::vector<tTable> lBaseScores = { 
			BestEstimator_0::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3),
			BestEstimator_1::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3),
			BestEstimator_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3),
			BestEstimator_3::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3)
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
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/iris.csv");
	return 0;
}
