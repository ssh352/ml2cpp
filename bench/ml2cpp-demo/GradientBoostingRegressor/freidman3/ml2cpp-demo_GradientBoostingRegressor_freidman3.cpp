// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : GradientBoostingRegressor
// Dataset : freidman3

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_GradientBoostingRegressor_freidman3.exe ml2cpp-demo_GradientBoostingRegressor_freidman3.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace SubModel_0_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.75121736 }} ,
				{ 4 ,  {-0.04397826 }} ,
				{ 6 ,  {-0.9467478 }} ,
				{ 7 ,  {-0.60474301 }} ,
				{ 10 ,  {-0.04512172 }} ,
				{ 11 ,  {0.14262056 }} ,
				{ 13 ,  {-0.19694189 }} ,
				{ 14 ,  {0.06444005 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.1157732792198658) ? ( (Feature_0 <= 28.497106552124023) ? ( (Feature_2 <= 0.025156566640362144) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.07712984457612038) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 61.53804397583008) ? ( (Feature_1 <= 254.32003784179688) ? ( 10 ) : ( 11 ) ) : ( (Feature_1 <= 851.9430541992188) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_0_0
	

	namespace SubModel_1_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.67609563 }} ,
				{ 4 ,  {-0.03958043 }} ,
				{ 6 ,  {-0.54426871 }} ,
				{ 7 ,  {-0.85207302 }} ,
				{ 10 ,  {0.04472921 }} ,
				{ 11 ,  {0.15500737 }} ,
				{ 13 ,  {-0.16907932 }} ,
				{ 14 ,  {0.05696399 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.1157732792198658) ? ( (Feature_0 <= 28.497106552124023) ? ( (Feature_2 <= 0.025156566640362144) ? ( 3 ) : ( 4 ) ) : ( (Feature_3 <= 3.731728196144104) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 46.876718521118164) ? ( (Feature_3 <= 2.187718987464905) ? ( 10 ) : ( 11 ) ) : ( (Feature_1 <= 736.0386047363281) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_1_0
	

	namespace SubModel_2_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.03562239 }} ,
				{ 4 ,  {-0.60848607 }} ,
				{ 6 ,  {-0.76686572 }} ,
				{ 7 ,  {-0.48984184 }} ,
				{ 10 ,  {-0.01084404 }} ,
				{ 11 ,  {0.1163042 }} ,
				{ 13 ,  {-0.248085 }} ,
				{ 14 ,  {-0.29431517 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.1157732792198658) ? ( (Feature_0 <= 28.497106552124023) ? ( (Feature_1 <= 1685.821044921875) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.07712984457612038) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 90.57643127441406) ? ( (Feature_1 <= 821.2744140625) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 93.90718078613281) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_2_0
	

	namespace SubModel_3_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.58371804 }} ,
				{ 4 ,  {-0.72124082 }} ,
				{ 6 ,  {-0.5370711 }} ,
				{ 7 ,  {-0.08369919 }} ,
				{ 10 ,  {0.12099107 }} ,
				{ 11 ,  {-0.12422849 }} ,
				{ 13 ,  {0.05630855 }} ,
				{ 14 ,  {0.12293342 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.20348544418811798) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_3 <= 5.679425954818726) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 527.4905853271484) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 784.8369445800781) ? ( (Feature_0 <= 36.620771408081055) ? ( 10 ) : ( 11 ) ) : ( (Feature_2 <= 0.379633828997612) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_3_0
	

	namespace SubModel_4_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.52534624 }} ,
				{ 4 ,  {-0.64911674 }} ,
				{ 6 ,  {-0.48336399 }} ,
				{ 7 ,  {-0.07532927 }} ,
				{ 10 ,  {-0.04400489 }} ,
				{ 11 ,  {0.10632735 }} ,
				{ 13 ,  {-0.14466173 }} ,
				{ 14 ,  {0.06134524 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.20348544418811798) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_3 <= 5.679425954818726) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 527.4905853271484) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 65.67565155029297) ? ( (Feature_1 <= 254.32003784179688) ? ( 10 ) : ( 11 ) ) : ( (Feature_1 <= 797.6608581542969) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_4_0
	

	namespace SubModel_5_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.47281162 }} ,
				{ 4 ,  {-0.58420506 }} ,
				{ 6 ,  {-0.43502759 }} ,
				{ 7 ,  {-0.07302121 }} ,
				{ 10 ,  {0.099079 }} ,
				{ 11 ,  {-0.16602827 }} ,
				{ 13 ,  {0.00277429 }} ,
				{ 14 ,  {0.09368453 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.2454954981803894) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_3 <= 5.679425954818726) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 516.2426300048828) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 329.4079284667969) ? ( (Feature_0 <= 29.003992080688477) ? ( 10 ) : ( 11 ) ) : ( (Feature_2 <= 0.379633828997612) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_5_0
	

	namespace SubModel_6_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.38944987 }} ,
				{ 4 ,  {-0.4936978 }} ,
				{ 6 ,  {-0.39152483 }} ,
				{ 7 ,  {-0.06571909 }} ,
				{ 10 ,  {0.0891711 }} ,
				{ 11 ,  {-0.14942544 }} ,
				{ 13 ,  {0.10306012 }} ,
				{ 14 ,  {0.04202352 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.2454954981803894) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_0 <= 26.660706520080566) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 516.2426300048828) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 329.4079284667969) ? ( (Feature_0 <= 29.003992080688477) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 42.91398620605469) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_6_0
	

	namespace SubModel_7_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.38137307 }} ,
				{ 4 ,  {-0.47641478 }} ,
				{ 6 ,  {-0.26444579 }} ,
				{ 7 ,  {-0.01513266 }} ,
				{ 10 ,  {0.09260739 }} ,
				{ 11 ,  {0.02609225 }} ,
				{ 13 ,  {-0.1648421 }} ,
				{ 14 ,  {-0.20928182 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.2454954981803894) ? ( (Feature_2 <= 0.041584232822060585) ? ( (Feature_3 <= 5.679425954818726) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 765.2993469238281) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 90.57643127441406) ? ( (Feature_0 <= 36.726707458496094) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 95.66353988647461) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_7_0
	

	namespace SubModel_8_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.22971432 }} ,
				{ 4 ,  {-0.4462293 }} ,
				{ 6 ,  {-0.37057044 }} ,
				{ 7 ,  {-0.04929263 }} ,
				{ 10 ,  {0.07304228 }} ,
				{ 11 ,  {-0.08902125 }} ,
				{ 13 ,  {0.10782022 }} ,
				{ 14 ,  {0.06193836 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.20348544418811798) ? ( (Feature_1 <= 574.9090576171875) ? ( (Feature_3 <= 3.731728196144104) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.02901188051328063) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 784.8369445800781) ? ( (Feature_0 <= 36.620771408081055) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 20.67043399810791) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_8_0
	

	namespace SubModel_9_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.2476556 }} ,
				{ 4 ,  {-0.47373172 }} ,
				{ 6 ,  {-0.33351339 }} ,
				{ 7 ,  {-0.04436337 }} ,
				{ 10 ,  {0.06573805 }} ,
				{ 11 ,  {-0.08011912 }} ,
				{ 13 ,  {0.08211232 }} ,
				{ 14 ,  {0.04746813 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.20348544418811798) ? ( (Feature_1 <= 574.9090576171875) ? ( (Feature_0 <= 56.76608467102051) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.02901188051328063) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 784.8369445800781) ? ( (Feature_0 <= 36.620771408081055) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 42.91398620605469) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_9_0
	

	namespace SubModel_10_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.36314631 }} ,
				{ 4 ,  {-0.1301241 }} ,
				{ 6 ,  {0.02319668 }} ,
				{ 7 ,  {-0.24195919 }} ,
				{ 10 ,  {-0.10161059 }} ,
				{ 11 ,  {0.08709911 }} ,
				{ 13 ,  {-0.00498891 }} ,
				{ 14 ,  {0.06040245 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.25638625025749207) ? ( (Feature_1 <= 1165.0020141601562) ? ( (Feature_2 <= 0.056316668167710304) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 1685.821044921875) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 329.4079284667969) ? ( (Feature_3 <= 7.732187747955322) ? ( 10 ) : ( 11 ) ) : ( (Feature_2 <= 0.379633828997612) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_10_0
	

	namespace SubModel_11_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.32683168 }} ,
				{ 4 ,  {-0.11711169 }} ,
				{ 6 ,  {-0.21776327 }} ,
				{ 7 ,  {0.02087701 }} ,
				{ 10 ,  {-0.13360468 }} ,
				{ 11 ,  {0.06440334 }} ,
				{ 13 ,  {0.05056613 }} ,
				{ 14 ,  {-0.05348418 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.25638625025749207) ? ( (Feature_1 <= 1165.0020141601562) ? ( (Feature_2 <= 0.056316668167710304) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.025156566640362144) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 245.38916015625) ? ( (Feature_3 <= 8.161828994750977) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 80.80235290527344) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_11_0
	

	namespace SubModel_12_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.0419506 }} ,
				{ 4 ,  {-0.19598695 }} ,
				{ 6 ,  {-0.29414851 }} ,
				{ 7 ,  {-0.10446904 }} ,
				{ 10 ,  {-0.03347556 }} ,
				{ 11 ,  {0.04958623 }} ,
				{ 13 ,  {-0.08524648 }} ,
				{ 14 ,  {0.05224392 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.25638625025749207) ? ( (Feature_0 <= 28.497106552124023) ? ( (Feature_1 <= 1685.821044921875) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.07712984457612038) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 72.4854736328125) ? ( (Feature_1 <= 245.38916015625) ? ( 10 ) : ( 11 ) ) : ( (Feature_2 <= 0.8193143606185913) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_12_0
	

	namespace SubModel_13_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.26473366 }} ,
				{ 4 ,  {-0.09861411 }} ,
				{ 6 ,  {0.02191523 }} ,
				{ 7 ,  {-0.17638825 }} ,
				{ 10 ,  {0.08103314 }} ,
				{ 11 ,  {0.02128965 }} ,
				{ 13 ,  {-0.13939343 }} ,
				{ 14 ,  {-0.10740973 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.25638625025749207) ? ( (Feature_1 <= 1165.0020141601562) ? ( (Feature_2 <= 0.056316668167710304) ? ( 3 ) : ( 4 ) ) : ( (Feature_1 <= 1685.821044921875) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_0 <= 90.57643127441406) ? ( (Feature_0 <= 12.58546257019043) ? ( 10 ) : ( 11 ) ) : ( (Feature_3 <= 2.733761489391327) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_13_0
	

	namespace SubModel_14_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.08984554 }} ,
				{ 4 ,  {0.10342032 }} ,
				{ 6 ,  {-0.09046686 }} ,
				{ 7 ,  {-0.30147254 }} ,
				{ 10 ,  {-0.11241999 }} ,
				{ 11 ,  {0.05619442 }} ,
				{ 13 ,  {0.04135462 }} ,
				{ 14 ,  {-0.01568513 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.25638625025749207) ? ( (Feature_0 <= 13.137228965759277) ? ( (Feature_3 <= 6.251044988632202) ? ( 3 ) : ( 4 ) ) : ( (Feature_3 <= 10.075586318969727) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 245.38916015625) ? ( (Feature_3 <= 8.161828994750977) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 72.4854736328125) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_14_0
	

	namespace SubModel_15_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.14970274 }} ,
				{ 4 ,  {0.02916529 }} ,
				{ 6 ,  {-0.22218009 }} ,
				{ 7 ,  {-0.08343015 }} ,
				{ 10 ,  {0.03630788 }} ,
				{ 11 ,  {-0.05308837 }} ,
				{ 13 ,  {0.06783364 }} ,
				{ 14 ,  {0.03171649 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = (Feature_2 <= 0.20348544418811798) ? ( (Feature_0 <= 28.497106552124023) ? ( (Feature_2 <= 0.025156566640362144) ? ( 3 ) : ( 4 ) ) : ( (Feature_2 <= 0.07712984457612038) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_1 <= 784.8369445800781) ? ( (Feature_0 <= 36.620771408081055) ? ( 10 ) : ( 11 ) ) : ( (Feature_0 <= 12.852156639099121) ? ( 13 ) : ( 14 ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_15_0
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		std::vector<tTable> lTreeScores = { 
			SubModel_0_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_1_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_2_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_3_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_4_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_5_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_6_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_7_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_8_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_9_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_10_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_11_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_12_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_13_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_14_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			SubModel_15_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3)
		};

		tTable lAggregatedTable = aggregate_gb_scores(lTreeScores, { "Estimator" });


		tTable lTable;

		std::any  lEstimator = 1.3612342030259192 + 0.1 * lAggregatedTable[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman3.csv");
	return 0;
}