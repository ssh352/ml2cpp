// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SGDRegressor_Pipeline
// Dataset : diabetes

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SGDRegressor_Pipeline_diabetes.exe ml2cpp-demo_SGDRegressor_Pipeline_diabetes.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 0.0002686932066652995 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 0.0007239580580639441 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.0007280719825586765 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.001013565221084393 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( 0.0009763580732882109 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( 0.0017643808242337245 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( -0.0016512815450565026 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.0013905501983388136 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( 0.0012726482548090939 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 0.001034425005681627 ) : ( Feature_9)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5, std::any imputer_output_6, std::any imputer_output_7, std::any imputer_output_8, std::any imputer_output_9, std::any imputer_output_10, std::any imputer_output_11) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 0.0002686932066652995 ) / 0.04724209583653783 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 0.0007239580580639441 ) / 0.047605576685038974 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.0007280719825586765 ) / 0.04693591143936869 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.001013565221084393 ) / 0.0483352719489719 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - 0.0009763580732882109 ) / 0.048050762009702486 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - 0.0017643808242337245 ) / 0.04806080873154401 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - -0.0016512815450565026 ) / 0.04620240378043046 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.0013905501983388136 ) / 0.047363093040531656 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - 0.0012726482548090939 ) / 0.04589286131364784 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 0.001034425005681627 ) / 0.04776158519570627 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
	
			tTable lTable;
	
			std::any  lEstimator = -0.735854729815986 * scaler_output_2 + -10.88519462760218 * scaler_output_3 + 24.325084812482967 * scaler_output_4 + 14.889124473976938 * scaler_output_5 + -3.0312577763344235 * scaler_output_6 + -5.1488671604260805 * scaler_output_7 + -11.814502967649588 * scaler_output_8 + 3.258398711932672 * scaler_output_9 + 23.364505297968392 * scaler_output_10 + 4.171353799018759 * scaler_output_11 + 154.2537398029053;
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable;

		std::any  lEstimator = lTable_model[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/diabetes.csv");
	return 0;
}
