// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_linear
// Dataset : BinaryClass_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_linear_BinaryClass_10.exe ml2cpp-demo_SVC_linear_BinaryClass_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	std::vector<std::any> lProblem_data_dual = { 
	 -0.9871547578299328 , -1.0 , -1.0 , -0.48979559226809566 , -1.0 , -1.0 , -1.0 , -0.28035010241182867 , -1.0 , -0.6349873028342525 , -0.6634447454767514 , -1.0 , -0.9074252752203893 , -1.0 , -0.5541826462393766 , 1.0 , 1.0 , 0.4310531496537315 , 1.0 , 1.0 , 1.0 , 1.0 , 0.31175012246727735 , 0.17009842413649714 , 1.0 , 1.0 , 1.0 , 1.0 , 0.6044387260231209 , 1.0 ,};
	

	std::vector<std::vector<std::any> > lProblem_data_sv = { 
	 { 0.4809672098030855, 1.9281234723864962, 0.5386834807895613, 0.9128267937845747, 2.0958556488784024, -0.27086036412995806, -0.7857194492739092, 0.1771275259206786, 1.4050432480605073, -0.43391845713831423 },
	 { -0.21613870478849442, -0.5303212005433303, -0.5362164085336691, -0.8100387031157575, -0.9615662898307464, 1.5529718576848406, -0.4595236871795928, -0.006514794174079089, -1.8130818762045466, -0.13279488760020075 },
	 { -0.05213379204679852, 0.14498787583333014, 0.5340592256715511, 1.4321952389465753, 0.738275982301284, 1.4341442375220592, 0.033602057890890415, 0.052532412603893186, -0.8806903984842515, -0.27469508368586715 },
	 { -0.759932229366612, 0.552805168880046, -0.23487363635190292, -1.2701421722716257, 1.456377543159662, 1.5435117281327027, 2.8107702281511435, -0.2229001278703461, 0.6172442977370132, 0.4301073180538011 },
	 { 0.785560584884625, 1.0733430351073072, 0.12853183489140385, -0.566243175109869, -1.481913963837002, -0.8386241389093972, 0.26604319157707085, 0.2690687200903063, 1.271598798688941, -0.6179701490256493 },
	 { 1.1402573781685328, 0.6761804068245167, -1.4731268041595753, 0.7323942062420845, 1.4964566535823185, -1.4683569412740674, 1.124026130806446, 0.3777381705418596, -0.2543842002580888, -0.8394938690129621 },
	 { 0.7430089011960362, -0.23929647235393137, -0.9541511016410574, 1.3310869796087246, 0.6575038895002946, 0.20938692944407888, -0.34219217399760216, 0.30568856533648076, -0.50121130930097, -0.8141122002000563 },
	 { 0.5373565697566288, -0.04690948394036747, 0.29555831849829717, -2.8951397669851433, 1.2621190656210834, -0.7719309323277832, -0.9937390191746367, 0.17392983723693703, -0.3093235091111961, -0.37730757660701 },
	 { 0.5799864121318057, -0.2360313038841518, 0.43505579564303826, 1.3393898952948147, -1.8861454098888544, 0.020294743576157792, -0.6292571849498783, 0.23130823452460433, -1.4508741930862805, -0.6027040800554819 },
	 { -0.011908999728864111, -0.8908065351122083, -0.5063606992712224, -0.24282406881234603, 0.143574433900628, 1.4442721907375726, 0.6468644070009625, 0.0690200161630706, -1.3533365355738265, -0.318492636197919 },
	 { -0.8832766812818473, 0.501049774810359, 0.2479598674358872, 0.8693112756683995, 1.996147651770403, 2.380376125070892, 2.614818878550584, -0.2291391162693423, -0.0650419737088196, 0.3656327705757887 },
	 { 0.7262866594357859, -0.13694221346809365, 1.87537250288579, 1.5235357221633312, -0.46089293180940766, -0.9708223054007781, -0.01178577032390541, 0.2387848231935976, -0.20550758304272917, -0.5265729999445877 },
	 { 0.18655656472286322, 0.7018565551129017, -0.17237723790595258, -1.0262469401396512, -1.4151234456298987, 0.08522945062564924, 2.265435222000944, 0.07842056410455177, -0.020740240980986667, -0.21188837313984477 },
	 { -0.3072178920094768, -0.08419770648067697, -0.1306274931517295, 0.5603600953691231, -1.2195669450232594, 1.3176176696171835, 1.4264140211857006, -0.05469374139869011, 1.1876901315295343, 0.015023609022383422 },
	 { 1.7406428436664605, -1.770495386387641, -0.07463878241592434, -0.0037948497623813615, -1.235391494814571, -2.182202011378088, 0.23688793275339634, 0.5796583755941385, 0.30964558622762334, -1.2950970729805795 },
	 { 0.651195525977357, -0.08936038423557587, 1.9966011707973088, 0.6138413720482201, -0.24829220161063323, -2.1003752138660037, -0.5243777808662209, 0.15129352930018047, -0.6087374876863917, -0.19044790673420153 },
	 { 0.8652416164274608, -1.2494742219861754, 1.970456348555097, 0.02323201628587036, -0.7534053731189334, -1.2056689228229833, 2.158241115300078, 0.2819622213989109, 0.9519093576303396, -0.6160716913329085 },
	 { 0.1019725646490372, 1.1685511812029383, 1.16463972680708, -1.322897896328765, -0.81831930171055, -1.613089725148296, -0.6318915732239502, -0.04188234680584454, -1.7397547050645301, 0.2642863364515001 },
	 { 0.23592163546645983, 0.01559558553610639, -0.14752596910266838, -1.2939361435540477, -2.1277947525067775, 2.9511133894725567, -2.063295162834261, 0.2443593613004832, -1.6533000080360474, -0.9191469810556254 },
	 { 0.5954228223112823, 1.070088205789964, 1.6359734751574904, 1.8207530511515095, 1.058171013210782, -1.4969966417968363, -0.16104490427296092, 0.15996015820788406, -0.9675784633481913, -0.2711256206763759 },
	 { 0.8309376943018076, 0.3494158747839881, -0.4786555924059382, 1.0978825983775917, 0.3928388355825836, -2.057693229890982, 0.5622815503608488, 0.22483599160616763, 1.1352549387252504, -0.38556519714981885 },
	 { -0.6557259046238674, -0.19753543035285562, -0.3870102338535069, 0.12240188653634958, 0.8587294067401514, 1.6830499480545718, -0.1682619880379936, -0.17440192412254285, -1.4901396843996222, 0.2906968375895972 },
	 { -0.771540268926696, 1.46903207688595, -2.019076907942007, -0.5135675470364792, 1.0965351526985396, 1.6038820415606125, -0.6080326284525016, -0.2244262032219191, -0.32058268918214206, 0.42825077343097584 },
	 { -0.7525174599184026, 1.3825524761202033, -0.8479737534640933, -0.20086204414810277, -0.8003673053468898, 1.4494724426104775, -0.3292842942877819, -0.22475813015584867, 0.8669609737617006, 0.4439987706498345 },
	 { -1.0458024423037, 0.11294939926527063, 0.46891997076276926, -0.7604854545960222, 0.1357802035153995, 1.4757603465643656, 0.5220718295742688, -0.33985870226752574, -0.48017811399063987, 0.740400599203569 },
	 { 1.0713755931512898, -0.6341929930213883, -0.8608076793809787, 1.7692639439055955, -0.15206514397570287, -1.8162569729750924, 2.0157523076551636, 0.33262537551495386, -0.16263678202300752, -0.6887886691414953 },
	 { 0.9140539237335175, 0.6044433177877142, 0.2676507811668582, 1.2566586429636435, -0.01805437836471338, -1.47801475508027, 0.6098850048713202, 0.28743548849606926, -0.16838677020388274, -0.6040310941183635 },
	 { 0.4072512631016443, 2.0466987867534647, -3.9912885179936213, 0.8382817661390957, 0.5407473106323089, 2.56928102879518, 2.434235523534455, 0.2928850016560724, 0.31899439638934446, -1.008365758437452 },
	 { -1.029643186776298, -0.9773916285069058, 1.7550829759782132, 0.9122481516887383, -0.08196737041614892, 1.2232824746020043, 0.636305156382388, -0.3463351631986256, 1.810402402770992, 0.7815613307777305 },
	 { 0.3366652264555634, -0.5583924823639528, -1.635627281588523, -0.5058003865138625, -0.2227444485320821, 2.904163322602534, 0.4913350109051379, 0.28196018574523973, 0.9444309886480903, -1.01227659411881 },
	};
	

	double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
		return linear_kernel( lProblem_data_dual, lProblem_data_sv, inputs ) + 0.33516755071621224;
	}
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

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

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		auto lClasses = get_classes();

		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9 };

		std::any lDotProduct_0_1 = linear_kernel( lProblem_data_dual, lProblem_data_sv, inputs ) + 0.33516755071621224;

		std::any lLogistic_0_1 = logistic(-0.7627630320258298 * lDotProduct_0_1 + 0.017072709637175408);


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
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BinaryClass_10.csv");
	return 0;
}