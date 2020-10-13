// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_sigmoid_Pipeline
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_sigmoid_Pipeline_BreastCancer.exe ml2cpp-demo_SVC_sigmoid_Pipeline_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11", "imputer_output_12", "imputer_output_13", "imputer_output_14", "imputer_output_15", "imputer_output_16", "imputer_output_17", "imputer_output_18", "imputer_output_19", "imputer_output_20", "imputer_output_21", "imputer_output_22", "imputer_output_23", "imputer_output_24", "imputer_output_25", "imputer_output_26", "imputer_output_27", "imputer_output_28", "imputer_output_29", "imputer_output_30", "imputer_output_31" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 13.450740000000003 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 19.4476 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 87.29319999999998 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 583.3380000000001 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( 0.09348100000000001 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( 0.0959074 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( 0.07945570000000003 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.04142684 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( 0.178872 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 0.0630418 ) : ( Feature_9)) };
			lTable["imputer_output_12"] = { ((Feature_10 == std::any()) ?  ( 0.3765220000000001 ) : ( Feature_10)) };
			lTable["imputer_output_13"] = { ((Feature_11 == std::any()) ?  ( 1.2955559999999997 ) : ( Feature_11)) };
			lTable["imputer_output_14"] = { ((Feature_12 == std::any()) ?  ( 2.7619079999999996 ) : ( Feature_12)) };
			lTable["imputer_output_15"] = { ((Feature_13 == std::any()) ?  ( 33.839960000000005 ) : ( Feature_13)) };
			lTable["imputer_output_16"] = { ((Feature_14 == std::any()) ?  ( 0.006920639999999998 ) : ( Feature_14)) };
			lTable["imputer_output_17"] = { ((Feature_15 == std::any()) ?  ( 0.02546753999999999 ) : ( Feature_15)) };
			lTable["imputer_output_18"] = { ((Feature_16 == std::any()) ?  ( 0.033411 ) : ( Feature_16)) };
			lTable["imputer_output_19"] = { ((Feature_17 == std::any()) ?  ( 0.011515259999999998 ) : ( Feature_17)) };
			lTable["imputer_output_20"] = { ((Feature_18 == std::any()) ?  ( 0.02063639999999999 ) : ( Feature_18)) };
			lTable["imputer_output_21"] = { ((Feature_19 == std::any()) ?  ( 0.0038469800000000003 ) : ( Feature_19)) };
			lTable["imputer_output_22"] = { ((Feature_20 == std::any()) ?  ( 15.393479999999997 ) : ( Feature_20)) };
			lTable["imputer_output_23"] = { ((Feature_21 == std::any()) ?  ( 26.079600000000006 ) : ( Feature_21)) };
			lTable["imputer_output_24"] = { ((Feature_22 == std::any()) ?  ( 101.605 ) : ( Feature_22)) };
			lTable["imputer_output_25"] = { ((Feature_23 == std::any()) ?  ( 769.482 ) : ( Feature_23)) };
			lTable["imputer_output_26"] = { ((Feature_24 == std::any()) ?  ( 0.12837400000000002 ) : ( Feature_24)) };
			lTable["imputer_output_27"] = { ((Feature_25 == std::any()) ?  ( 0.23153520000000005 ) : ( Feature_25)) };
			lTable["imputer_output_28"] = { ((Feature_26 == std::any()) ?  ( 0.2537764 ) : ( Feature_26)) };
			lTable["imputer_output_29"] = { ((Feature_27 == std::any()) ?  ( 0.10431359999999998 ) : ( Feature_27)) };
			lTable["imputer_output_30"] = { ((Feature_28 == std::any()) ?  ( 0.284744 ) : ( Feature_28)) };
			lTable["imputer_output_31"] = { ((Feature_29 == std::any()) ?  ( 0.08354739999999998 ) : ( Feature_29)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11", "imputer_output_12", "imputer_output_13", "imputer_output_14", "imputer_output_15", "imputer_output_16", "imputer_output_17", "imputer_output_18", "imputer_output_19", "imputer_output_20", "imputer_output_21", "imputer_output_22", "imputer_output_23", "imputer_output_24", "imputer_output_25", "imputer_output_26", "imputer_output_27", "imputer_output_28", "imputer_output_29", "imputer_output_30", "imputer_output_31" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11", "scaler_output_12", "scaler_output_13", "scaler_output_14", "scaler_output_15", "scaler_output_16", "scaler_output_17", "scaler_output_18", "scaler_output_19", "scaler_output_20", "scaler_output_21", "scaler_output_22", "scaler_output_23", "scaler_output_24", "scaler_output_25", "scaler_output_26", "scaler_output_27", "scaler_output_28", "scaler_output_29", "scaler_output_30", "scaler_output_31" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5, std::any imputer_output_6, std::any imputer_output_7, std::any imputer_output_8, std::any imputer_output_9, std::any imputer_output_10, std::any imputer_output_11, std::any imputer_output_12, std::any imputer_output_13, std::any imputer_output_14, std::any imputer_output_15, std::any imputer_output_16, std::any imputer_output_17, std::any imputer_output_18, std::any imputer_output_19, std::any imputer_output_20, std::any imputer_output_21, std::any imputer_output_22, std::any imputer_output_23, std::any imputer_output_24, std::any imputer_output_25, std::any imputer_output_26, std::any imputer_output_27, std::any imputer_output_28, std::any imputer_output_29, std::any imputer_output_30, std::any imputer_output_31) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 13.450740000000003 ) / 2.842552647252114 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 19.4476 ) / 4.456612417520733 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 87.29319999999998 ) / 19.783373366541916 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 583.3380000000001 ) / 254.63059980293016 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - 0.09348100000000001 ) / 0.012981839045374118 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - 0.0959074 ) / 0.04794022510627167 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - 0.07945570000000003 ) / 0.072003293484465 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.04142684 ) / 0.03286028997155077 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - 0.178872 ) / 0.023767574886807447 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 0.0630418 ) / 0.006170491614126058 ) };
			lTable["scaler_output_12"] = { ( ( imputer_output_12 - 0.3765220000000001 ) / 0.22931747451077505 ) };
			lTable["scaler_output_13"] = { ( ( imputer_output_13 - 1.2955559999999997 ) / 0.4864979388075555 ) };
			lTable["scaler_output_14"] = { ( ( imputer_output_14 - 2.7619079999999996 ) / 1.8449532326690556 ) };
			lTable["scaler_output_15"] = { ( ( imputer_output_15 - 33.839960000000005 ) / 28.135330141983403 ) };
			lTable["scaler_output_16"] = { ( ( imputer_output_16 - 0.006920639999999998 ) / 0.002156646106898394 ) };
			lTable["scaler_output_17"] = { ( ( imputer_output_17 - 0.02546753999999999 ) / 0.019603893631837527 ) };
			lTable["scaler_output_18"] = { ( ( imputer_output_18 - 0.033411 ) / 0.029953011615528748 ) };
			lTable["scaler_output_19"] = { ( ( imputer_output_19 - 0.011515259999999998 ) / 0.006801917382062208 ) };
			lTable["scaler_output_20"] = { ( ( imputer_output_20 - 0.02063639999999999 ) / 0.008194260127674737 ) };
			lTable["scaler_output_21"] = { ( ( imputer_output_21 - 0.0038469800000000003 ) / 0.0021774517444940085 ) };
			lTable["scaler_output_22"] = { ( ( imputer_output_22 - 15.393479999999997 ) / 3.899252873256619 ) };
			lTable["scaler_output_23"] = { ( ( imputer_output_23 - 26.079600000000006 ) / 5.855341137798891 ) };
			lTable["scaler_output_24"] = { ( ( imputer_output_24 - 101.605 ) / 28.256795094277766 ) };
			lTable["scaler_output_25"] = { ( ( imputer_output_25 - 769.482 ) / 402.52477721998673 ) };
			lTable["scaler_output_26"] = { ( ( imputer_output_26 - 0.12837400000000002 ) / 0.022491495459395314 ) };
			lTable["scaler_output_27"] = { ( ( imputer_output_27 - 0.23153520000000005 ) / 0.13583353927863323 ) };
			lTable["scaler_output_28"] = { ( ( imputer_output_28 - 0.2537764 ) / 0.19191074193759974 ) };
			lTable["scaler_output_29"] = { ( ( imputer_output_29 - 0.10431359999999998 ) / 0.06250764832434509 ) };
			lTable["scaler_output_30"] = { ( ( imputer_output_30 - 0.284744 ) / 0.05511358511292836 ) };
			lTable["scaler_output_31"] = { ( ( imputer_output_31 - 0.08354739999999998 ) / 0.015270954103788016 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0], iTable.at("imputer_output_12")[0], iTable.at("imputer_output_13")[0], iTable.at("imputer_output_14")[0], iTable.at("imputer_output_15")[0], iTable.at("imputer_output_16")[0], iTable.at("imputer_output_17")[0], iTable.at("imputer_output_18")[0], iTable.at("imputer_output_19")[0], iTable.at("imputer_output_20")[0], iTable.at("imputer_output_21")[0], iTable.at("imputer_output_22")[0], iTable.at("imputer_output_23")[0], iTable.at("imputer_output_24")[0], iTable.at("imputer_output_25")[0], iTable.at("imputer_output_26")[0], iTable.at("imputer_output_27")[0], iTable.at("imputer_output_28")[0], iTable.at("imputer_output_29")[0], iTable.at("imputer_output_30")[0], iTable.at("imputer_output_31")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual = { 
		 -1.0 , -0.9948190807458621 , -0.8465074057727748 , -1.0 , -1.0 , -1.0 , -1.0 , 1.0 , 1.0 , 1.0 , 0.8755436154678561 , 1.0 , 1.0 , 0.29438869097941867 , 0.6713941800713621 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { 0.11231454246190439, 0.637793851856038, 0.1686668869952827, 0.021843407682755233, 2.0427768290232833, 0.6423123782114163, 0.8200222120775492, 0.7252875741703396, 0.19051165386306784, 0.9283214949820983, 1.0578260575977247, 1.6782064935386336, 1.1621389431634463, 0.5637054877253324, 3.1898418465575857, 0.4087177858885874, 0.4419922834449277, 1.3356145759661797, 0.7631683523054789, 0.2108060493926885, 0.2555669079158028, 1.3543873556411004, 0.3537202278833122, 0.09295825280228756, 2.0152506124738836, 0.5938503879703338, 0.6624100283106329, 1.0076590895432627, 0.4219649284717768, 0.6406017550385674 },
		 { 0.12990436618894619, 1.1314423440046744, 0.25459763138870756, 0.049334212029984545, 1.7500602126241553, 1.5058877975638785, 0.7811351019955064, 0.7961938261242094, 2.0459807208598177, 1.5117434044712148, 0.42987565692630203, 0.4777903079502017, 0.11495792752056458, 0.18517785196433845, 1.279468147867991, 0.6678499815331234, 0.04503720752074975, 0.682857456082745, 0.4519749119864678, 1.4457358276527639, 0.1581123410149835, 1.1716482163119393, 0.15553780905924536, 0.04600462144937633, 2.268679736841822, 1.2151991391566783, 0.43938968266517375, 0.764488847061432, 1.4580071290109258, 2.2757320704263995 },
		 { 1.4491411457170622, -0.9867584586694748, 1.4005093816233776, 1.4600052008192375, 0.38430610505664436, 0.4128599721032739, 0.26796413144855374, 1.1595503275530532, -0.20919256691854532, -0.2514872553181125, 0.9758436441767332, -0.9723699984413027, 1.0260921341953495, 0.9688899992441424, -0.5998387940710687, 0.2480354204790815, 0.022001126579817766, 0.297671948403781, -0.1691916022189308, -0.0482123198667694, 1.1839498873393997, -1.1202763162089404, 1.1783006490620203, 1.1366207147789031, -0.1277816321813082, 0.3656298750938332, -0.02540972928751209, 0.6605015723159122, -0.16591190686041973, -0.28533908034725314 },
		 { 0.05602710653537139, 1.176319479654551, 0.02359557146050143, -0.042170893868649986, -0.06940465036200481, -0.3606032295776272, -0.3695067088249278, -0.32187299653037266, -0.11662948421122415, -0.28227896720781626, -0.6345874875451865, -0.597239940444918, -0.5473894850651507, -0.4979490174559712, -1.313446833460216, -0.7002455868106682, -0.5158412849541191, -0.6814637314213714, -0.9038521946583215, -1.0939300978876663, 0.38379660120635484, 1.632765670693935, 0.4103437761187603, 0.19680279198491693, 0.8325813654235086, 0.4186359296974075, 0.6556360458494389, 0.4573264355054349, 1.1295944524827541, -0.2977810010490425 },
		 { 1.6109675240058448, -0.5828642378205902, 1.5268781233784139, 1.597066496778995, -0.3089700916781335, 0.5693047944497347, 0.41031873085603043, 0.6425128937778393, -0.28913341107486845, -0.8494947125444569, -0.33979966056332417, -1.4490421104925995, -0.4557882471543603, 0.0685984486501547, -1.3000000282995365, -0.5033459263406072, -0.12222477148514865, -0.25908282929859927, -0.9380224547717816, -0.6479959905278548, 1.2788398603744076, -0.6933157102996855, 1.1216771008265727, 1.2981014575270107, -0.09221263227001891, 0.25814537548102956, 0.9130473793748053, 0.7868861062373899, -0.009870524642614462, -0.08495867325527169 },
		 { 0.1861918021154792, 0.03868409093019308, 0.1934351603792703, 0.06347233997998829, 0.9643471896580743, 0.3627976289524066, 0.46031644381865655, 0.7061154974617828, -0.5037114664418393, 0.3886562287046663, -0.6790673075927456, -0.7035096609841676, -0.6286923589504676, -0.5327806684461847, -0.7449715532190888, -0.3855121917069697, -0.38597120544654523, -0.2864280599964186, -1.0258888379206788, -0.4597024951442062, 0.42226550919352007, 0.8061699376536177, 0.43511657847176877, 0.2479797658404708, 1.4639311138488966, 0.9221934484313643, 0.7978896775345097, 1.2540289404788016, 0.6015939614899484, 1.4375395178847792 },
		 { 1.6285573477328854, 0.536820296643817, 1.5218233737082127, 1.7305932607512515, -1.5229737428492542, -0.19790061433730816, 0.42837346053697867, 0.4976572030909637, -0.07876276855822992, -1.562565935253375, 1.1323951676774562, 0.01941220968612573, 0.8401795625775915, 1.5112685646631812, -0.6448160389188576, 1.402397937690864, 0.9244145582224192, 0.4299875808125853, 0.09318718079513724, 0.5460603216611357, 1.1198350406941238, -0.2356139407649644, 0.9730402867085218, 1.1391050338981048, -1.7852970280473983, -0.2593998521066482, -0.0014402528863646524, -0.2000331213089351, -0.8680981268405439, -1.176573505354397 },
		 { 0.34801818040426113, -0.9575883204970556, 0.3374955259800115, 0.22291900519391838, 0.4790538519437302, 0.1291733609150254, 0.07519517147042899, 0.4227948083242171, -0.27230375967353687, -0.36168917155494545, -0.5927241275004249, -1.1431826440276018, -0.3479264344665065, -0.4492557910716931, -0.5632078420816322, -0.1274002015570969, -0.0758187533577636, 0.5020260917907122, -0.7439841919846334, -0.6057447671734751, 0.11707883916200637, -1.0639175162289185, 0.24755107494184772, -0.006414511965778659, 0.14343199214227395, 0.3089428444761218, 0.2945306731104129, 0.8892735767560553, -0.28385016086224946, -0.4398808322221143 },
		 { 0.4007876515853859, 0.7253042663732964, 0.45982046799888676, 0.28968238718004674, -0.6740955552917824, 0.7737260289824431, 0.3256003838915809, -0.12376153720861631, -1.4083052292633838, -0.25472848814860855, -0.6590077809046307, -0.3855227022332593, -0.29155644190602004, -0.5082563427489936, -1.2420396612276436, 1.067260432693895, 1.0806592811261329, 0.6681557191484334, -0.5194367683818962, 0.2567312921691882, 0.022188866126998073, 0.20330156210974965, 0.15199883729453006, -0.08939077054711389, -1.1459442546419703, 0.6299239529088776, 0.5858119189417486, 0.09897028869010549, -1.0695003759821298, -0.22967785615503594 },
		 { -0.35205680393199257, -0.6815939362503177, -0.22459263734639057, -0.4187949134256917, 0.1277939122647768, 1.1512795335785682, 1.0408454443291473, 0.21403219527548462, 1.2339500407455934, 1.6543576490129972, 0.0679320232059679, -0.18202749269001492, 1.21525682076852, -0.1297287069879998, 0.1452996850051882, 2.511871413137451, 2.6037114731918183, 2.3073993873241765, 1.4258273252200788, 2.6544882175302345, -0.4137920910608791, -0.8623921102397502, -0.13395008129448144, -0.46924316387304693, -0.48347163129420345, 1.2851376834252835, 1.2288191771812262, 0.47812389045453924, 0.6959445646914117, 1.3000235522334205 },
		 { -0.373164592404442, -0.4415012605234808, -0.3363026050578424, -0.4729910705673724, 0.8256919503111191, 0.7048903071500006, -0.2852050094685001, -0.38425832550266154, -0.040896052905234515, 0.45996335097555757, -0.5046366407395727, -0.8685668865025771, -0.3495524919442129, -0.520340793092537, -0.09535175907731187, 0.5908244666860271, 0.4727070580328373, -0.14779068070586038, -0.2753634818571815, 1.3947588081708493, -0.31120833642843737, -0.5037452012759764, -0.22560945000061206, -0.4198052134009341, 0.6369518659114156, 0.9405983285020499, 0.34820145722602563, -0.10036531797592158, -0.05160252221249307, 1.8500874148388577 },
		 { -0.34502087444117546, -0.19018930088417468, -0.31355623154193574, -0.39837317305346426, 0.4752023175174263, 0.20635280660594615, 0.008253789114913012, -0.09789444958595983, 0.5733862232433494, 0.11153082169733591, 0.08537508989128523, -0.5170751609278821, -0.1435852114347434, -0.1261744568869577, 0.015004779827572649, -0.324299862027158, -0.21370138275783557, -0.16837311241389655, -0.34370400208410173, -0.11985569859810878, -0.10860542102936493, -0.2458609953067863, -0.19658988152994533, -0.22751891357472598, 0.632505740922505, 0.04612115706673204, 0.0694260251692018, -0.04501209172676791, 0.30221223979299605, 0.2588312408731264 },
		 { 0.20378162584252038, 0.4044327464766827, 0.12620698976559103, 0.07878864525915881, -0.21422234479104663, -0.551883099033233, -0.9004546439808145, -0.683707904569648, -1.1432382196924193, -0.7603608097058417, -0.5129220974150982, 0.4264026287726145, -0.5934611136001636, -0.418333815192626, 0.21717054017433546, -0.5936341126183294, -0.87166527143014, -0.21688884429712488, -0.9770741806157358, -0.4234215533507715, -0.016280041860167627, 0.7173621316244927, -0.11802470835326165, -0.13410851469274368, 0.014494367463850157, -0.5906876933789883, -0.997684642698405, -0.3948892761397705, -1.1275622856445693, -0.4831001357125412 },
		 { -0.4962933584937333, 1.9504500696149127, -0.5278776175584778, -0.5240454214979411, -0.45917993430400145, -0.7490035751897732, -0.774765948894213, -0.5373306204932045, 0.27465991086972324, -0.9823852585947546, 1.0011360908704434, 2.76968079927058, 0.7247294816604415, 0.3952340329359323, 0.27652195605595414, -0.505896440077266, -0.626347702221489, 0.0462722468270527, -0.02030689743885505, 0.01654227244809512, -0.45995478064547773, 1.2382540708337832, -0.5083732940013795, -0.5015393124226685, -1.0792523798083022, -0.988527580986927, -1.0345246857758208, -0.7814019773477333, -0.804592913147251, -1.1235316328888723 },
		 { 0.2072995905879286, -0.7780797778975512, 0.1257015147985706, 0.10942125581750031, -0.6856501585706952, -0.7709058503182776, -0.6126900293737003, -0.3647819301161908, -0.3143778881768646, -0.6582619755452467, 0.055285799859112805, -0.5129641465936751, -0.06390839502713269, -0.039095329411423824, 0.4893524239439455, -0.6385231543835247, -0.578606259112021, -0.3630241094241822, -0.07156228760904512, -0.46705053398844615, 0.06835155571159673, -0.7684607769397146, -0.014332835647097747, -0.04839950508028658, -0.39454913151597965, -0.7828346413169454, -0.7403254167304325, -0.4764792917093323, -0.22215938184590756, -0.733903063543354 },
		};
		
	
		double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
			return sigmoid_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.03333333333333333,0.0 ) + 0.4536014007615713;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11", "scaler_output_12", "scaler_output_13", "scaler_output_14", "scaler_output_15", "scaler_output_16", "scaler_output_17", "scaler_output_18", "scaler_output_19", "scaler_output_20", "scaler_output_21", "scaler_output_22", "scaler_output_23", "scaler_output_24", "scaler_output_25", "scaler_output_26", "scaler_output_27", "scaler_output_28", "scaler_output_29", "scaler_output_30", "scaler_output_31" };
	
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
	
		tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11, std::any scaler_output_12, std::any scaler_output_13, std::any scaler_output_14, std::any scaler_output_15, std::any scaler_output_16, std::any scaler_output_17, std::any scaler_output_18, std::any scaler_output_19, std::any scaler_output_20, std::any scaler_output_21, std::any scaler_output_22, std::any scaler_output_23, std::any scaler_output_24, std::any scaler_output_25, std::any scaler_output_26, std::any scaler_output_27, std::any scaler_output_28, std::any scaler_output_29, std::any scaler_output_30, std::any scaler_output_31) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11, scaler_output_12, scaler_output_13, scaler_output_14, scaler_output_15, scaler_output_16, scaler_output_17, scaler_output_18, scaler_output_19, scaler_output_20, scaler_output_21, scaler_output_22, scaler_output_23, scaler_output_24, scaler_output_25, scaler_output_26, scaler_output_27, scaler_output_28, scaler_output_29, scaler_output_30, scaler_output_31 };
	
			std::any lDotProduct_0_1 = sigmoid_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 0.03333333333333333,0.0 ) + 0.4536014007615713;
	
			std::any lLogistic_0_1 = logistic(-2.5116300804887923 * lDotProduct_0_1 + -0.1314624001813656);
	
	
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
			tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0], iTable.at("scaler_output_12")[0], iTable.at("scaler_output_13")[0], iTable.at("scaler_output_14")[0], iTable.at("scaler_output_15")[0], iTable.at("scaler_output_16")[0], iTable.at("scaler_output_17")[0], iTable.at("scaler_output_18")[0], iTable.at("scaler_output_19")[0], iTable.at("scaler_output_20")[0], iTable.at("scaler_output_21")[0], iTable.at("scaler_output_22")[0], iTable.at("scaler_output_23")[0], iTable.at("scaler_output_24")[0], iTable.at("scaler_output_25")[0], iTable.at("scaler_output_26")[0], iTable.at("scaler_output_27")[0], iTable.at("scaler_output_28")[0], iTable.at("scaler_output_29")[0], iTable.at("scaler_output_30")[0], iTable.at("scaler_output_31")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

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

		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable = lTable_model;

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
