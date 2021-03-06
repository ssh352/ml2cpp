// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : XGBRegressor
// Dataset : freidman3

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_XGBRegressor_freidman3.exe ml2cpp-demo_XGBRegressor_freidman3.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace XGB_Tree_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0991495177 }} ,
				{ 2 ,  {0.275760233 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( 2 );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_0
	

	namespace XGB_Tree_1 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0983233228 }} ,
				{ 3 ,  {0.13675189 }} ,
				{ 4 ,  {0.209391057 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.245495498 ) ? ( 1 ) : ( ( Feature_1 < 329.407928 ) ? ( 3 ) : ( 4 ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_1
	

	namespace XGB_Tree_2 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.045293279 }} ,
				{ 3 ,  {0.148539349 }} ,
				{ 4 ,  {0.0876197591 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( ( Feature_0 < 72.4854736 ) ? ( 3 ) : ( 4 ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_2
	

	namespace XGB_Tree_3 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.120335102 }} ,
				{ 3 ,  {0.0101875942 }} ,
				{ 5 ,  {0.0458352938 }} ,
				{ 6 ,  {0.106354304 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 36.7267075 ) ? ( 1 ) : ( ( Feature_2 < 0.305207074 ) ? ( 3 ) : ( ( Feature_1 < 784.836914 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_3
	

	namespace XGB_Tree_4 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0151420217 }} ,
				{ 4 ,  {0.0799395964 }} ,
				{ 5 ,  {0.0710246265 }} ,
				{ 6 ,  {0.0316789746 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( ( Feature_1 < 821.274414 ) ? ( ( Feature_0 < 48.7719574 ) ? ( 5 ) : ( 6 ) ) : ( 4 ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_4
	

	namespace XGB_Tree_5 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0657481179 }} ,
				{ 3 ,  {-0.00862235483 }} ,
				{ 5 ,  {0.0209046174 }} ,
				{ 6 ,  {0.0526454709 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 36.7267075 ) ? ( 1 ) : ( ( Feature_2 < 0.245495498 ) ? ( 3 ) : ( ( Feature_1 < 784.836914 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_5
	

	namespace XGB_Tree_6 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0543277524 }} ,
				{ 3 ,  {0.00252141594 }} ,
				{ 5 ,  {0.0183482282 }} ,
				{ 6 ,  {0.0396897122 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 18.8927593 ) ? ( 1 ) : ( ( Feature_2 < 0.414427936 ) ? ( 3 ) : ( ( Feature_1 < 519.724792 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_6
	

	namespace XGB_Tree_7 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {-0.00452964986 }} ,
				{ 3 ,  {0.0111872219 }} ,
				{ 5 ,  {0.0245638397 }} ,
				{ 6 ,  {0.0331102349 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( ( Feature_1 < 329.407928 ) ? ( 3 ) : ( ( Feature_1 < 1031.63672 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_7
	

	namespace XGB_Tree_8 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0340267643 }} ,
				{ 3 ,  {-0.0121349711 }} ,
				{ 5 ,  {0.0113468543 }} ,
				{ 6 ,  {0.0273700394 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 18.8927593 ) ? ( 1 ) : ( ( Feature_2 < 0.229802117 ) ? ( 3 ) : ( ( Feature_2 < 0.809650183 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_8
	

	namespace XGB_Tree_9 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.00690015219 }} ,
				{ 4 ,  {-0.0111579672 }} ,
				{ 5 ,  {0.0265676621 }} ,
				{ 7 ,  {0.00951188616 }} ,
				{ 8 ,  {0.0163535737 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_1 < 555.48291 ) ? ( ( Feature_0 < 45.4913483 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_2 < 0.229802117 ) ? ( 5 ) : ( ( Feature_2 < 0.627507627 ) ? ( 7 ) : ( 8 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_9
	

	namespace XGB_Tree_10 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {-0.0103947241 }} ,
				{ 4 ,  {0.0173860956 }} ,
				{ 5 ,  {0.00531902676 }} ,
				{ 6 ,  {0.0144908773 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( ( Feature_1 < 1277.37207 ) ? ( ( Feature_3 < 8.35091972 ) ? ( 5 ) : ( 6 ) ) : ( 4 ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_10
	

	namespace XGB_Tree_11 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.0240552835 }} ,
				{ 4 ,  {0.00907113682 }} ,
				{ 5 ,  {-0.0134069575 }} ,
				{ 7 ,  {0.00228508166 }} ,
				{ 8 ,  {0.013739706 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 20.670433 ) ? ( ( Feature_2 < 0.440432668 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_2 < 0.229802117 ) ? ( 5 ) : ( ( Feature_2 < 0.809650183 ) ? ( 7 ) : ( 8 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_11
	

	namespace XGB_Tree_12 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {-0.00901184231 }} ,
				{ 3 ,  {0.015935678 }} ,
				{ 5 ,  {0.00285271718 }} ,
				{ 6 ,  {0.00977745093 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_2 < 0.115773275 ) ? ( 1 ) : ( ( Feature_2 < 0.284081697 ) ? ( 3 ) : ( ( Feature_2 < 0.833531678 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_12
	

	namespace XGB_Tree_13 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.00210942328 }} ,
				{ 4 ,  {0.0229651388 }} ,
				{ 6 ,  {0.010253638 }} ,
				{ 7 ,  {-0.0191235766 }} ,
				{ 8 ,  {0.000996940187 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 28.2636986 ) ? ( ( Feature_0 < 15.9357872 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_1 < 1229.25073 ) ? ( ( Feature_2 < 0.305207074 ) ? ( 7 ) : ( 8 ) ) : ( 6 ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_13
	

	namespace XGB_Tree_14 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 1 ,  {0.0109672444 }} ,
				{ 3 ,  {-0.00822459906 }} ,
				{ 5 ,  {0.00918082055 }} ,
				{ 6 ,  {-0.00337676611 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_0 < 18.8927593 ) ? ( 1 ) : ( ( Feature_0 < 41.0125656 ) ? ( 3 ) : ( ( Feature_0 < 62.0449295 ) ? ( 5 ) : ( 6 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_14
	

	namespace XGB_Tree_15 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {0.00046281598 }} ,
				{ 4 ,  {-0.00914010499 }} ,
				{ 5 ,  {0.0140358564 }} ,
				{ 7 ,  {-0.00105648336 }} ,
				{ 8 ,  {0.00259356014 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			int lNodeIndex = ( Feature_1 < 555.48291 ) ? ( ( Feature_0 < 45.4913483 ) ? ( 3 ) : ( 4 ) ) : ( ( Feature_2 < 0.229802117 ) ? ( 5 ) : ( ( Feature_2 < 0.627507627 ) ? ( 7 ) : ( 8 ) ) );
		
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
	
			std::any  lEstimator = lNodeValue[0];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace XGB_Tree_15
	

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
			XGB_Tree_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_1::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_2::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_3::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_4::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_5::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_6::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_7::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_8::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_9::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_10::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_11::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_12::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_13::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_14::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3),
			XGB_Tree_15::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3)
		};

		tTable lAggregatedTable = aggregate_xgb_scores(lTreeScores, {"Estimator"});


		tTable lTable;

		std::any  lEstimator = lAggregatedTable["Estimator"][0] + 0.5;
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
