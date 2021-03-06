// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : Ridge
// Dataset : boston

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_Ridge_boston.exe ml2cpp-demo_Ridge_boston.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12) {

		tTable lTable;

		std::any  lEstimator = -0.0943161220765522 * Feature_0 + 0.038394944764138114 * Feature_1 + -0.0060428527504883724 * Feature_2 + 2.294377031416491 * Feature_3 + -8.222104271425962 * Feature_4 + 4.649616457383965 * Feature_5 + -0.025741169789533308 * Feature_6 + -1.281443128741068 * Feature_7 + 0.2566547394497223 * Feature_8 + -0.012631546220508183 * Feature_9 + -0.9189381305564328 * Feature_10 + 0.010753343151179994 * Feature_11 + -0.4097523121810865 * Feature_12 + 25.153738544526025;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/boston.csv");
	return 0;
}
