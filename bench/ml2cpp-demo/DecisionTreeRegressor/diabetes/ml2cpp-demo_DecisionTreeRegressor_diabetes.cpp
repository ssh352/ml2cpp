// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DecisionTreeRegressor
// Dataset : diabetes

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DecisionTreeRegressor_diabetes.exe ml2cpp-demo_DecisionTreeRegressor_diabetes.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	typedef std::vector<double> tNodeData;
	std::map<int, tNodeData> Decision_Tree_Node_data = {
			{ 9 ,  {104. }} ,
			{ 12 ,  {128. }} ,
			{ 13 ,  {142. }} ,
			{ 15 ,  {150. }} ,
			{ 17 ,  {158. }} ,
			{ 18 ,  {160. }} ,
			{ 21 ,  {101. }} ,
			{ 24 ,  {70. }} ,
			{ 25 ,  {71. }} ,
			{ 27 ,  {55. }} ,
			{ 28 ,  {61. }} ,
			{ 30 ,  {138. }} ,
			{ 31 ,  {101. }} ,
			{ 37 ,  {88. }} ,
			{ 38 ,  {96. }} ,
			{ 41 ,  {63. }} ,
			{ 42 ,  {65. }} ,
			{ 43 ,  {78. }} ,
			{ 45 ,  {74. }} ,
			{ 47 ,  {53. }} ,
			{ 48 ,  {47. }} ,
			{ 49 ,  {135. }} ,
			{ 52 ,  {64. }} ,
			{ 54 ,  {53. }} ,
			{ 56 ,  {54. }} ,
			{ 57 ,  {55. }} ,
			{ 59 ,  {25. }} ,
			{ 60 ,  {31. }} ,
			{ 65 ,  {77. }} ,
			{ 66 ,  {68. }} ,
			{ 68 ,  {200. }} ,
			{ 70 ,  {146. }} ,
			{ 72 ,  {178. }} ,
			{ 73 ,  {168. }} ,
			{ 77 ,  {83. }} ,
			{ 79 ,  {129. }} ,
			{ 80 ,  {160. }} ,
			{ 83 ,  {53. }} ,
			{ 84 ,  {71. }} ,
			{ 86 ,  {132. }} ,
			{ 89 ,  {77. }} ,
			{ 90 ,  {83. }} ,
			{ 93 ,  {97. }} ,
			{ 94 ,  {89. }} ,
			{ 96 ,  {104. }} ,
			{ 97 ,  {107. }} ,
			{ 100 ,  {60. }} ,
			{ 101 ,  {67. }} ,
			{ 102 ,  {44. }} ,
			{ 105 ,  {200. }} ,
			{ 107 ,  {55. }} ,
			{ 112 ,  {113. }} ,
			{ 114 ,  {116. }} ,
			{ 115 ,  {118. }} ,
			{ 116 ,  {127. }} ,
			{ 118 ,  {79. }} ,
			{ 119 ,  {88. }} ,
			{ 121 ,  {144. }} ,
			{ 122 ,  {135. }} ,
			{ 126 ,  {200. }} ,
			{ 128 ,  {219. }} ,
			{ 129 ,  {216. }} ,
			{ 130 ,  {177. }} ,
			{ 131 ,  {104. }} ,
			{ 135 ,  {137. }} ,
			{ 139 ,  {85. }} ,
			{ 140 ,  {96. }} ,
			{ 141 ,  {72. }} ,
			{ 143 ,  {90. }} ,
			{ 145 ,  {37. }} ,
			{ 147 ,  {45. }} ,
			{ 150 ,  {48. }} ,
			{ 151 ,  {49. }} ,
			{ 152 ,  {51. }} ,
			{ 155 ,  {152. }} ,
			{ 159 ,  {125. }} ,
			{ 160 ,  {104. }} ,
			{ 163 ,  {91. }} ,
			{ 165 ,  {72. }} ,
			{ 167 ,  {77. }} ,
			{ 168 ,  {80. }} ,
			{ 170 ,  {71. }} ,
			{ 172 ,  {64. }} ,
			{ 173 ,  {66. }} ,
			{ 177 ,  {39. }} ,
			{ 178 ,  {40. }} ,
			{ 179 ,  {42. }} ,
			{ 180 ,  {65. }} ,
			{ 184 ,  {143. }} ,
			{ 185 ,  {114. }} ,
			{ 190 ,  {65. }} ,
			{ 191 ,  {75. }} ,
			{ 192 ,  {52. }} ,
			{ 193 ,  {90. }} ,
			{ 198 ,  {99. }} ,
			{ 199 ,  {98. }} ,
			{ 200 ,  {92. }} ,
			{ 202 ,  {96. }} ,
			{ 204 ,  {128. }} ,
			{ 205 ,  {118. }} ,
			{ 208 ,  {60. }} ,
			{ 209 ,  {72. }} ,
			{ 212 ,  {94. }} ,
			{ 213 ,  {97. }} ,
			{ 215 ,  {84. }} ,
			{ 216 ,  {87. }} ,
			{ 219 ,  {179. }} ,
			{ 220 ,  {158. }} ,
			{ 222 ,  {87. }} ,
			{ 224 ,  {108. }} ,
			{ 226 ,  {102. }} ,
			{ 227 ,  {103. }} ,
			{ 231 ,  {68. }} ,
			{ 232 ,  {61. }} ,
			{ 234 ,  {39. }} ,
			{ 236 ,  {53. }} ,
			{ 238 ,  {49. }} ,
			{ 239 ,  {51. }} ,
			{ 241 ,  {113. }} ,
			{ 243 ,  {81. }} ,
			{ 246 ,  {60. }} ,
			{ 247 ,  {59. }} ,
			{ 248 ,  {63. }} ,
			{ 253 ,  {190. }} ,
			{ 254 ,  {168. }} ,
			{ 256 ,  {150. }} ,
			{ 257 ,  {140. }} ,
			{ 261 ,  {92. }} ,
			{ 263 ,  {124. }} ,
			{ 264 ,  {111. }} ,
			{ 266 ,  {153. }} ,
			{ 268 ,  {131. }} ,
			{ 269 ,  {141. }} ,
			{ 271 ,  {88. }} ,
			{ 272 ,  {73. }} ,
			{ 273 ,  {230. }} ,
			{ 274 ,  {253. }} ,
			{ 276 ,  {302. }} ,
			{ 281 ,  {201. }} ,
			{ 283 ,  {182. }} ,
			{ 284 ,  {187. }} ,
			{ 285 ,  {210. }} ,
			{ 290 ,  {145. }} ,
			{ 291 ,  {121. }} ,
			{ 293 ,  {172. }} ,
			{ 295 ,  {191. }} ,
			{ 297 ,  {184. }} ,
			{ 298 ,  {182. }} ,
			{ 299 ,  {96. }} ,
			{ 303 ,  {78. }} ,
			{ 304 ,  {70. }} ,
			{ 306 ,  {95. }} ,
			{ 307 ,  {90. }} ,
			{ 311 ,  {167. }} ,
			{ 314 ,  {147. }} ,
			{ 315 ,  {144. }} ,
			{ 317 ,  {140. }} ,
			{ 318 ,  {141. }} ,
			{ 319 ,  {110. }} ,
			{ 321 ,  {91. }} ,
			{ 322 ,  {103. }} ,
			{ 325 ,  {52. }} ,
			{ 327 ,  {127. }} ,
			{ 329 ,  {118. }} ,
			{ 330 ,  {113. }} ,
			{ 334 ,  {170. }} ,
			{ 335 ,  {175. }} ,
			{ 338 ,  {293. }} ,
			{ 339 ,  {288. }} ,
			{ 342 ,  {263. }} ,
			{ 343 ,  {257. }} ,
			{ 345 ,  {237. }} ,
			{ 346 ,  {244. }} ,
			{ 348 ,  {131. }} ,
			{ 349 ,  {155. }} ,
			{ 355 ,  {252. }} ,
			{ 357 ,  {185. }} ,
			{ 358 ,  {178. }} ,
			{ 363 ,  {162. }} ,
			{ 365 ,  {94. }} ,
			{ 366 ,  {86. }} ,
			{ 368 ,  {200. }} ,
			{ 369 ,  {214. }} ,
			{ 375 ,  {93. }} ,
			{ 376 ,  {88. }} ,
			{ 378 ,  {84. }} ,
			{ 379 ,  {78. }} ,
			{ 380 ,  {102. }} ,
			{ 382 ,  {58. }} ,
			{ 384 ,  {74. }} ,
			{ 385 ,  {69. }} ,
			{ 389 ,  {170. }} ,
			{ 390 ,  {154. }} ,
			{ 391 ,  {209. }} ,
			{ 394 ,  {90. }} ,
			{ 395 ,  {91. }} ,
			{ 396 ,  {66. }} ,
			{ 399 ,  {168. }} ,
			{ 400 ,  {172. }} ,
			{ 401 ,  {206. }} ,
			{ 406 ,  {258. }} ,
			{ 407 ,  {221. }} ,
			{ 410 ,  {276. }} ,
			{ 415 ,  {126. }} ,
			{ 416 ,  {202. }} ,
			{ 419 ,  {144. }} ,
			{ 420 ,  {161. }} ,
			{ 423 ,  {94. }} ,
			{ 424 ,  {90. }} ,
			{ 427 ,  {101. }} ,
			{ 429 ,  {107. }} ,
			{ 430 ,  {111. }} ,
			{ 431 ,  {123. }} ,
			{ 432 ,  {185. }} ,
			{ 435 ,  {151. }} ,
			{ 439 ,  {206. }} ,
			{ 441 ,  {200. }} ,
			{ 442 ,  {196. }} ,
			{ 443 ,  {179. }} ,
			{ 444 ,  {229. }} ,
			{ 446 ,  {142. }} ,
			{ 447 ,  {100. }} ,
			{ 449 ,  {192. }} ,
			{ 453 ,  {68. }} ,
			{ 454 ,  {52. }} ,
			{ 455 ,  {85. }} ,
			{ 458 ,  {137. }} ,
			{ 459 ,  {122. }} ,
			{ 461 ,  {99. }} ,
			{ 462 ,  {84. }} ,
			{ 464 ,  {262. }} ,
			{ 465 ,  {317. }} ,
			{ 468 ,  {151. }} ,
			{ 472 ,  {292. }} ,
			{ 473 ,  {281. }} ,
			{ 475 ,  {259. }} ,
			{ 477 ,  {245. }} ,
			{ 478 ,  {235. }} ,
			{ 481 ,  {202. }} ,
			{ 482 ,  {173. }} ,
			{ 486 ,  {242. }} ,
			{ 488 ,  {233. }} ,
			{ 489 ,  {232. }} ,
			{ 490 ,  {220. }} ,
			{ 491 ,  {198. }} ,
			{ 495 ,  {122. }} ,
			{ 496 ,  {164. }} ,
			{ 498 ,  {95. }} ,
			{ 499 ,  {67. }} ,
			{ 506 ,  {156. }} ,
			{ 507 ,  {134. }} ,
			{ 508 ,  {109. }} ,
			{ 512 ,  {198. }} ,
			{ 514 ,  {219. }} ,
			{ 516 ,  {214. }} ,
			{ 517 ,  {212. }} ,
			{ 521 ,  {174. }} ,
			{ 522 ,  {173. }} ,
			{ 523 ,  {180. }} ,
			{ 524 ,  {164. }} ,
			{ 525 ,  {131. }} ,
			{ 527 ,  {131. }} ,
			{ 528 ,  {115. }} ,
			{ 530 ,  {249. }} ,
			{ 532 ,  {202. }} ,
			{ 533 ,  {196. }} ,
			{ 536 ,  {311. }} ,
			{ 537 ,  {277. }} ,
			{ 539 ,  {150. }} ,
			{ 540 ,  {225. }} ,
			{ 545 ,  {252. }} ,
			{ 546 ,  {257. }} ,
			{ 548 ,  {48. }} ,
			{ 551 ,  {143. }} ,
			{ 554 ,  {185. }} ,
			{ 556 ,  {190. }} ,
			{ 557 ,  {191. }} ,
			{ 558 ,  {217. }} ,
			{ 562 ,  {120. }} ,
			{ 563 ,  {129. }} ,
			{ 565 ,  {144. }} ,
			{ 566 ,  {138. }} ,
			{ 568 ,  {171. }} ,
			{ 569 ,  {163. }} ,
			{ 574 ,  {195. }} ,
			{ 575 ,  {202. }} ,
			{ 576 ,  {178. }} ,
			{ 579 ,  {232. }} ,
			{ 580 ,  {222. }} ,
			{ 581 ,  {265. }} ,
			{ 583 ,  {270. }} ,
			{ 584 ,  {280. }} ,
			{ 590 ,  {197. }} ,
			{ 591 ,  {208. }} ,
			{ 592 ,  {235. }} ,
			{ 594 ,  {166. }} ,
			{ 595 ,  {150. }} ,
			{ 597 ,  {241. }} ,
			{ 599 ,  {246. }} ,
			{ 600 ,  {248. }} ,
			{ 604 ,  {273. }} ,
			{ 605 ,  {258. }} ,
			{ 607 ,  {297. }} ,
			{ 609 ,  {281. }} ,
			{ 610 ,  {283. }} ,
			{ 613 ,  {230. }} ,
			{ 614 ,  {236. }} ,
			{ 615 ,  {248. }} ,
			{ 619 ,  {151. }} ,
			{ 620 ,  {259. }} ,
			{ 625 ,  {321. }} ,
			{ 630 ,  {281. }} ,
			{ 633 ,  {272. }} ,
			{ 634 ,  {270. }} ,
			{ 636 ,  {277. }} ,
			{ 638 ,  {275. }} ,
			{ 639 ,  {274. }} ,
			{ 640 ,  {258. }} ,
			{ 641 ,  {303. }} ,
			{ 643 ,  {243. }} ,
			{ 645 ,  {263. }} ,
			{ 646 ,  {261. }} ,
			{ 648 ,  {275. }} ,
			{ 650 ,  {310. }} ,
			{ 651 ,  {332. }} ,
			{ 653 ,  {242. }} ,
			{ 654 ,  {220. }} ,
			{ 657 ,  {336. }} ,
			{ 658 ,  {346. }} ,
			{ 659 ,  {308. }} ,
			{ 664 ,  {128. }} ,
			{ 665 ,  {121. }} ,
			{ 668 ,  {178. }} ,
			{ 669 ,  {180. }} ,
			{ 670 ,  {233. }} ,
			{ 673 ,  {215. }} ,
			{ 674 ,  {186. }} ,
			{ 677 ,  {242. }} ,
			{ 678 ,  {233. }} ,
			{ 679 ,  {252. }} ,
			{ 683 ,  {279. }} ,
			{ 685 ,  {268. }} ,
			{ 686 ,  {264. }} ,
			{ 687 ,  {306. }} ,
			{ 689 ,  {217. }} ,
			{ 690 ,  {220. }} 
	};
	

	int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		int lNodeIndex = (Feature_8 <= 0.0007076415786286816) ? ( (Feature_2 <= 0.0061888848431408405) ? ( (Feature_5 <= 0.11267216503620148) ? ( (Feature_8 <= -0.009431487880647182) ? ( (Feature_6 <= 0.021027816459536552) ? ( (Feature_9 <= -0.03214349877089262) ? ( (Feature_0 <= -0.029126054607331753) ? ( (Feature_3 <= -0.04870649427175522) ? ( (Feature_6 <= -0.02867429330945015) ? ( 9 ) : ( (Feature_6 <= -0.0010620108805596828) ? ( (Feature_8 <= -0.024434738792479038) ? ( 12 ) : ( 13 ) ) : ( (Feature_5 <= -0.035447060596197844) ? ( 15 ) : ( (Feature_8 <= -0.037004063837230206) ? ( 17 ) : ( 18 ) ) ) ) ) : ( (Feature_6 <= -0.012106924317777157) ? ( (Feature_2 <= -0.07949717342853546) ? ( 21 ) : ( (Feature_7 <= -0.02104282204527408) ? ( (Feature_2 <= -0.04177375230938196) ? ( 24 ) : ( 25 ) ) : ( (Feature_4 <= -0.05041528679430485) ? ( 27 ) : ( 28 ) ) ) ) : ( (Feature_3 <= -0.010834916261956096) ? ( 30 ) : ( 31 ) ) ) ) : ( (Feature_2 <= -0.03584578447043896) ? ( (Feature_4 <= 0.0025588986463844776) ? ( (Feature_9 <= -0.048711927607655525) ? ( (Feature_6 <= 0.0026196270482614636) ? ( (Feature_4 <= -0.04766338202171028) ? ( 37 ) : ( 38 ) ) : ( (Feature_3 <= -0.03149213991127908) ? ( (Feature_0 <= -0.0036982856690883636) ? ( 41 ) : ( 42 ) ) : ( 43 ) ) ) : ( (Feature_6 <= -0.013947743456810713) ? ( 45 ) : ( (Feature_1 <= 0.003019241616129875) ? ( 47 ) : ( 48 ) ) ) ) : ( 49 ) ) : ( (Feature_2 <= -0.016984074376523495) ? ( (Feature_3 <= -0.028049270622432232) ? ( 52 ) : ( (Feature_2 <= -0.03422906808555126) ? ( 54 ) : ( (Feature_9 <= -0.054925085976719856) ? ( 56 ) : ( 57 ) ) ) ) : ( (Feature_0 <= -0.007330824329983443) ? ( 59 ) : ( 60 ) ) ) ) ) : ( (Feature_6 <= 0.00261962681543082) ? ( (Feature_1 <= 0.003019241616129875) ? ( (Feature_3 <= -0.024606399005278945) ? ( (Feature_9 <= 0.003064409364014864) ? ( 65 ) : ( 66 ) ) : ( (Feature_9 <= -0.01143296476220712) ? ( 68 ) : ( (Feature_6 <= -0.02867429470643401) ? ( 70 ) : ( (Feature_8 <= -0.04698631912469864) ? ( 72 ) : ( 73 ) ) ) ) ) : ( (Feature_2 <= -0.011595014482736588) ? ( (Feature_5 <= -0.023077694699168205) ? ( (Feature_9 <= -0.021788231562823057) ? ( 77 ) : ( (Feature_8 <= -0.021829575765877962) ? ( 79 ) : ( 80 ) ) ) : ( (Feature_2 <= -0.028301102109253407) ? ( (Feature_3 <= 0.011543741449713707) ? ( 83 ) : ( 84 ) ) : ( (Feature_8 <= -0.04200391285121441) ? ( 86 ) : ( (Feature_4 <= -0.020832300186157227) ? ( (Feature_2 <= -0.015906263142824173) ? ( 89 ) : ( 90 ) ) : ( (Feature_4 <= 0.020446285139769316) ? ( (Feature_7 <= 0.03947501693619415) ? ( 93 ) : ( 94 ) ) : ( (Feature_3 <= -0.03837788384407759) ? ( 96 ) : ( 97 ) ) ) ) ) ) ) : ( (Feature_3 <= 0.018429484218358994) ? ( (Feature_2 <= -0.0018947056960314512) ? ( 100 ) : ( 101 ) ) : ( 102 ) ) ) ) : ( (Feature_3 <= 0.002936566132120788) ? ( (Feature_8 <= -0.07310866191983223) ? ( 105 ) : ( (Feature_4 <= -0.060734931379556656) ? ( 107 ) : ( (Feature_6 <= 0.013664540369063616) ? ( (Feature_8 <= -0.02370869740843773) ? ( (Feature_8 <= -0.03415451478213072) ? ( (Feature_1 <= 0.003019241616129875) ? ( 112 ) : ( (Feature_7 <= -0.02104282204527408) ? ( 114 ) : ( 115 ) ) ) : ( 116 ) ) : ( (Feature_1 <= 0.003019241616129875) ? ( 118 ) : ( 119 ) ) ) : ( (Feature_0 <= -0.04365620808675885) ? ( 121 ) : ( 122 ) ) ) ) ) : ( (Feature_7 <= -0.005359846283681691) ? ( (Feature_2 <= -0.01105610840022564) ? ( (Feature_3 <= 0.027036660816520452) ? ( 126 ) : ( (Feature_6 <= 0.011823721695691347) ? ( 128 ) : ( 129 ) ) ) : ( 130 ) ) : ( 131 ) ) ) ) ) : ( (Feature_2 <= -0.01644516922533512) ? ( (Feature_2 <= -0.06171327643096447) ? ( (Feature_0 <= -0.0999605543911457) ? ( 135 ) : ( (Feature_3 <= -0.05387079901993275) ? ( (Feature_9 <= -0.01143296476220712) ? ( (Feature_6 <= 0.056003374978899956) ? ( 139 ) : ( 140 ) ) : ( 141 ) ) : ( (Feature_2 <= -0.08326951786875725) ? ( 143 ) : ( (Feature_4 <= -0.05729504954069853) ? ( 145 ) : ( (Feature_8 <= -0.07487097010016441) ? ( 147 ) : ( (Feature_4 <= 0.001182945845357608) ? ( (Feature_0 <= -6.574729923158884e-05) ? ( 150 ) : ( 151 ) ) : ( 152 ) ) ) ) ) ) ) : ( (Feature_6 <= 0.03943600505590439) ? ( (Feature_3 <= -0.0745280273258686) ? ( 155 ) : ( (Feature_9 <= 0.019632837269455194) ? ( (Feature_4 <= -0.04353552125394344) ? ( (Feature_2 <= -0.033690162003040314) ? ( 159 ) : ( 160 ) ) : ( (Feature_8 <= -0.027740024030208588) ? ( (Feature_9 <= -0.056996140629053116) ? ( 163 ) : ( (Feature_3 <= -0.02977070491760969) ? ( 165 ) : ( (Feature_0 <= -0.016412172466516495) ? ( 167 ) : ( 168 ) ) ) ) : ( (Feature_6 <= 0.03023191075772047) ? ( 170 ) : ( (Feature_2 <= -0.03692359756678343) ? ( 172 ) : ( 173 ) ) ) ) ) : ( (Feature_3 <= 0.03736527357250452) ? ( (Feature_9 <= 0.04862758610397577) ? ( (Feature_2 <= -0.04716281220316887) ? ( 177 ) : ( 178 ) ) : ( 179 ) ) : ( 180 ) ) ) ) : ( (Feature_3 <= -0.01083491649478674) ? ( (Feature_4 <= -0.06417481414973736) ? ( (Feature_9 <= -0.09220405295491219) ? ( 184 ) : ( 185 ) ) : ( (Feature_9 <= -0.07770667597651482) ? ( (Feature_8 <= -0.054755063727498055) ? ( (Feature_4 <= 0.012190569192171097) ? ( (Feature_5 <= -0.024643437936902046) ? ( 190 ) : ( 191 ) ) : ( 192 ) ) : ( 193 ) ) : ( (Feature_8 <= -0.03137132711708546) ? ( (Feature_7 <= -0.05794394388794899) ? ( (Feature_6 <= 0.09834221005439758) ? ( (Feature_0 <= -0.038207399658858776) ? ( 198 ) : ( 199 ) ) : ( 200 ) ) : ( (Feature_6 <= 0.07257074490189552) ? ( 202 ) : ( (Feature_2 <= -0.037462503649294376) ? ( 204 ) : ( 205 ) ) ) ) : ( (Feature_2 <= -0.036923598498106) ? ( (Feature_3 <= -0.046985057182610035) ? ( 208 ) : ( 209 ) ) : ( (Feature_6 <= 0.06336665153503418) ? ( (Feature_8 <= -0.018428430426865816) ? ( 212 ) : ( 213 ) ) : ( (Feature_6 <= 0.1149095818400383) ? ( 215 ) : ( 216 ) ) ) ) ) ) ) : ( (Feature_6 <= 0.05968501418828964) ? ( (Feature_7 <= -0.03045260813087225) ? ( 219 ) : ( 220 ) ) : ( (Feature_9 <= 0.005135462852194905) ? ( 222 ) : ( (Feature_3 <= 0.0603177435696125) ? ( 224 ) : ( (Feature_3 <= 0.08384402841329575) ? ( 226 ) : ( 227 ) ) ) ) ) ) ) ) : ( (Feature_4 <= 0.00943866278976202) ? ( (Feature_0 <= -0.04910501651465893) ? ( (Feature_0 <= -0.07816532254219055) ? ( 231 ) : ( 232 ) ) : ( (Feature_8 <= -0.06282874941825867) ? ( 234 ) : ( (Feature_2 <= -0.007283766404725611) ? ( 236 ) : ( (Feature_8 <= -0.04330067150294781) ? ( 238 ) : ( 239 ) ) ) ) ) : ( (Feature_4 <= 0.014942474197596312) ? ( 241 ) : ( (Feature_8 <= -0.04477105475962162) ? ( 243 ) : ( (Feature_9 <= -0.005219804355874658) ? ( (Feature_8 <= -0.03241247031837702) ? ( 246 ) : ( 247 ) ) : ( 248 ) ) ) ) ) ) ) : ( (Feature_4 <= 0.08098820969462395) ? ( (Feature_0 <= -0.0036982858437113464) ? ( (Feature_8 <= -0.004294325917726383) ? ( (Feature_6 <= 0.021027815993875265) ? ( 253 ) : ( 254 ) ) : ( (Feature_6 <= -0.03235593065619469) ? ( 256 ) : ( 257 ) ) ) : ( (Feature_6 <= 0.04864009842276573) ? ( (Feature_8 <= -0.004224510281346738) ? ( (Feature_8 <= -0.005612778244540095) ? ( 261 ) : ( (Feature_6 <= -0.034196750493720174) ? ( 263 ) : ( 264 ) ) ) : ( (Feature_2 <= -0.04339047148823738) ? ( 266 ) : ( (Feature_7 <= -0.02104282204527408) ? ( 268 ) : ( 269 ) ) ) ) : ( (Feature_2 <= -0.00027798768132925034) ? ( 271 ) : ( 272 ) ) ) ) : ( 273 ) ) ) : ( 274 ) ) : ( (Feature_0 <= -0.08361412957310677) ? ( 276 ) : ( (Feature_3 <= 0.023593789897859097) ? ( (Feature_4 <= -0.047663379460573196) ? ( (Feature_8 <= -0.017058268189430237) ? ( (Feature_8 <= -0.07417511194944382) ? ( 281 ) : ( (Feature_6 <= 0.0007788082584738731) ? ( 283 ) : ( 284 ) ) ) : ( 285 ) ) : ( (Feature_2 <= 0.0363676231354475) ? ( (Feature_5 <= 0.04769385606050491) ? ( (Feature_4 <= -0.03252789843827486) ? ( (Feature_3 <= -0.012556351255625486) ? ( 290 ) : ( 291 ) ) : ( (Feature_3 <= -0.04870649427175522) ? ( 293 ) : ( (Feature_2 <= 0.019661535508930683) ? ( 295 ) : ( (Feature_3 <= -0.007392046507447958) ? ( 297 ) : ( 298 ) ) ) ) ) : ( 299 ) ) : ( (Feature_5 <= -0.010238608345389366) ? ( (Feature_6 <= 0.011823721579276025) ? ( (Feature_6 <= -0.004743648809380829) ? ( 303 ) : ( 304 ) ) : ( (Feature_8 <= -0.043564509600400925) ? ( 306 ) : ( 307 ) ) ) : ( (Feature_4 <= 0.010126639623194933) ? ( (Feature_1 <= 0.003019241616129875) ? ( (Feature_5 <= -0.002409897046163678) ? ( 311 ) : ( (Feature_2 <= 0.06061839498579502) ? ( (Feature_0 <= 0.001750522293150425) ? ( 314 ) : ( 315 ) ) : ( (Feature_3 <= -0.025754022994078696) ? ( 317 ) : ( 318 ) ) ) ) : ( 319 ) ) : ( (Feature_6 <= 0.009982902556657791) ? ( 321 ) : ( 322 ) ) ) ) ) ) : ( (Feature_2 <= 0.027206219732761383) ? ( (Feature_9 <= -0.009361911565065384) ? ( 325 ) : ( (Feature_2 <= 0.011577945202589035) ? ( 327 ) : ( (Feature_6 <= -0.002902830019593239) ? ( 329 ) : ( 330 ) ) ) ) : ( (Feature_9 <= 0.0486275851726532) ? ( (Feature_5 <= -0.03168927878141403) ? ( (Feature_7 <= -0.04373701103031635) ? ( 334 ) : ( 335 ) ) : ( (Feature_4 <= -0.027712064795196056) ? ( (Feature_5 <= -0.02119880449026823) ? ( 338 ) : ( 339 ) ) : ( (Feature_8 <= -0.024217871949076653) ? ( (Feature_7 <= 0.0003598276525735855) ? ( 342 ) : ( 343 ) ) : ( (Feature_3 <= 0.03564383741468191) ? ( 345 ) : ( 346 ) ) ) ) ) : ( (Feature_5 <= 0.021702533587813377) ? ( 348 ) : ( 349 ) ) ) ) ) ) ) : ( (Feature_2 <= 0.05576823838055134) ? ( (Feature_3 <= 0.037365272641181946) ? ( (Feature_2 <= -0.023450947366654873) ? ( (Feature_4 <= -0.0586710050702095) ? ( (Feature_2 <= -0.04985734261572361) ? ( 355 ) : ( (Feature_9 <= -0.01971717830747366) ? ( 357 ) : ( 358 ) ) ) : ( (Feature_9 <= 0.04241442494094372) ? ( (Feature_2 <= -0.04608500003814697) ? ( (Feature_0 <= -0.05455382354557514) ? ( (Feature_3 <= -0.06936371885240078) ? ( 363 ) : ( (Feature_2 <= -0.07464702054858208) ? ( 365 ) : ( 366 ) ) ) : ( (Feature_5 <= -0.014309538062661886) ? ( 368 ) : ( 369 ) ) ) : ( (Feature_3 <= 0.006379436701536179) ? ( (Feature_3 <= -0.01772065833210945) ? ( (Feature_0 <= 0.04534098319709301) ? ( (Feature_4 <= 0.009438662324100733) ? ( (Feature_0 <= -0.0036982856690883636) ? ( 375 ) : ( 376 ) ) : ( (Feature_8 <= 0.027645904570817947) ? ( 378 ) : ( 379 ) ) ) : ( 380 ) ) : ( (Feature_6 <= -0.02867429330945015) ? ( 382 ) : ( (Feature_5 <= 0.04205718624871224) ? ( 384 ) : ( 385 ) ) ) ) : ( (Feature_3 <= 0.02531522512435913) ? ( (Feature_8 <= 0.052220726385712624) ? ( (Feature_3 <= 0.01670804899185896) ? ( 389 ) : ( 390 ) ) : ( 391 ) ) : ( (Feature_2 <= -0.032073442824184895) ? ( (Feature_5 <= 0.028904948383569717) ? ( 394 ) : ( 395 ) ) : ( 396 ) ) ) ) ) : ( (Feature_8 <= 0.02728391531854868) ? ( (Feature_8 <= 0.01947084255516529) ? ( 399 ) : ( 400 ) ) : ( 401 ) ) ) ) : ( (Feature_0 <= 0.007199329789727926) ? ( (Feature_9 <= 0.09626181423664093) ? ( (Feature_9 <= -0.046640872955322266) ? ( (Feature_1 <= 0.003019241616129875) ? ( 406 ) : ( 407 ) ) : ( (Feature_2 <= 0.02828403189778328) ? ( (Feature_7 <= -0.02104282204527408) ? ( 410 ) : ( (Feature_5 <= 0.015596139943227172) ? ( (Feature_6 <= -0.00842528638895601) ? ( (Feature_9 <= -0.02593033853918314) ? ( (Feature_3 <= -0.04354218952357769) ? ( 415 ) : ( 416 ) ) : ( (Feature_5 <= -0.026052605360746384) ? ( (Feature_0 <= -0.023677246877923608) ? ( 419 ) : ( 420 ) ) : ( (Feature_7 <= 0.015858298051171005) ? ( (Feature_0 <= -0.0036982858437113464) ? ( 423 ) : ( 424 ) ) : ( (Feature_4 <= 0.00531080411747098) ? ( (Feature_4 <= -0.018080394715070724) ? ( 427 ) : ( (Feature_2 <= 0.007805602857843041) ? ( 429 ) : ( 430 ) ) ) : ( 431 ) ) ) ) ) : ( 432 ) ) : ( (Feature_9 <= 0.06933811865746975) ? ( (Feature_2 <= -0.01375063881278038) ? ( 435 ) : ( (Feature_7 <= 0.07120997831225395) ? ( (Feature_9 <= 0.0299881047103554) ? ( (Feature_5 <= 0.031723286025226116) ? ( 439 ) : ( (Feature_8 <= 0.008231635671108961) ? ( 441 ) : ( 442 ) ) ) : ( 443 ) ) : ( 444 ) ) ) : ( (Feature_0 <= -0.001882016658782959) ? ( 446 ) : ( 447 ) ) ) ) ) : ( (Feature_3 <= -0.05329698882997036) ? ( 449 ) : ( (Feature_3 <= -0.022884964011609554) ? ( (Feature_9 <= -0.007290857611224055) ? ( (Feature_9 <= -0.02593033853918314) ? ( 453 ) : ( 454 ) ) : ( 455 ) ) : ( (Feature_3 <= -0.003375363303348422) ? ( (Feature_4 <= 0.06103689596056938) ? ( 458 ) : ( 459 ) ) : ( (Feature_5 <= 0.07587721757590771) ? ( 461 ) : ( 462 ) ) ) ) ) ) ) : ( (Feature_2 <= 0.02073934837244451) ? ( 464 ) : ( 465 ) ) ) : ( (Feature_0 <= 0.02354575227946043) ? ( (Feature_5 <= -0.07521691359579563) ? ( 468 ) : ( (Feature_8 <= 0.027622786350548267) ? ( (Feature_1 <= 0.003019241616129875) ? ( (Feature_6 <= -0.0268334758002311) ? ( 472 ) : ( 473 ) ) : ( (Feature_2 <= 0.0013387304061325267) ? ( 475 ) : ( (Feature_7 <= 0.05275942012667656) ? ( 477 ) : ( 478 ) ) ) ) : ( (Feature_0 <= 0.010831868276000023) ? ( (Feature_5 <= 0.015439565759152174) ? ( 481 ) : ( 482 ) ) : ( (Feature_3 <= 0.031627154909074306) ? ( (Feature_8 <= 0.06742453016340733) ? ( (Feature_3 <= -0.024606398306787014) ? ( 486 ) : ( (Feature_0 <= 0.016280675306916237) ? ( 488 ) : ( 489 ) ) ) : ( 490 ) ) : ( 491 ) ) ) ) ) : ( (Feature_0 <= 0.02899456024169922) ? ( (Feature_5 <= 0.05254765786230564) ? ( (Feature_9 <= 0.027917051687836647) ? ( 495 ) : ( 496 ) ) : ( (Feature_7 <= 0.015858298051171005) ? ( 498 ) : ( 499 ) ) ) : ( (Feature_9 <= 0.029988105408847332) ? ( (Feature_8 <= 0.06038610450923443) ? ( (Feature_9 <= 0.025845997966825962) ? ( (Feature_9 <= -0.025930338073521852) ? ( (Feature_2 <= -0.004050329967867583) ? ( (Feature_4 <= -0.001568961888551712) ? ( 506 ) : ( 507 ) ) : ( 508 ) ) : ( (Feature_7 <= 0.08154229447245598) ? ( (Feature_2 <= 0.016967006027698517) ? ( (Feature_3 <= -0.023458775132894516) ? ( 512 ) : ( (Feature_3 <= 0.00293656624853611) ? ( 514 ) : ( (Feature_2 <= -0.0013557998463511467) ? ( 516 ) : ( 517 ) ) ) ) : ( (Feature_5 <= 0.06272498145699501) ? ( (Feature_4 <= 0.03282986208796501) ? ( (Feature_9 <= 0.009277569595724344) ? ( 521 ) : ( 522 ) ) : ( 523 ) ) : ( 524 ) ) ) : ( 525 ) ) ) : ( (Feature_4 <= 0.034205815522000194) ? ( 527 ) : ( 528 ) ) ) : ( (Feature_8 <= 0.07527174428105354) ? ( 530 ) : ( (Feature_4 <= 0.11469905823469162) ? ( 532 ) : ( 533 ) ) ) ) : ( (Feature_5 <= 0.017944752238690853) ? ( (Feature_0 <= 0.07440129108726978) ? ( 536 ) : ( 537 ) ) : ( (Feature_8 <= 0.05354392156004906) ? ( 539 ) : ( 540 ) ) ) ) ) ) ) ) : ( (Feature_8 <= 0.04397285170853138) ? ( (Feature_2 <= 0.015350287780165672) ? ( (Feature_4 <= -0.02702408842742443) ? ( (Feature_5 <= -0.027618349064141512) ? ( 545 ) : ( 546 ) ) : ( (Feature_8 <= 0.012934560421854258) ? ( 548 ) : ( (Feature_7 <= 0.03357083536684513) ? ( (Feature_9 <= 0.007206516107544303) ? ( 551 ) : ( (Feature_3 <= 0.0855654627084732) ? ( (Feature_9 <= 0.05898285284638405) ? ( 554 ) : ( (Feature_6 <= 0.028391091851517558) ? ( 556 ) : ( 557 ) ) ) : ( 558 ) ) ) : ( (Feature_8 <= 0.035758864134550095) ? ( (Feature_2 <= 0.004572166595607996) ? ( (Feature_0 <= 0.039892176166176796) ? ( 562 ) : ( 563 ) ) : ( (Feature_4 <= 0.04934129677712917) ? ( 565 ) : ( 566 ) ) ) : ( (Feature_0 <= -0.04910501651465893) ? ( 568 ) : ( 569 ) ) ) ) ) ) : ( (Feature_3 <= 0.09245120361447334) ? ( (Feature_5 <= 0.008863447699695826) ? ( (Feature_0 <= 0.023545751813799143) ? ( (Feature_9 <= -0.0010776971466839314) ? ( 574 ) : ( 575 ) ) : ( 576 ) ) : ( (Feature_6 <= 0.002619627397507429) ? ( (Feature_3 <= 0.05113675631582737) ? ( 579 ) : ( 580 ) ) : ( 581 ) ) ) : ( (Feature_2 <= 0.041756683960556984) ? ( 583 ) : ( 584 ) ) ) ) : ( (Feature_3 <= 0.05285819061100483) ? ( (Feature_9 <= 0.03413021191954613) ? ( (Feature_9 <= 0.015490730525925756) ? ( (Feature_6 <= -0.0047436486929655075) ? ( (Feature_9 <= -0.007290857611224055) ? ( 590 ) : ( 591 ) ) : ( 592 ) ) : ( (Feature_1 <= 0.003019241616129875) ? ( 594 ) : ( 595 ) ) ) : ( (Feature_9 <= 0.04241442494094372) ? ( 597 ) : ( (Feature_7 <= 0.047777766827493906) ? ( 599 ) : ( 600 ) ) ) ) : ( (Feature_0 <= 0.07076875120401382) ? ( (Feature_3 <= 0.061465367674827576) ? ( (Feature_5 <= 0.03673366270959377) ? ( 604 ) : ( 605 ) ) : ( (Feature_8 <= 0.052116815000772476) ? ( 607 ) : ( (Feature_6 <= 0.002619626000523567) ? ( 609 ) : ( 610 ) ) ) ) : ( (Feature_4 <= 0.05966094136238098) ? ( (Feature_6 <= -0.026833473704755306) ? ( 613 ) : ( 614 ) ) : ( 615 ) ) ) ) ) ) : ( (Feature_5 <= 0.022485405206680298) ? ( (Feature_9 <= -0.011432964587584138) ? ( (Feature_2 <= 0.0649296436458826) ? ( 619 ) : ( 620 ) ) : ( (Feature_2 <= 0.1107366569340229) ? ( (Feature_7 <= 0.03855248726904392) ? ( (Feature_5 <= 0.01496984250843525) ? ( (Feature_8 <= 0.004960526945069432) ? ( 625 ) : ( (Feature_9 <= 0.07969338819384575) ? ( (Feature_0 <= 0.05805486813187599) ? ( (Feature_2 <= 0.10750322043895721) ? ( (Feature_9 <= 0.007206516107544303) ? ( 630 ) : ( (Feature_6 <= -0.05260493978857994) ? ( (Feature_0 <= 0.012648137053474784) ? ( 633 ) : ( 634 ) ) : ( (Feature_6 <= -0.045241665095090866) ? ( 636 ) : ( (Feature_3 <= 0.0855654627084732) ? ( 638 ) : ( 639 ) ) ) ) ) : ( 640 ) ) : ( 641 ) ) : ( (Feature_0 <= -6.574764847755432e-05) ? ( 643 ) : ( (Feature_6 <= -0.013947743456810713) ? ( 645 ) : ( 646 ) ) ) ) ) : ( (Feature_2 <= 0.06762417033314705) ? ( 648 ) : ( (Feature_0 <= 0.05442233011126518) ? ( 650 ) : ( 651 ) ) ) ) : ( (Feature_0 <= 0.047157252207398415) ? ( 653 ) : ( 654 ) ) ) : ( (Feature_5 <= -0.0011573033407330513) ? ( (Feature_4 <= -0.030463969334959984) ? ( 657 ) : ( 658 ) ) : ( 659 ) ) ) ) : ( (Feature_9 <= 0.05069863796234131) ? ( (Feature_6 <= -0.023151837289333344) ? ( (Feature_1 <= 0.003019241616129875) ? ( (Feature_7 <= 0.05608051922172308) ? ( 664 ) : ( 665 ) ) : ( (Feature_8 <= 0.051727402955293655) ? ( (Feature_8 <= 0.023627968970686197) ? ( 668 ) : ( 669 ) ) : ( 670 ) ) ) : ( (Feature_2 <= 0.06600745394825935) ? ( (Feature_4 <= 0.06654070876538754) ? ( 673 ) : ( 674 ) ) : ( (Feature_5 <= 0.0699273981153965) ? ( (Feature_5 <= 0.0491030253469944) ? ( 677 ) : ( 678 ) ) : ( 679 ) ) ) ) : ( (Feature_5 <= 0.11048012226819992) ? ( (Feature_4 <= 0.07686035335063934) ? ( (Feature_3 <= -0.013703975593671203) ? ( 683 ) : ( (Feature_3 <= 0.033922403352335095) ? ( 685 ) : ( 686 ) ) ) : ( 687 ) ) : ( (Feature_0 <= -0.04183993861079216) ? ( 689 ) : ( 690 ) ) ) ) ) );
	
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
	score_csv_file("outputs/ml2cpp-demo/datasets/diabetes.csv");
	return 0;
}
