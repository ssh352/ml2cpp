// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_sigmoid
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_sigmoid_BreastCancer.exe ml2cpp-demo_SVC_sigmoid_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	std::vector<std::any> lProblem_data_dual = { 
	 -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , -1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,};
	

	std::vector<std::vector<std::any> > lProblem_data_sv = { 
	 { 13.77, 22.29, 90.63, 588.9, 0.12, 0.1267, 0.1385, 0.06526, 0.1834, 0.06877, 0.6191, 2.112, 4.906, 49.7, 0.0138, 0.03348, 0.04665, 0.0206, 0.02689, 0.004306, 16.39, 34.01, 111.6, 806.9, 0.1737, 0.3122, 0.3809, 0.1673, 0.308, 0.09333 },
	 { 19.53, 18.9, 129.5, 1217.0, 0.115, 0.1642, 0.2197, 0.1062, 0.1792, 0.06552, 1.111, 1.161, 7.237, 133.0, 0.006056, 0.03203, 0.05638, 0.01733, 0.01884, 0.004787, 25.93, 26.24, 171.1, 2053.0, 0.1495, 0.4116, 0.6121, 0.198, 0.2968, 0.09929 },
	 { 13.82, 24.49, 92.33, 595.9, 0.1162, 0.1681, 0.1357, 0.06759, 0.2275, 0.07237, 0.4751, 1.528, 2.974, 39.05, 0.00968, 0.03856, 0.03476, 0.01616, 0.02434, 0.006995, 16.01, 32.94, 106.0, 788.0, 0.1794, 0.3966, 0.3381, 0.1521, 0.3651, 0.1183 },
	 { 20.92, 25.09, 143.0, 1347.0, 0.1099, 0.2236, 0.3174, 0.1474, 0.2149, 0.06879, 0.9622, 1.026, 8.758, 118.8, 0.006399, 0.0431, 0.07845, 0.02624, 0.02057, 0.006213, 24.29, 29.41, 179.1, 1819.0, 0.1407, 0.4186, 0.6599, 0.2542, 0.2929, 0.09873 },
	 { 16.26, 21.88, 107.5, 826.8, 0.1165, 0.1283, 0.1799, 0.07981, 0.1869, 0.06532, 0.5706, 1.457, 2.961, 57.72, 0.01056, 0.03756, 0.05839, 0.01186, 0.04022, 0.006187, 17.73, 25.21, 113.7, 975.2, 0.1426, 0.2116, 0.3344, 0.1047, 0.2736, 0.07953 },
	 { 15.49, 19.97, 102.4, 744.7, 0.116, 0.1562, 0.1891, 0.09113, 0.1929, 0.06744, 0.647, 1.331, 4.675, 66.91, 0.007269, 0.02928, 0.04972, 0.01639, 0.01852, 0.004232, 21.2, 29.41, 142.1, 1359.0, 0.1681, 0.3913, 0.5553, 0.2121, 0.3187, 0.1019 },
	 { 17.57, 15.05, 115.0, 955.1, 0.09847, 0.1157, 0.09875, 0.07953, 0.1739, 0.06149, 0.6003, 0.8225, 4.655, 61.1, 0.005627, 0.03033, 0.03407, 0.01354, 0.01925, 0.003742, 20.01, 19.52, 134.9, 1227.0, 0.1255, 0.2812, 0.2489, 0.1456, 0.2756, 0.07919 },
	 { 13.61, 24.69, 87.76, 572.6, 0.09258, 0.07862, 0.05285, 0.03085, 0.1761, 0.0613, 0.231, 1.005, 1.752, 19.83, 0.004088, 0.01174, 0.01796, 0.00688, 0.01323, 0.001465, 16.89, 35.64, 113.2, 848.7, 0.1471, 0.2884, 0.3796, 0.1329, 0.347, 0.079 },
	 { 18.03, 16.85, 117.5, 990.0, 0.08947, 0.1232, 0.109, 0.06254, 0.172, 0.0578, 0.2986, 0.5906, 1.921, 35.77, 0.004117, 0.0156, 0.02975, 0.009753, 0.01295, 0.002436, 20.38, 22.02, 133.3, 1292.0, 0.1263, 0.2666, 0.429, 0.1535, 0.2842, 0.08225 },
	 { 19.07, 24.81, 128.3, 1104.0, 0.09081, 0.219, 0.2107, 0.09961, 0.231, 0.06343, 0.9811, 1.666, 8.83, 104.9, 0.006548, 0.1006, 0.09723, 0.02638, 0.05333, 0.007646, 24.09, 33.17, 177.4, 1651.0, 0.1247, 0.7444, 0.7242, 0.2493, 0.467, 0.1038 },
	 { 13.98, 19.62, 91.12, 599.5, 0.106, 0.1133, 0.1126, 0.06463, 0.1669, 0.06544, 0.2208, 0.9533, 1.602, 18.85, 0.005314, 0.01791, 0.02185, 0.009567, 0.01223, 0.002846, 17.04, 30.8, 113.9, 869.3, 0.1613, 0.3568, 0.4069, 0.1827, 0.3179, 0.1055 },
	 { 17.06, 21.0, 111.8, 918.6, 0.1119, 0.1056, 0.1508, 0.09934, 0.1727, 0.06071, 0.8161, 2.129, 6.076, 87.17, 0.006455, 0.01797, 0.04502, 0.01744, 0.01829, 0.003733, 20.99, 33.15, 143.2, 1362.0, 0.1449, 0.2053, 0.392, 0.1827, 0.2623, 0.07599 },
	 { 14.45, 20.22, 94.49, 642.7, 0.09872, 0.1206, 0.118, 0.0598, 0.195, 0.06466, 0.2092, 0.6509, 1.446, 19.42, 0.004044, 0.01597, 0.02, 0.007303, 0.01522, 0.001976, 18.33, 30.12, 117.9, 1044.0, 0.1552, 0.4056, 0.4967, 0.1838, 0.4753, 0.1013 },
	 { 16.13, 20.68, 108.1, 798.8, 0.117, 0.2022, 0.1722, 0.1028, 0.2164, 0.07356, 0.5692, 1.073, 3.854, 54.18, 0.007026, 0.02501, 0.03188, 0.01297, 0.01689, 0.004142, 20.96, 31.48, 136.8, 1315.0, 0.1789, 0.4233, 0.4784, 0.2073, 0.3706, 0.1142 },
	 { 17.27, 25.42, 112.4, 928.8, 0.08331, 0.1109, 0.1204, 0.05736, 0.1467, 0.05407, 0.51, 1.679, 3.283, 58.38, 0.008109, 0.04308, 0.04942, 0.01742, 0.01594, 0.003739, 20.38, 35.46, 132.8, 1284.0, 0.1436, 0.4122, 0.5036, 0.1739, 0.25, 0.07944 },
	 { 18.08, 21.84, 117.4, 1024.0, 0.07371, 0.08642, 0.1103, 0.05778, 0.177, 0.0534, 0.6362, 1.305, 4.312, 76.36, 0.00553, 0.05296, 0.0611, 0.01444, 0.0214, 0.005036, 19.76, 24.7, 129.1, 1228.0, 0.08822, 0.1963, 0.2535, 0.09181, 0.2369, 0.06558 },
	 { 11.94, 18.24, 75.71, 437.6, 0.08261, 0.04751, 0.01972, 0.01349, 0.1868, 0.0611, 0.2273, 0.6329, 1.52, 17.47, 0.00721, 0.00838, 0.01311, 0.008, 0.01996, 0.002635, 13.1, 21.33, 83.67, 527.2, 0.1144, 0.08906, 0.09203, 0.06296, 0.2785, 0.07408 },
	 { 11.22, 33.81, 70.79, 386.8, 0.0778, 0.03574, 0.004967, 0.006434, 0.1845, 0.05828, 0.2239, 1.647, 1.489, 15.46, 0.004359, 0.006813, 0.003223, 0.003419, 0.01916, 0.002534, 12.36, 41.78, 78.44, 470.9, 0.09994, 0.06885, 0.02318, 0.03002, 0.2911, 0.07307 },
	 { 12.8, 17.46, 83.05, 508.3, 0.08044, 0.08895, 0.0739, 0.04083, 0.1574, 0.0575, 0.3639, 1.265, 2.668, 30.57, 0.005421, 0.03477, 0.04545, 0.01384, 0.01869, 0.004067, 13.74, 21.06, 90.72, 591.0, 0.09534, 0.1812, 0.1901, 0.08296, 0.1988, 0.07053 },
	 { 12.45, 16.41, 82.85, 476.7, 0.09514, 0.1511, 0.1544, 0.04846, 0.2082, 0.07325, 0.3921, 1.207, 5.004, 30.19, 0.007234, 0.07471, 0.1114, 0.02721, 0.03232, 0.009627, 13.78, 21.03, 97.82, 580.6, 0.1175, 0.4061, 0.4896, 0.1342, 0.3231, 0.1034 },
	 { 12.46, 19.89, 80.43, 471.3, 0.08451, 0.1014, 0.0683, 0.03099, 0.1781, 0.06249, 0.3642, 1.04, 2.579, 28.32, 0.00653, 0.03369, 0.04712, 0.01403, 0.0274, 0.004651, 13.46, 23.07, 88.13, 551.3, 0.105, 0.2158, 0.1904, 0.07625, 0.2685, 0.07764 },
	 { 12.39, 17.48, 80.64, 462.9, 0.1042, 0.1297, 0.05892, 0.0288, 0.1779, 0.06588, 0.2608, 0.873, 2.117, 19.2, 0.006715, 0.03705, 0.04757, 0.01051, 0.01838, 0.006884, 14.18, 23.13, 95.23, 600.5, 0.1427, 0.3593, 0.3206, 0.09804, 0.2819, 0.1118 },
	 { 12.0, 15.65, 76.95, 443.3, 0.09723, 0.07165, 0.04151, 0.01863, 0.2079, 0.05968, 0.2271, 1.255, 1.441, 16.16, 0.005969, 0.01812, 0.02007, 0.007027, 0.01972, 0.002607, 13.67, 24.9, 87.78, 567.9, 0.1377, 0.2003, 0.2267, 0.07632, 0.3379, 0.07924 },
	 { 11.81, 17.39, 75.27, 428.9, 0.1007, 0.05562, 0.02353, 0.01553, 0.1718, 0.0578, 0.1859, 1.926, 1.011, 14.47, 0.007831, 0.008776, 0.01556, 0.00624, 0.03139, 0.001988, 12.57, 26.48, 79.57, 489.5, 0.1356, 0.1, 0.08803, 0.04306, 0.32, 0.06576 },
	 { 13.0, 25.13, 82.61, 520.2, 0.08369, 0.05073, 0.01206, 0.01762, 0.1667, 0.05449, 0.2621, 1.232, 1.657, 21.19, 0.006054, 0.008974, 0.005681, 0.006336, 0.01215, 0.001514, 14.34, 31.88, 91.06, 628.5, 0.1218, 0.1093, 0.04462, 0.05921, 0.2306, 0.06291 },
	 { 12.47, 18.6, 81.09, 481.9, 0.09965, 0.1058, 0.08005, 0.03821, 0.1925, 0.06373, 0.3961, 1.044, 2.497, 30.29, 0.006953, 0.01911, 0.02701, 0.01037, 0.01782, 0.003586, 14.97, 24.64, 96.05, 677.9, 0.1426, 0.2378, 0.2671, 0.1015, 0.3014, 0.0875 },
	 { 12.36, 18.54, 79.01, 466.7, 0.08477, 0.06815, 0.02643, 0.01921, 0.1602, 0.06066, 0.1199, 0.8944, 0.8484, 9.227, 0.003457, 0.01047, 0.01167, 0.005558, 0.01251, 0.001356, 13.29, 27.49, 85.56, 544.1, 0.1184, 0.1963, 0.1937, 0.08442, 0.2983, 0.07185 },
	 { 12.04, 28.14, 76.85, 449.9, 0.08752, 0.06, 0.02367, 0.02377, 0.1854, 0.05698, 0.6061, 2.643, 4.099, 44.96, 0.007517, 0.01555, 0.01465, 0.01183, 0.02047, 0.003883, 13.6, 33.33, 87.24, 567.6, 0.1041, 0.09726, 0.05524, 0.05547, 0.2404, 0.06639 },
	 { 10.82, 24.21, 68.89, 361.6, 0.08192, 0.06602, 0.01548, 0.00816, 0.1976, 0.06328, 0.5196, 1.918, 3.564, 33.0, 0.008263, 0.0187, 0.01277, 0.005917, 0.02466, 0.002977, 13.03, 31.45, 83.9, 505.6, 0.1204, 0.1633, 0.06194, 0.03264, 0.3059, 0.07626 },
	 { 12.63, 20.76, 82.15, 480.4, 0.09933, 0.1209, 0.1065, 0.06021, 0.1735, 0.0707, 0.3424, 1.803, 2.711, 20.48, 0.01291, 0.04042, 0.05101, 0.02295, 0.02144, 0.005891, 13.33, 25.47, 89.0, 527.4, 0.1287, 0.225, 0.2216, 0.1105, 0.2226, 0.08486 },
	 { 11.52, 14.93, 73.87, 406.3, 0.1013, 0.07808, 0.04328, 0.02929, 0.1883, 0.06168, 0.2562, 1.038, 1.686, 18.62, 0.006662, 0.01228, 0.02105, 0.01006, 0.01677, 0.002784, 12.65, 21.19, 80.88, 491.8, 0.1389, 0.1582, 0.1804, 0.09608, 0.2664, 0.07809 },
	 { 13.2, 17.43, 84.13, 541.6, 0.07215, 0.04524, 0.04336, 0.01105, 0.1487, 0.05635, 0.163, 1.601, 0.873, 13.56, 0.006261, 0.01569, 0.03079, 0.005383, 0.01962, 0.00225, 13.94, 27.82, 88.28, 602.0, 0.1101, 0.1508, 0.2298, 0.0497, 0.2767, 0.07198 },
	};
	

	double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
		return sigmoid_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 9.17041263546023e-07,0.0 ) + 5.583986863493919;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1",
			"Proba_0", "Proba_1",
			"LogProba_0", "LogProba_1",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
		auto lClasses = get_classes();

		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29 };

		std::any lDotProduct_0_1 = sigmoid_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 9.17041263546023e-07,0.0 ) + 5.583986863493919;

		std::any lLogistic_0_1 = logistic(3.0836732443538435 * lDotProduct_0_1 + 5.259282230927938);


		tTable lTable;

		lTable["Score"] = { 
			-lDotProduct_0_1,
			lDotProduct_0_1 
		} ;
		lTable["Proba"] = { 
			lLogistic_0_1,
			1.0 - lLogistic_0_1 
		} ;
		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BreastCancer.csv");
	return 0;
}
