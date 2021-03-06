// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SGDRegressor
// Dataset : freidman3

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SGDRegressor_freidman3.exe ml2cpp-demo_SGDRegressor_freidman3.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {

		tTable lTable;

		std::any  lEstimator = -624958015133.2701 * Feature_0 + -1317695992432.5093 * Feature_1 + -64588437409.74149 * Feature_2 + 587285836477.814 * Feature_3 + 41029333373.82739;
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
