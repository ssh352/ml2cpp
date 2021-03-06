// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : Ridge
// Dataset : freidman1

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_Ridge_freidman1.exe ml2cpp-demo_Ridge_freidman1.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {

		tTable lTable;

		std::any  lEstimator = 4.2998060451024624 * Feature_0 + 8.993440870729414 * Feature_1 + -0.20654279807667683 * Feature_2 + 8.127827178822463 * Feature_3 + 4.547780646205411 * Feature_4 + 0.11673630744342205 * Feature_5 + -0.19877248476425635 * Feature_6 + 0.9405867043958551 * Feature_7 + -0.016566233303402695 * Feature_8 + -1.031161781295365 * Feature_9 + 2.5740381625685114;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman1.csv");
	return 0;
}
