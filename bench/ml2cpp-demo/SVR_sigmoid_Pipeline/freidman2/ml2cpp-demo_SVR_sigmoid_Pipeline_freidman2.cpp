// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_sigmoid_Pipeline
// Dataset : freidman2

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_sigmoid_Pipeline_freidman2.exe ml2cpp-demo_SVR_sigmoid_Pipeline_freidman2.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 43.79128122207401 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 945.9672833084396 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.5310009099975209 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 6.139967152050499 ) : ( Feature_3)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 43.79128122207401 ) / 26.03562357622511 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 945.9672833084396 ) / 461.4552766146446 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.5310009099975209 ) / 0.2901863282144786 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 6.139967152050499 ) / 3.072917242564058 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> lProblem_data_dual = { 
		 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { 0.40702154782483735, 1.520613475009886, 0.12464927450374029, -0.9895648537599753 },
		 { -0.8921793030014273, 1.5645253459007122, -0.14279939028360805, 0.40084524186194526 },
		 { -0.12862954071664834, -0.855762437264239, -1.6966276928077146, -0.5082762490187378 },
		 { 0.3204125863989899, -0.10562148859165936, 0.736170121759815, 1.3362046591037193 },
		 { 0.1883228378676173, 1.5565712024611758, -0.7565916122656656, -0.4905250260509675 },
		 { 0.7152231158680631, 0.1838248936695358, 0.6265331259707688, 1.3879167794348906 },
		 { 0.17728290952482118, 1.4845444591497252, -1.3919734037449252, -0.6111678339689317 },
		 { -0.061839864587314934, 0.3798332127452269, 0.8082514748524611, 0.3041129230705171 },
		 { -0.21286186615867886, -1.7554500325668299, 0.40296624747161036, -1.2888423126888915 },
		 { 0.0420296246498354, 1.4766638453802332, 1.0151430432640347, 1.2767938173826323 },
		 { -0.040689933380933935, 0.33526848922414837, 1.5259455850157382, -1.0847803987113356 },
		 { 0.4876325883301258, 0.730080318016083, -1.2512568460058004, -0.4779428282614248 },
		 { 0.26229505103186884, -1.156436226701534, -1.469826707772466, -1.0591196409203139 },
		 { -1.3354814047760004, -0.97426350987175, -0.3716476350789736, 0.7811055410829204 },
		 { 1.4868985426195895, -0.9329759232521928, 0.00976547361007169, -0.44029399823160686 },
		 { 2.1576338377007738, -1.5960266405607315, 0.8932409458054494, -1.4115808580223888 },
		 { -1.4402772034545301, 0.5497779769126867, 0.9408051741120003, -0.21130417564629184 },
		 { 0.7344011353085581, -1.0612795690667527, -1.6427206707260704, 1.2838987122205305 },
		 { -0.18528042847112391, 0.4699482106570824, -1.7832778948365522, 0.2085342932233457 },
		 { -1.072806128611992, -0.011274498105027463, 0.15871010003956737, 1.3663000362383564 },
		 { 0.6869825665216268, -0.2738851339637735, -1.169037010406918, 0.7600639278823567 },
		 { -1.1306530181901988, 1.693815859594952, -1.8098491932723488, -0.8531150536577624 },
		 { 0.6762852164834068, -0.29765284731305813, 0.6166668855195521, 1.1886392674933517 },
		 { 1.6772961249786977, -0.6222112154145893, -0.7859425854784102, -0.772226260957586 },
		 { -1.468587753657723, 0.7062658577112757, -0.9158552800517019, -1.2834679369913997 },
		 { -0.1349195295380887, -1.2563536013919576, 1.6047772375274936, -1.4588678661050256 },
		 { -1.677429392157608, -0.836641293061437, 1.6009951386266825, 0.7288109585406721 },
		 { 1.1002502144389539, 0.38118663941813774, 1.4385506168190079, 0.09357932935775139 },
		 { 0.645167022605794, 1.135268744400895, 0.2686215691113733, -1.2376422787275594 },
		 { -0.8839139388095921, -0.21046333550084623, 0.46521912268682564, 0.7304618228853951 },
		 { -1.3038701382176308, 1.5082277717144996, 0.6083460261972142, -0.0497929633220157 },
		 { -0.32982342717029806, 1.6548655840938589, 0.02553297616587394, -0.7602522010542218 },
		 { 0.9728908499577125, 0.5638179474733811, -0.9647633676782364, -0.35511879074667424 },
		 { -0.7108886199867888, -0.9144078676440471, 0.4058045686346802, -0.7553415501998626 },
		 { 2.0227140301827005, 0.09590994147659597, -1.1988837577428815, -1.6290287341379313 },
		 { -0.5937704322674143, 0.0020387784582886763, 0.4128585674748309, 1.0111214968580546 },
		 { 1.0009695683627862, 1.502114679360407, -0.34917308534153296, 0.4309174307293153 },
		 { -0.17541648253457842, 1.157357979471062, 1.5460776435053638, 1.5614840452774303 },
		 { 0.4848162101302757, -1.2791886870678837, 1.0699363276492089, 1.204217021484958 },
		 { 0.6164412059817497, 0.5135313271464818, 0.1901494810656995, -1.1516753084142997 },
		 { 0.21542040586608754, -1.521343805623405, -0.40406152244102767, -0.03926368695421065 },
		 { -1.093292998226496, -1.6587268388267802, 0.6182842943393686, 1.1299849932080799 },
		 { 1.2264841754879965, 0.07275199619597457, -0.6438669259586074, 0.17898018904797883 },
		 { 1.8270803081155385, -1.3930501356795733, 0.0975290193831754, -0.8053390167713217 },
		 { 1.103975266447476, -1.1711387753116582, 0.13772455742680387, 0.2713707991033707 },
		 { 0.06983222981743986, 0.6639649839228917, 0.7444642020285951, -1.467244646493467 },
		 { -0.5031732278135369, 0.679095067810605, -0.9279147679691655, -0.08886958441441088 },
		 { 1.3409510329682315, -0.1336266063564132, 1.116727246485082, 0.8675103253586427 },
		 { -0.5990247050169021, 1.5445552441125192, 0.3594355719477703, 0.7932996852316486 },
		 { 1.3233525794634255, -0.5091503888631336, -1.072924105292282, 1.1341411732514546 },
		 { -1.2241246362115, 1.512795119938024, -1.676492473707462, -1.3541232354999226 },
		 { 0.965886790803339, -0.8011962199051502, -1.0029751799208821, 0.5359440051467831 },
		 { -0.6434216904322567, 0.45815375284895515, 0.045617052824859526, -0.4284187571613101 },
		 { -0.008171275924262379, 1.5559548187720833, -0.3993737228327069, -0.9940891152017115 },
		 { -0.662693251554997, 0.4764585986108267, 0.18145143547685438, -1.1762142104318254 },
		 { -0.026701854468432252, -0.028542073748357124, -0.7442367085789723, 0.1618427895801297 },
		 { -0.9956800042405372, 1.1701559764456562, -1.645167643293654, 0.06585228049036436 },
		 { -1.3530021564771337, 0.47937339709127175, -1.0882400181353251, 1.4264179411454836 },
		 { 0.3018648262452086, -0.14159550970547072, 0.1226888473162467, 1.09668931957472 },
		 { 1.2560974505775302, -1.5734959921280032, 0.806979259164098, 0.18593850041668145 },
		 { -0.08482514143628933, -1.1068716787463535, -1.4854147384149081, -1.1904103710707925 },
		 { -1.6763217237163097, -1.4763345216405568, -0.11470085787237269, 0.8503538460077694 },
		 { -1.6242802893869952, -1.775508653244122, -0.6568131609880984, 1.1953045443253554 },
		 { 0.9906526079000334, -0.0012687796111743863, 0.9053420656856961, 1.4770111795319902 },
		 { -1.0669924080933233, -0.7524462900242421, -1.628861728957462, 1.2775885380398857 },
		 { -1.3142788612334164, 0.2280521766091662, 0.3057005634138972, 0.7101816208601218 },
		 { 0.20257570443348924, 0.806208754598517, 0.7597634162717884, -1.2448937505253275 },
		 { -1.5704880612339405, 0.3075457547535036, -0.3438102857110602, 1.2752554901076483 },
		 { 1.766853106149782, 0.9687584624669229, 1.0938510756852322, 1.0444684650769975 },
		 { 0.983310970922164, -1.515041962798084, 1.3939188366118407, -0.16244622652803076 },
		 { 1.3152118563668307, 0.18747648187700344, 1.5208796066082104, -1.597675604172523 },
		 { 0.16718440174526195, -0.4007044787483432, -0.770256515182922, -1.6235051493651826 },
		 { -0.4237411627373897, -0.8006377086475062, 0.8938663043435349, 0.4705431389492595 },
		 { -1.6143668628687107, -0.2665480603895422, 1.3614338477237014, 1.174351653344988 },
		 { -0.923065553671842, -1.460057588221313, -0.28039707608225506, -1.3915237626329608 },
		 { 1.3562116028371412, 0.8003265486926757, 1.5692019046439172, -0.07435688826148117 },
		 { -0.3379611642294123, -0.5730815375077578, 0.28324125434683584, 1.5770952885864475 },
		 { -0.3815315849937636, 0.21390512132680975, 0.7558550941684732, -1.567869367101613 },
		 { -0.37987034364209094, 0.0921798220403697, 1.4938727410627377, -1.0832566670605472 },
		 { -0.9895847396176948, -0.18350270449479794, -1.4778113595148206, 0.21429408872787353 },
		};
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
	
			std::any lDotProduct = sigmoid_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.2499999999999999,0.0 ) + 393.01420877348676;
	
	
			tTable lTable;
	
			std::any  lEstimator = lDotProduct;
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable;

		std::any  lEstimator = lTable_model[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman2.csv");
	return 0;
}
