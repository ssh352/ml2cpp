// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DecisionTreeRegressor
// Dataset : RandomReg_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DecisionTreeRegressor_RandomReg_10.exe ml2cpp-demo_DecisionTreeRegressor_RandomReg_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	typedef std::vector<double> tNodeData;
	std::map<int, tNodeData> Decision_Tree_Node_data = {
			{ 5 ,  {-230.73613628 }} ,
			{ 7 ,  {-284.89041043 }} ,
			{ 8 ,  {-305.67509721 }} ,
			{ 13 ,  {-103.03861457 }} ,
			{ 14 ,  {-101.20974879 }} ,
			{ 15 ,  {-53.5585581 }} ,
			{ 16 ,  {-165.64587305 }} ,
			{ 18 ,  {-186.24037603 }} ,
			{ 19 ,  {-210.3549175 }} ,
			{ 21 ,  {-351.38429309 }} ,
			{ 23 ,  {-422.390294 }} ,
			{ 24 ,  {-459.03067075 }} ,
			{ 31 ,  {-251.2683419 }} ,
			{ 32 ,  {-237.150375 }} ,
			{ 34 ,  {-223.26828856 }} ,
			{ 36 ,  {-140.83123535 }} ,
			{ 40 ,  {-182.68535868 }} ,
			{ 41 ,  {-182.33200566 }} ,
			{ 42 ,  {-181.51172981 }} ,
			{ 43 ,  {-168.02760852 }} ,
			{ 44 ,  {-80.36713173 }} ,
			{ 46 ,  {11.97984848 }} ,
			{ 47 ,  {-49.96946031 }} ,
			{ 52 ,  {-154.40083699 }} ,
			{ 53 ,  {-130.20856672 }} ,
			{ 54 ,  {-97.81389434 }} ,
			{ 55 ,  {44.29871811 }} ,
			{ 61 ,  {-9.61795807 }} ,
			{ 62 ,  {-6.19072274 }} ,
			{ 64 ,  {3.07608881 }} ,
			{ 65 ,  {-1.77890863 }} ,
			{ 67 ,  {-33.10367735 }} ,
			{ 68 ,  {-20.2700101 }} ,
			{ 69 ,  {26.98702516 }} ,
			{ 70 ,  {58.89206445 }} ,
			{ 75 ,  {-32.37006064 }} ,
			{ 76 ,  {-33.33701473 }} ,
			{ 77 ,  {23.51174878 }} ,
			{ 79 ,  {-8.54151458 }} ,
			{ 81 ,  {60.83005802 }} ,
			{ 84 ,  {133.87071389 }} ,
			{ 85 ,  {116.88919618 }} ,
			{ 86 ,  {156.7480822 }} ,
			{ 89 ,  {198.97164294 }} ,
			{ 90 ,  {58.56592202 }} ,
			{ 93 ,  {320.68265233 }} ,
			{ 95 ,  {393.26109279 }} ,
			{ 96 ,  {360.61572443 }} ,
			{ 98 ,  {239.63425512 }} ,
			{ 99 ,  {243.63801062 }} ,
			{ 103 ,  {-298.79907559 }} ,
			{ 104 ,  {-268.19043239 }} ,
			{ 106 ,  {8.92365624 }} ,
			{ 107 ,  {-20.42352874 }} ,
			{ 112 ,  {-67.71218597 }} ,
			{ 113 ,  {-27.42654029 }} ,
			{ 115 ,  {131.03680508 }} ,
			{ 117 ,  {62.64480581 }} ,
			{ 119 ,  {37.34665341 }} ,
			{ 120 ,  {38.71263785 }} ,
			{ 122 ,  {277.98128451 }} ,
			{ 123 ,  {250.1827601 }} ,
			{ 126 ,  {-9.18516091 }} ,
			{ 128 ,  {144.42445426 }} ,
			{ 129 ,  {156.85798347 }} ,
			{ 136 ,  {259.87552026 }} ,
			{ 137 ,  {290.7091541 }} ,
			{ 139 ,  {235.32017089 }} ,
			{ 140 ,  {228.58868552 }} ,
			{ 142 ,  {194.40871671 }} ,
			{ 143 ,  {191.55215494 }} ,
			{ 144 ,  {113.44087953 }} ,
			{ 147 ,  {325.07388162 }} ,
			{ 148 ,  {316.51213779 }} ,
			{ 149 ,  {349.42168234 }} ,
			{ 152 ,  {248.55956548 }} ,
			{ 154 ,  {310.60889078 }} ,
			{ 155 ,  {351.37130796 }} ,
			{ 157 ,  {447.69098355 }} ,
			{ 158 ,  {479.70721604 }} 
	};
	

	int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		int lNodeIndex = (Feature_2 <= 0.4864888936281204) ? ( (Feature_5 <= -0.6670668423175812) ? ( (Feature_5 <= -0.8804325759410858) ? ( (Feature_1 <= -0.8752168118953705) ? ( (Feature_0 <= 0.5072311088442802) ? ( 5 ) : ( (Feature_5 <= -1.6241019368171692) ? ( 7 ) : ( 8 ) ) ) : ( (Feature_4 <= 0.7271902412176132) ? ( (Feature_2 <= -0.4242438077926636) ? ( (Feature_7 <= 0.4376855567097664) ? ( (Feature_5 <= -1.0361146032810211) ? ( 13 ) : ( 14 ) ) : ( 15 ) ) : ( 16 ) ) : ( (Feature_8 <= -0.5568803623318672) ? ( 18 ) : ( 19 ) ) ) ) : ( (Feature_5 <= -0.7803284227848053) ? ( 21 ) : ( (Feature_8 <= -0.7443009614944458) ? ( 23 ) : ( 24 ) ) ) ) : ( (Feature_8 <= -0.10979260504245758) ? ( (Feature_7 <= -0.07485402189195156) ? ( (Feature_4 <= 1.1456072330474854) ? ( (Feature_6 <= 1.54505455493927) ? ( (Feature_4 <= -1.798793077468872) ? ( (Feature_4 <= -2.4645427465438843) ? ( 31 ) : ( 32 ) ) : ( (Feature_1 <= -1.3969228863716125) ? ( 34 ) : ( (Feature_1 <= -0.9589010775089264) ? ( 36 ) : ( (Feature_5 <= 0.5293237119913101) ? ( (Feature_2 <= -0.33948929607868195) ? ( (Feature_2 <= -1.3048276603221893) ? ( 40 ) : ( 41 ) ) : ( 42 ) ) : ( 43 ) ) ) ) ) : ( 44 ) ) : ( (Feature_4 <= 1.2514768838882446) ? ( 46 ) : ( 47 ) ) ) : ( (Feature_6 <= -0.3597670868039131) ? ( (Feature_9 <= 0.7353827059268951) ? ( (Feature_7 <= 0.5131131410598755) ? ( (Feature_0 <= 0.31023168563842773) ? ( 52 ) : ( 53 ) ) : ( 54 ) ) : ( 55 ) ) : ( (Feature_8 <= -0.5413330346345901) ? ( (Feature_9 <= 0.9353086948394775) ? ( (Feature_4 <= -0.08786889910697937) ? ( (Feature_6 <= 1.0915893018245697) ? ( (Feature_8 <= -0.8184782862663269) ? ( 61 ) : ( 62 ) ) : ( (Feature_7 <= 0.32871586084365845) ? ( 64 ) : ( 65 ) ) ) : ( (Feature_8 <= -1.4269971251487732) ? ( 67 ) : ( 68 ) ) ) : ( 69 ) ) : ( 70 ) ) ) ) : ( (Feature_7 <= 0.6048205196857452) ? ( (Feature_1 <= -0.4580385386943817) ? ( (Feature_9 <= -0.2371964082121849) ? ( (Feature_7 <= -1.1555199176073074) ? ( 75 ) : ( 76 ) ) : ( 77 ) ) : ( (Feature_4 <= -0.9480748474597931) ? ( 79 ) : ( (Feature_3 <= -0.9801359176635742) ? ( 81 ) : ( (Feature_0 <= 0.6337333917617798) ? ( (Feature_7 <= -0.833141565322876) ? ( 84 ) : ( 85 ) ) : ( 86 ) ) ) ) ) : ( (Feature_5 <= 0.5278314054012299) ? ( (Feature_9 <= 0.5613978803157806) ? ( 89 ) : ( 90 ) ) : ( (Feature_0 <= 1.355840802192688) ? ( (Feature_5 <= 0.9572347402572632) ? ( 93 ) : ( (Feature_7 <= 1.2383009195327759) ? ( 95 ) : ( 96 ) ) ) : ( (Feature_8 <= 0.9247502228245139) ? ( 98 ) : ( 99 ) ) ) ) ) ) ) : ( (Feature_4 <= -1.197551190853119) ? ( (Feature_5 <= 0.10777395963668823) ? ( (Feature_4 <= -1.975234866142273) ? ( 103 ) : ( 104 ) ) : ( (Feature_3 <= -0.10643064975738525) ? ( 106 ) : ( 107 ) ) ) : ( (Feature_0 <= -0.3104289323091507) ? ( (Feature_2 <= 1.1028863191604614) ? ( (Feature_4 <= -0.05499262362718582) ? ( (Feature_5 <= 0.3616192936897278) ? ( 112 ) : ( 113 ) ) : ( (Feature_6 <= -0.05421556159853935) ? ( 115 ) : ( (Feature_5 <= 0.035386763513088226) ? ( 117 ) : ( (Feature_4 <= 0.7581166625022888) ? ( 119 ) : ( 120 ) ) ) ) ) : ( (Feature_2 <= 1.330303966999054) ? ( 122 ) : ( 123 ) ) ) : ( (Feature_8 <= -0.43371836096048355) ? ( (Feature_6 <= -0.6961938925087452) ? ( 126 ) : ( (Feature_4 <= -0.3687320947647095) ? ( 128 ) : ( 129 ) ) ) : ( (Feature_5 <= 0.527120441198349) ? ( (Feature_9 <= 0.6235181093215942) ? ( (Feature_7 <= 1.5438433289527893) ? ( (Feature_2 <= 1.5834551453590393) ? ( (Feature_4 <= -0.432163811288774) ? ( (Feature_8 <= 1.3030574321746826) ? ( 136 ) : ( 137 ) ) : ( (Feature_5 <= -0.8778809905052185) ? ( 139 ) : ( 140 ) ) ) : ( (Feature_7 <= -0.40599823743104935) ? ( 142 ) : ( 143 ) ) ) : ( 144 ) ) : ( (Feature_5 <= -0.001641690731048584) ? ( (Feature_9 <= 1.2027845680713654) ? ( 147 ) : ( 148 ) ) : ( 149 ) ) ) : ( (Feature_0 <= 1.0176409929990768) ? ( (Feature_9 <= -0.14896513149142265) ? ( 152 ) : ( (Feature_4 <= 1.2038587033748627) ? ( 154 ) : ( 155 ) ) ) : ( (Feature_7 <= 0.7463369965553284) ? ( 157 ) : ( 158 ) ) ) ) ) ) );
	
		return lNodeIndex;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];


		tTable lTable;

		std::any  lEstimator = lNodeValue [ 0 ];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/RandomReg_10.csv");
	return 0;
}
