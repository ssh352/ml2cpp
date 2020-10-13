// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_linear_Pipeline
// Dataset : RandomReg_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_linear_Pipeline_RandomReg_10.exe ml2cpp-demo_SVR_linear_Pipeline_RandomReg_10.cpp

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
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 0.16680947298137394 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( -0.16351271994443456 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.19149292241003152 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.058384844753055345 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( -0.09933205162122274 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( 0.21293121660488037 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( 0.047865568690029614 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.05078698959084227 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( -0.1913199225908187 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 0.19940405677473352 ) : ( Feature_9)) };
	
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
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 0.16680947298137394 ) / 1.0289835997047314 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - -0.16351271994443456 ) / 0.9915812535046814 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.19149292241003152 ) / 0.9321147629147756 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.058384844753055345 ) / 1.0855729329506805 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - -0.09933205162122274 ) / 1.0743904412882828 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - 0.21293121660488037 ) / 0.9358074381886248 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - 0.047865568690029614 ) / 1.1363574090613386 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.05078698959084227 ) / 0.9725457460098452 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - -0.1913199225908187 ) / 1.1415974677936562 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 0.19940405677473352 ) / 0.882245682091319 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> lProblem_data_dual = { 
		 -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 ,};
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv = { 
		 { -1.8946065859541215, 0.7295564613868584, -0.06263085515616755, 0.10936247309357386, -1.246384586989803, 0.36881875806614833, 0.24844368632138902, 0.9836203209109128, -0.47644881521942245, 0.37491669402628397 },
		 { 0.48156298526867447, 0.01901092445345577, -0.6596084304936646, -1.2048609414944542, -0.4181375097915614, -1.4427356822982043, -0.027486056832966083, -0.08547432104106395, 0.09713739508390715, 0.49849833314153924 },
		 { 0.682864510743063, 0.48995352363373956, -0.6753306719635662, -0.189486155032714, -0.2835625302517897, 1.7945366807980723, 0.02506632554015826, -0.9081185599708572, 0.08044307863057724, 0.6983624319857181 },
		 { 0.2697611754365801, -0.4490048255433816, -2.068829771066232, 1.3007714145540241, -1.2755691642444629, 0.2551711599154615, -0.33921398537671993, -0.14410363152727151, -0.049905751043687725, 0.4697527272574276 },
		 { 0.39293412568576674, 0.14979279098563744, -1.839627789435509, 1.690555684856671, 0.5075510874481638, -1.425863862337372, -0.3403724106530401, -0.13029419871854905, 0.03566273253945489, 0.8137072739139833 },
		 { -0.44547168786327174, 1.235902031753094, 1.6535576057239503, 0.4548929735471705, 0.5313263322770495, 0.42801711232889267, 0.15516367387302196, -0.6443049831943541, 0.20128519434766792, -0.3546931920427553 },
		 { 2.2035589791749093, 0.01612248193001029, 0.1367873131636802, -3.730447987257122, -1.8880126096926744, 1.9595565233998102, -1.1807919775455515, -2.1737611429577957, -1.2806441207957213, -0.20834159346965395 },
		 { 0.45121620602693113, 0.6927829112820847, 0.21026593709769814, -1.7410845982371301, -2.5148760435119613, 1.034835737300006, -0.25373023727523497, -1.2929198183473178, -0.18501983392613078, -2.9560855675389575 },
		 { 0.49877322829420395, -0.7835870228285015, 1.9365729631216244, 1.7643886683161254, 0.23213750788530227, -0.7878853783191307, -0.14002848577239804, -0.04933178780372324, 0.18600501061726604, 0.15470184454539293 },
		 { -0.48212018871001516, -0.22539505776166552, 0.7246618959659455, -0.8349126721072422, 0.8917255976445392, 1.2498524929223416, 0.06559231915237737, -0.2252325698071774, -1.1377213058461033, -0.44991944441900134 },
		 { -1.5336712174642664, 0.6918761122143567, -0.2405985416559094, -1.2245999981363067, 1.0228097024986083, 0.2621871895314313, 0.5237275402039153, -0.5619287253465259, 0.8393183459123674, -0.9757215224017777 },
		 { -0.9329987564419168, -0.2983326039436585, 0.43254788820144385, 0.3092647240065373, 0.2632662085737163, 1.082467850830824, -0.24525609573439805, -0.6805015562309291, 0.13403740190107027, 0.6108979939787691 },
		 { 0.8080418243884951, 0.40277896630205867, 1.5848483872143049, 0.07545169189663384, -0.23291185514685916, 0.2367375801052967, -0.14641984263394023, 0.0356480979150275, -1.8511424584889067, 1.8977445906691717 },
		 { 1.2844484871662494, -1.2823910352518806, -0.14631531479237733, -0.4533988342683957, -1.170840656578141, -1.9284147280088961, 0.3825160796407274, -0.14909706065332395, 0.1605008351277196, -1.0362167216942462 },
		 { 0.2184693806162413, 0.90273876993466, -0.34356622170579343, 0.4027247309048386, 1.4591970671664045, 0.04910085497154053, -0.20243346113790775, -0.11427189504944531, -0.13674998553708606, -1.678836397130642 },
		 { 1.935338564084159, 0.4348241756158384, 0.8157970085598074, 1.7613478060887786, 0.07565003385459268, -1.5627204688837792, 1.0637437347041272, 0.5748809426953353, 0.020088650364001277, 0.45910030418381365 },
		 { -0.5052473494120033, 1.2639344918130762, -2.4574662722704272, -0.1831354782024557, -1.2135498102245217, 0.194110617239443, -0.008278593069782592, 0.9050339402369554, 1.157617689964029, 1.6786337165612546 },
		 { -2.029565760890454, -0.49573441498307236, -0.079653017563974, -0.4757746477976455, 1.0310372145566618, -1.3393322940886465, -0.3953045725808925, 0.2527860003210711, -0.9269650889596994, 1.1227354265585692 },
		 { -0.9110739830088622, -0.06235487707426319, 0.5862948156468858, -0.2515799006775241, 0.24001263835718953, -0.49333956244132915, 0.24073781774388228, 1.2336336494056315, 0.10524619459152489, -0.21672955143725528 },
		 { -1.7390315178894131, 0.9771056176554836, -1.2078095290763295, 0.7431087904084137, -0.8177905665989258, 0.5068503316137839, -0.1581718905456467, -0.5519282603318068, 0.37028000680404305, 0.6036795297477495 },
		 { 1.3692908871099043, 0.3082426645883509, -0.369549983106112, 0.491251818883714, 0.71673052666001, 0.48050773330587226, 0.03378864714210537, 0.7823485912627165, 0.14492660001979332, 0.5792422651059 },
		 { -0.33890431770012647, -1.6827081862333182, -1.8783339550688016, -0.9872248194308109, -0.9674872950377205, -1.02964494320945, -0.6793008151880745, -0.6344669770630017, 0.38897962813182946, 0.12367703077837762 },
		 { -0.11272019569782508, 1.5197817796147324, 1.0672007445263756, -0.6642795191992296, -0.268581886550541, -0.10126734252976785, 0.31128873526831147, -0.23719971613561, -0.44475396474172313, 0.037007610123586665 },
		 { -0.7493847601719262, -0.31935395402743993, -1.0146556295868745, 0.345630131791216, 1.2180427511082064, -2.10091388465659, 0.411617882005597, 0.06391720896365843, 0.286528426467517, -1.0880070380116635 },
		 { 0.42177758794895065, 0.9754930930709454, 1.618251864395043, -0.1336813695727553, -0.926790985248289, 0.30829467884557626, -1.5563234269254405, -0.8900281139453707, 0.5995908076914787, 0.19178772103019662 },
		 { 1.5276547702692265, 0.4075216652400821, -1.3583594477918808, 0.4448772525337184, -0.6562966564230347, -0.6869980508117421, -0.4803674248435924, 0.36214311251477693, -0.7194977365024273, 0.48896258517287516 },
		 { 0.7244417490436866, 0.7102393556630693, 0.8849019951974334, -0.12928860964478442, 1.7775050679921218, -1.7466279803498763, -0.9022312777841832, 0.8097251772260402, 1.7049817939162109, 0.4952147780105905 },
		 { 0.19106956948475337, 3.2615917244742128, -0.5417415529669369, -0.06857744456710373, 0.6650282835465393, -0.89732037206021, -0.2370699799058338, 0.2891434016615764, -0.8692926604382335, -2.499676845938167 },
		 { 0.8488374861266474, -1.276911228095106, 0.6463222288324869, 1.2344327468456537, 1.4845318072055462, -0.6207509106883249, 0.3109435814870959, 1.9064499836842108, 0.18959664247399724, -1.7158385258020774 },
		 { 0.9925681902970069, 0.811928022141507, -0.4849096992993376, -0.2823986566766817, 0.17023014660976457, 1.4645015676871775, 0.6279113406369113, 0.9890176011754906, 0.74993126070507, 1.2142172144694727 },
		 { 0.2199997851874381, 0.0008833748301826923, 2.4444854344400393, 0.6489839413890875, 0.667834392074085, -0.6132206134884751, -0.4677862855561717, -0.7043164657524464, 0.03438583189132576, 1.7793908420266655 },
		 { -1.4587613799390977, -0.34961236666878454, -0.6615523280647982, 0.6984141548242172, -0.6960033132995534, -1.243586688534552, 0.34560960969357785, 0.13673421558077894, 1.3692900218481296, -0.4865447825832154 },
		 { -1.9390369628996735, 0.0002512735836344932, -1.253921223817939, -0.6887136729723051, -0.36955845443487284, 0.9022700163914414, -1.4306221741297926, 0.4962991500714161, 1.7074435369572298, 2.248293584582692 },
		 { -0.5246257556158707, -0.7957491382668226, -0.34966058610810347, -0.7910556460851272, 0.06345466740872843, 0.6241582100609643, 0.6832948369612996, -1.1620548949909832, 1.3198596599391819, -0.4128638028458789 },
		 { -1.0298643215084546, -0.48874273787808153, -1.1443584867491154, 1.0884858384929614, -0.8751155207563746, 0.8946996982274239, 2.26856746424297, 0.3105110297985413, -0.6282429396474761, 0.8098342823715869 },
		 { 0.10988841613486348, 0.84864921478315, 1.368423715903943, -0.19725887705914136, -0.6952232421067527, -0.9022695092157306, 1.982582883361999, -0.8133889287720607, 1.0174000517090092, 0.4662272666619447 },
		 { 1.3185110526263706, 0.9094450899090752, -1.7858527649151772, -0.47834443988118, -0.09882397249755238, 0.9735922979679523, -0.16263173952531307, 1.4204043923109697, 1.8103512698489652, -0.23937756952011832 },
		 { 0.9697003372461587, -1.0930266530942698, 0.29763185756784677, -0.4586025772945359, -1.1762857014255539, 0.33034639430497553, 0.7917688894862281, 1.1445628408447885, -0.6222893588814495, 0.4879679006917281 },
		 { 0.7461420694271036, -1.751409551741113, -0.01303945156553798, 0.11902040816285027, -0.4090050747839768, 1.1479021291209732, -2.3006598219812444, 0.5886114845396557, -0.05048012218277837, -0.39026804175953095 },
		 { -1.236068358467277, -0.462357334927412, 0.5003649841783561, 0.12798408192377392, -2.374465239282156, -1.0026923974154467, 0.01010369956701393, -0.8873592425537252, 0.1578695400284867, -1.122209677169762 },
		 { -0.3188455607344977, -1.525743086183012, -0.3956728253267135, -0.18462445186022164, -0.8912436705968825, -0.1864567888758982, 0.6788418147797204, -1.8640990005897746, -0.21249498218094015, 0.9408106672266372 },
		 { -0.1651015449598925, -0.452362102488713, 0.38301291099193346, 0.6421162751346802, -1.833596125587433, 0.5730324135070591, 0.040787432476984666, -0.9056729790169366, 1.1617314785305253, -1.4937934918714986 },
		 { -0.3099292725467472, -0.0011689871221093873, 0.33532876681438073, 0.5732041741400951, 1.0619146242897295, -0.7685544922802201, -0.7563735870996438, 1.1639583630294696, 1.320636251783545, 0.4050625392734363 },
		 { 0.9575680702482104, 1.7980848306797708, -0.3095072159708213, -0.401334589651027, -0.18391222999768128, 0.4853895781411927, -0.990253925477097, 0.09463456947013928, -1.494334945903461, 0.726070088855913 },
		 { -1.1820712312057244, -2.219933741468195, 0.8008893301411906, -1.9330793760863076, -0.15747386485106943, 1.6132302374264693, -0.11280888022694743, 0.6379213852042154, 0.02417649899476313, 0.23950927283181553 },
		 { -0.8576892587084674, -0.5943040763269904, -0.9619891141611235, -1.074688165264292, 1.0144178255550846, 1.8212345334096511, 0.9498082044565003, -2.0140590827773495, 0.12351384170041484, -0.5768842287999798 },
		 { 0.4787242004458327, -0.9620211095056173, -0.17421894106808392, 0.8636483559574344, 1.0701060954689445, 0.8345972182127014, -2.4924283016522217, -0.8989099713294649, -2.1052777396883364, 1.3375343404365319 },
		 { 0.49656853461540396, 0.09271245119372402, 0.1502517068777876, 0.7423861784779975, 0.08052653161298018, -0.23398600746610115, 1.317374527554107, 1.7581595225278215, 0.5008538036709074, -0.8580146028199153 },
		 { 0.22467945232396108, 0.999043785077239, 0.11108983993162179, 1.0677311584675313, -0.7621616518303761, -0.009030578502803855, 1.640146634430812, -2.3140616112365793, 0.35028228959571206, 0.2817866631666624 },
		 { 0.5546711360831659, -1.0347694314840132, -0.7711457739986982, -1.0994454559735634, -0.42699546065870386, -0.9834043119468336, -0.2300329480183366, -0.046490652106054846, -1.3577642436360429, -0.7757538499750842 },
		 { -1.3239955003219972, -0.38357993111632643, 1.288849906819348, 0.22004439251770863, 0.0002710304451144837, 1.694003119375268, -0.3046147541805158, -0.7987270318272205, 0.0905197659735593, 1.4454089161099974 },
		 { 0.5847545429818218, -0.9397587710725342, 0.24595197352055104, -1.084053703624585, 0.9693594119795907, -1.9976775338194026, -1.0235204115865892, 1.0791370432770195, -1.3367826484787766, -0.33477727114493105 },
		 { 1.7117026937169204, -0.3635854917618158, 2.0430560723159465, 1.2405047716574131, 0.5938395464927543, 0.7479055504564399, -0.7335588357297746, -1.2060428023919187, 2.7863729198547196, -2.196746514670861 },
		 { 1.6073565979523265, 1.0157469316301286, 0.44151305472526003, 0.9209755863571708, -0.8081293153407708, 0.02547662212172918, 0.8995608502648103, -1.5211302812910872, 1.6006459801280781, -0.4085584870115411 },
		 { -1.1774816893031017, 1.2937797424233286, -0.7730322855841777, -1.0751399739314846, 1.2473740306627124, 0.8134026066586144, 0.5635554538736672, -1.3747164798800862, 0.06238715822054158, -1.3168743063044366 },
		 { -1.3534109706317643, -0.23348345260579006, -1.0161656555091672, 1.6989984464007217, 0.3449760319678672, 0.42102030183118366, -1.0337201192626606, -1.4468577042918944, -1.0150653713490854, 0.6657457682446057 },
		 { -0.9522287275943353, -0.6089209094706058, 0.4912496427030447, -0.4512758663532366, -0.7184593223709619, -1.2954552424698746, -0.32710238940044223, 1.236339944234982, 0.5836824731809765, 0.22012696650219857 },
		 { 0.2688694630064186, -0.8063142098577751, -0.16575853265495538, 1.3698224959662701, 1.5395581011130948, -0.5120254434003136, 0.4521341527989669, 0.3929317411503545, -1.2955285574239503, -0.08929858878220348 },
		 { 0.4401676817595216, 0.30125472734533865, 0.04041073995735689, 0.12141948091971905, -0.6436894076231423, 0.5776000071197956, 1.0451948709403518, 0.2610381914446733, -1.617715438982375, 0.4252626430650974 },
		 { 0.1774628884804514, -1.0302059883050136, 0.21600978890510436, 0.9919831835205855, -0.35305930340358876, 0.9456554261693497, 0.4526885446153252, 0.6300498434140098, -1.3667737226298737, 0.8584190503416232 },
		 { -1.055928326735167, -0.7973510782925367, 0.404603591503204, 1.25601013721405, 0.7044328691290371, 0.11389302229055125, 1.1292410298786804, -0.40407267750720927, -0.2714541644079437, -0.49725437940228545 },
		 { 0.07691126791379829, -1.6792653155013806, -1.5396254586629692, 0.07674780545321072, 1.9451621584646028, -1.642053503840161, -2.3164001627967017, -0.028687487447806137, 0.5940939508353231, 0.9622541046477675 },
		 { -1.4407625270209472, -0.09164299949446876, 0.18717650509557807, 1.6321874183913576, 0.6908999833002666, 0.4788915043871517, 0.011819747748235607, 0.6430478152822474, 1.4784340573521688, 0.6041289408228382 },
		 { 0.18983048103736264, -0.246875398197096, 0.8893811184873143, -0.44004927634986835, 0.6016547519248223, 0.3092458987864741, -1.1631320103380758, 0.8094270919561265, -1.520878104165293, 0.19469585674678758 },
		 { 2.5694877507556573, 0.4149660816256841, 0.4567585368947843, -0.27014166639901066, 1.9503893769558978, 0.3631879149550631, 0.7228761835212618, 2.6364126309527713, 0.1106151269992339, 0.3419067093880125 },
		 { 0.3824653983801872, 1.633643493539936, 1.4648697009678788, -1.1772141244372516, 1.1979091898914433, 0.15463715296475683, -0.11621631901867421, -1.3582180244805635, 0.05316447447661942, 1.3907803566716266 },
		 { -0.6506196645071746, 0.3096943924259181, -1.141763231255856, -0.3671077062588396, 0.782114014947217, -0.24793942520980317, -1.015222977491259, -0.3018994835027699, -0.3562144026886143, -0.6582143355445299 },
		 { -0.6774944457081212, -0.20359067425064875, -1.2370356721259264, -1.7239437942421747, -0.40663462752757373, -1.0931414711777963, -0.44650499202424304, -0.5975185687898396, -0.9518893661528354, 1.4019776727928481 },
		 { -1.2488899791580803, 1.0366405639594345, 0.2856683538856065, -1.7302819504479852, 0.40004614670141464, 0.10832155379615818, -0.4862880394348233, -0.069549523481364, -1.1627106862211642, -1.4111861407471773 },
		 { 0.831681931313952, 0.27682690077990807, -0.002815168306877287, 0.8837246425890761, -0.6124178041593997, 1.1118279513960854, 1.6631600565064986, 1.4530555458284353, 1.8327690610187775, -1.7717767592104228 },
		 { -0.9493767950637803, 2.3179595191934133, 1.1546497729341056, 0.4950088516309006, 0.3717945873788518, 0.33060377587954826, -2.0768036834951404, 0.8500024260989983, -0.16462750293066986, 0.11837085054234289 },
		 { -0.05797075971926178, 0.3797984351165208, 0.48477538147543003, 0.15703226026085773, 0.4023142786378172, 0.5588844552505101, 0.18801803682684404, 1.068682450395403, 0.572619108157167, -0.43503964434897463 },
		 { 0.945014547167269, 0.4629686541775312, 0.0236306067105391, 0.1453472225784261, 1.2671846890314977, -0.7285484455378758, -2.589858887888251, -1.0740122128454666, -0.1033670710118521, -0.27918928447598307 },
		 { -0.6612126959196323, -0.6422616231917786, 0.0024566813198814413, 0.9563155790221323, -0.2059313160824677, 0.0036695317683986435, 1.2506333807158803, -0.2587529016207301, -1.6010520668757786, -0.9152061626566956 },
		 { 0.5205629036384851, 1.2336761488074413, -1.1952263533980352, -0.982342155705656, -0.242553744139015, -2.114089793009969, 0.9909196767669729, 0.6589066446938882, 0.6374469773486616, 0.1835081189588227 },
		 { 0.8904889358875075, -0.8285675486179637, -0.7877622450436069, 0.9031153926928042, -1.132084889118538, 0.549094689121613, 0.6814894934723551, -0.466661061595243, 0.7956420926735931, -1.0222863711223251 },
		 { -0.4314117183868256, -1.1787786990650588, 0.6977499576529038, -1.3552553185778635, 1.894590153032949, 1.0647793401064134, -0.026655602481820476, 1.8651531507343553, 1.3796475152851155, 0.408593346727794 },
		 { 0.23085239279949565, -1.4926919331597743, 1.4818576740731857, -0.9457632956502574, -1.4923925347846743, 0.8929298435093171, 1.994258922697419, 1.1113429050727168, -0.9210826020850861, -0.5454180359849039 },
		 { -0.12477718155662479, -1.7719552525833226, 0.5064149987717698, -0.27427372360210606, -1.1175666479112436, -0.7977736412239658, 1.3565659125713745, 0.7130944168578508, -1.6572459062331752, 0.18722365454824377 },
		 { -0.004321288878417237, 0.5785996246066984, -0.38743325592499506, 0.9694482981402766, -0.585331870990316, -0.6053085154783696, 1.3844337086718668, -0.35854443454233426, -1.0365787680361593, -0.22612774685843456 },
		};
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11 };
	
			std::any lDotProduct = linear_kernel( lProblem_data_dual, lProblem_data_sv, inputs ) + 7.096859886381239;
	
	
			tTable lTable;
	
			std::any  lEstimator = lDotProduct;
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
	score_csv_file("outputs/ml2cpp-demo/datasets/RandomReg_10.csv");
	return 0;
}
