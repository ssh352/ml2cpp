// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : LGBMRegressor
// Dataset : freidman3

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_LGBMRegressor_freidman3.exe ml2cpp-demo_LGBMRegressor_freidman3.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace LGBM_Tree_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {1.347595450430665 }} ,
				{ 6 ,  {1.3612138719364468 }} ,
				{ 7 ,  {1.3687826343726268 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_0
	

	namespace LGBM_Tree_1 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.012956810660571569 }} ,
				{ 6 ,  {-1.9310298375785352e-05 }} ,
				{ 7 ,  {0.007171014051786379 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_1
	

	namespace LGBM_Tree_2 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.012308970230099347 }} ,
				{ 6 ,  {-1.8344720869901636e-05 }} ,
				{ 7 ,  {0.006812463592933982 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_2
	

	namespace LGBM_Tree_3 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.011693521409428545 }} ,
				{ 6 ,  {-1.7427608725570497e-05 }} ,
				{ 7 ,  {0.006471840292215348 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_3
	

	namespace LGBM_Tree_4 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.01110884565028495 }} ,
				{ 6 ,  {0.006405732370654328 }} ,
				{ 7 ,  {0.00011649514427003654 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 49.232675914117046 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_4
	

	namespace LGBM_Tree_5 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.010553403340634846 }} ,
				{ 6 ,  {-0.0002020732409575777 }} ,
				{ 7 ,  {0.005943816204212214 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_5
	

	namespace LGBM_Tree_6 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.010025733288022734 }} ,
				{ 6 ,  {0.00589068644597622 }} ,
				{ 7 ,  {-6.627479325170103e-05 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 49.232675914117046 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_6
	

	namespace LGBM_Tree_7 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.00952444663714795 }} ,
				{ 6 ,  {-0.00035885490831874664 }} ,
				{ 7 ,  {0.005461824391233294 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_7
	

	namespace LGBM_Tree_8 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.0090482240897559 }} ,
				{ 6 ,  {0.005420072271307516 }} ,
				{ 7 ,  {-0.0002221693163332732 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 49.232675914117046 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_8
	

	namespace LGBM_Tree_9 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.008595812897242252 }} ,
				{ 6 ,  {-0.0004910105373710394 }} ,
				{ 7 ,  {0.005021665638043104 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_9
	

	namespace LGBM_Tree_10 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.008166022243953887 }} ,
				{ 6 ,  {0.004989863269697203 }} ,
				{ 7 ,  {-0.00035428743728477025 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 49.232675914117046 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_10
	

	namespace LGBM_Tree_11 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.007757721060798282 }} ,
				{ 6 ,  {-0.0006014356145723945 }} ,
				{ 7 ,  {0.004619534037958242 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_1 <= 821.2744087124171 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_11
	

	namespace LGBM_Tree_12 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.00743617479290281 }} ,
				{ 6 ,  {-0.001340077928311768 }} ,
				{ 7 ,  {0.004850034420623591 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_1 <= 568.0729020105207 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.41442794810547895 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_12
	

	namespace LGBM_Tree_13 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.007244773244573958 }} ,
				{ 6 ,  {0.005796788463538344 }} ,
				{ 7 ,  {0.0006651591673191335 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 34.446685757025755 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_13
	

	namespace LGBM_Tree_14 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.007107818481468019 }} ,
				{ 6 ,  {-0.0009861680845330869 }} ,
				{ 7 ,  {0.004472992588814936 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_1 <= 568.0729020105207 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.41442794810547895 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_14
	

	namespace LGBM_Tree_15 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-0.006774924620099012 }} ,
				{ 6 ,  {0.005467539610849186 }} ,
				{ 7 ,  {0.0005942580447456724 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( ( Feature_2 <= 0.3052070585017281 ) ? ( 2 ) : ( ( ( Feature_0 <= 34.446685757025755 ) ? ( 6 ) : ( 7 ) ) ) );
		
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
	
	} // eof namespace LGBM_Tree_15
	

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
			LGBM_Tree_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_1::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_2::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_3::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_4::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_5::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_6::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_7::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_8::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_9::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_10::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_11::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_12::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_13::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_14::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			LGBM_Tree_15::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3)
		};

		tTable lAggregatedTable = aggregate_lgb_scores(lTreeScores, {"Estimator"});


		tTable lTable;

		std::any  lEstimator = lAggregatedTable["Estimator"][0];
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
