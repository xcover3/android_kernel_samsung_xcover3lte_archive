#ifndef __ULC1_THERMAL_H_
#define __ULC1_THERMAL_H_

static const int thermalIDDQ1p05TempLimits_ulc1[2/*number of prod pts*/][20/*number of temps*/][16/*number of profiles*/][4/*number of cores*/] = { \
/*1.5GHz*/	{{{205,171,147,128}, {-1,-1,-1,-1}, {205,171,147,128}, {177,148,126,111}, {177,148,126,111}, {161,134,115,100}, {139,115, 99, 86}, {139,115, 99, 86}, {119, 99, 85, 74}, {119, 99, 85, 74}, { 98, 82, 70, 61}, { 98, 82, 70, 61}, { 89, 74, 63, 55}, { 89, 74, 63, 55}, { 89, 74, 63, 55}, { 89, 74, 63, 55}}, /*81*/ \
			 {{217,180,155,135}, {-1,-1,-1,-1}, {217,180,155,135}, {187,156,133,117}, {187,156,133,117}, {169,141,121,106}, {146,122,104, 91}, {146,122,104, 91}, {126,105, 90, 79}, {126,105, 90, 79}, {103, 86, 74, 64}, {103, 86, 74, 64}, { 94, 78, 67, 58}, { 94, 78, 67, 58}, { 94, 78, 67, 58}, { 94, 78, 67, 58}}, /*79*/ \
			 {{228,190,163,142}, {-1,-1,-1,-1}, {228,190,163,142}, {197,164,140,123}, {197,164,140,123}, {178,149,127,111}, {154,128,110, 96}, {154,128,110, 96}, {133,111, 95, 83}, {133,111, 95, 83}, {109, 91, 78, 68}, {109, 91, 78, 68}, { 99, 82, 70, 62}, { 99, 82, 70, 62}, { 99, 82, 70, 62}, { 99, 82, 70, 62}}, /*77*/ \
			 {{241,200,172,150}, {-1,-1,-1,-1}, {241,200,172,150}, {207,173,148,129}, {207,173,148,129}, {188,157,134,117}, {162,135,116,101}, {162,135,116,101}, {140,117,100, 87}, {140,117,100, 87}, {115, 96, 82, 72}, {115, 96, 82, 72}, {104, 87, 74, 65}, {104, 87, 74, 65}, {104, 87, 74, 65}, {104, 87, 74, 65}}, /*75*/ \
			 {{254,211,181,158}, {-1,-1,-1,-1}, {254,211,181,158}, {219,182,156,137}, {219,182,156,137}, {198,165,141,124}, {171,142,122,107}, {171,142,122,107}, {147,123,105, 92}, {147,123,105, 92}, {121,101, 86, 75}, {121,101, 86, 75}, {110, 91, 78, 68}, {110, 91, 78, 68}, {110, 91, 78, 68}, {110, 91, 78, 68}}, /*73*/ \
			 {{267,223,191,167}, {-1,-1,-1,-1}, {267,223,191,167}, {231,192,165,144}, {231,192,165,144}, {209,174,149,130}, {180,150,129,112}, {180,150,129,112}, {155,129,111, 97}, {155,129,111, 97}, {128,106, 91, 80}, {128,106, 91, 80}, {116, 96, 82, 72}, {116, 96, 82, 72}, {116, 96, 82, 72}, {116, 96, 82, 72}}, /*71*/ \
			 {{282,235,201,176}, {-1,-1,-1,-1}, {282,235,201,176}, {243,202,173,152}, {243,202,173,152}, {220,183,157,137}, {190,158,136,119}, {190,158,136,119}, {164,136,117,102}, {164,136,117,102}, {135,112, 96, 84}, {135,112, 96, 84}, {122,101, 87, 76}, {122,101, 87, 76}, {122,101, 87, 76}, {122,101, 87, 76}}, /*69*/ \
			 {{297,247,212,185}, {-1,-1,-1,-1}, {297,247,212,185}, {256,213,183,160}, {256,213,183,160}, {232,193,166,145}, {200,167,143,125}, {200,167,143,125}, {173,144,123,108}, {173,144,123,108}, {142,118,101, 88}, {142,118,101, 88}, {128,107, 92, 80}, {128,107, 92, 80}, {128,107, 92, 80}, {128,107, 92, 80}}, /*67*/ \
			 {{313,261,223,195}, {-1,-1,-1,-1}, {313,261,223,195}, {270,225,193,168}, {270,225,193,168}, {245,204,175,153}, {211,176,151,132}, {211,176,151,132}, {182,152,130,114}, {182,152,130,114}, {149,124,107, 93}, {149,124,107, 93}, {135,113, 97, 84}, {135,113, 97, 84}, {135,113, 97, 84}, {135,113, 97, 84}}, /*65*/ \
			 {{330,275,235,206}, {-1,-1,-1,-1}, {330,275,235,206}, {284,237,203,178}, {284,237,203,178}, {258,215,184,161}, {222,185,159,139}, {222,185,159,139}, {192,160,137,120}, {192,160,137,120}, {158,131,112, 98}, {158,131,112, 98}, {143,119,102, 89}, {143,119,102, 89}, {143,119,102, 89}, {143,119,102, 89}}, /*63*/ \
			 {{348,290,248,217}, {-1,-1,-1,-1}, {348,290,248,217}, {300,250,214,187}, {300,250,214,187}, {272,226,194,170}, {234,195,167,146}, {234,195,167,146}, {202,168,144,126}, {202,168,144,126}, {166,138,118,104}, {166,138,118,104}, {150,125,107, 94}, {150,125,107, 94}, {150,125,107, 94}, {150,125,107, 94}}, /*61*/ \
			 {{366,305,261,229}, {-1,-1,-1,-1}, {366,305,261,229}, {316,263,226,197}, {316,263,226,197}, {286,239,204,179}, {247,206,176,154}, {247,206,176,154}, {213,178,152,133}, {213,178,152,133}, {175,146,125,109}, {175,146,125,109}, {159,132,113, 99}, {159,132,113, 99}, {159,132,113, 99}, {159,132,113, 99}}, /*59*/ \
			 {{386,322,276,241}, {-1,-1,-1,-1}, {386,322,276,241}, {333,277,238,208}, {333,277,238,208}, {302,251,215,188}, {260,217,186,163}, {260,217,186,163}, {225,187,160,140}, {225,187,160,140}, {184,154,132,115}, {184,154,132,115}, {167,139,119,104}, {167,139,119,104}, {167,139,119,104}, {167,139,119,104}}, /*57*/ \
			 {{407,339,290,254}, {-1,-1,-1,-1}, {407,339,290,254}, {351,292,251,219}, {351,292,251,219}, {318,265,227,199}, {274,229,196,171}, {274,229,196,171}, {237,197,169,148}, {237,197,169,148}, {194,162,139,121}, {194,162,139,121}, {176,147,126,110}, {176,147,126,110}, {176,147,126,110}, {176,147,126,110}}, /*55*/ \
			 {{429,357,306,268}, {-1,-1,-1,-1}, {429,357,306,268}, {370,308,264,231}, {370,308,264,231}, {335,279,239,209}, {289,241,206,181}, {289,241,206,181}, {250,208,178,156}, {250,208,178,156}, {205,171,146,128}, {205,171,146,128}, {186,155,133,116}, {186,155,133,116}, {186,155,133,116}, {186,155,133,116}}, /*53*/ \
			 {{452,377,323,282}, {-1,-1,-1,-1}, {452,377,323,282}, {390,325,278,244}, {390,325,278,244}, {353,294,252,221}, {305,254,218,190}, {305,254,218,190}, {263,219,188,164}, {263,219,188,164}, {216,180,154,135}, {216,180,154,135}, {196,163,140,122}, {196,163,140,122}, {196,163,140,122}, {196,163,140,122}}, /*51*/ \
			 {{476,397,340,297}, {-1,-1,-1,-1}, {476,397,340,297}, {411,342,293,257}, {411,342,293,257}, {372,310,266,233}, {321,268,229,201}, {321,268,229,201}, {277,231,198,173}, {277,231,198,173}, {228,190,163,142}, {228,190,163,142}, {206,172,147,129}, {206,172,147,129}, {206,172,147,129}, {206,172,147,129}}, /*49*/ \
			 {{502,418,358,314}, {-1,-1,-1,-1}, {502,418,358,314}, {433,361,309,271}, {433,361,309,271}, {393,327,280,245}, {339,282,242,211}, {339,282,242,211}, {292,243,209,182}, {292,243,209,182}, {240,200,171,150}, {240,200,171,150}, {217,181,155,136}, {217,181,155,136}, {217,181,155,136}, {217,181,155,136}}, /*47*/ \
			 {{529,441,378,330}, {-1,-1,-1,-1}, {529,441,378,330}, {456,380,326,285}, {456,380,326,285}, {414,345,295,258}, {357,297,255,223}, {357,297,255,223}, {308,257,220,192}, {308,257,220,192}, {253,211,181,158}, {253,211,181,158}, {229,191,164,143}, {229,191,164,143}, {229,191,164,143}, {229,191,164,143}}, /*45*/ \
			 {{558,465,398,348}, {-1,-1,-1,-1}, {558,465,398,348}, {481,401,343,300}, {481,401,343,300}, {436,363,311,272}, {376,313,269,235}, {376,313,269,235}, {325,270,232,203}, {325,270,232,203}, {267,222,190,166}, {267,222,190,166}, {242,201,172,151}, {242,201,172,151}, {242,201,172,151}, {242,201,172,151}}},/*43*/

/*1.25GHz*/	{{{238,198,170,149}, {-1,-1,-1,-1}, {238,198,170,149}, {238,198,170,149}, {216,180,154,135}, {216,180,154,135}, {196,163,140,122}, {196,163,140,122}, {177,148,126,111}, {177,148,126,111}, {161,134,115,100}, {161,134,115,100}, {146,121,104, 91}, {146,121,104, 91}, {132,110, 94, 82}, {132,110, 94, 82}}, /*80*/ \
			 {{251,209,179,157}, {-1,-1,-1,-1}, {251,209,179,157}, {251,209,179,157}, {227,189,162,142}, {227,189,162,142}, {206,172,147,129}, {206,172,147,129}, {187,156,133,117}, {187,156,133,117}, {169,141,121,106}, {169,141,121,106}, {153,128,109, 96}, {153,128,109, 96}, {139,116, 99, 87}, {139,116, 99, 87}}, /*78*/ \
			 {{265,220,189,165}, {-1,-1,-1,-1}, {265,220,189,165}, {265,220,189,165}, {240,200,171,150}, {240,200,171,150}, {217,181,155,136}, {217,181,155,136}, {197,164,140,123}, {197,164,140,123}, {178,149,127,111}, {178,149,127,111}, {162,135,115,101}, {162,135,115,101}, {146,122,104, 91}, {146,122,104, 91}}, /*76*/ \
			 {{279,232,199,174}, {-1,-1,-1,-1}, {279,232,199,174}, {279,232,199,174}, {253,210,180,158}, {253,210,180,158}, {229,191,163,143}, {229,191,163,143}, {207,173,148,129}, {207,173,148,129}, {188,157,134,117}, {188,157,134,117}, {170,142,122,106}, {170,142,122,106}, {154,129,110, 96}, {154,129,110, 96}}, /*74*/ \
			 {{294,245,210,183}, {-1,-1,-1,-1}, {294,245,210,183}, {294,245,210,183}, {266,222,190,166}, {266,222,190,166}, {241,201,172,151}, {241,201,172,151}, {219,182,156,137}, {219,182,156,137}, {198,165,141,124}, {198,165,141,124}, {180,150,128,112}, {180,150,128,112}, {163,136,116,102}, {163,136,116,102}}, /*72*/ \
			 {{310,258,221,193}, {-1,-1,-1,-1}, {310,258,221,193}, {310,258,221,193}, {281,234,200,175}, {281,234,200,175}, {254,212,182,159}, {254,212,182,159}, {231,192,165,144}, {231,192,165,144}, {209,174,149,130}, {209,174,149,130}, {189,158,135,118}, {189,158,135,118}, {172,143,122,107}, {172,143,122,107}}, /*70*/ \
			 {{326,272,233,204}, {-1,-1,-1,-1}, {326,272,233,204}, {326,272,233,204}, {296,246,211,185}, {296,246,211,185}, {268,223,191,167}, {268,223,191,167}, {243,202,173,152}, {243,202,173,152}, {220,183,157,137}, {220,183,157,137}, {200,166,142,125}, {200,166,142,125}, {181,151,129,113}, {181,151,129,113}}, /*68*/ \
			 {{344,287,246,215}, {-1,-1,-1,-1}, {344,287,246,215}, {344,287,246,215}, {312,260,223,195}, {312,260,223,195}, {283,235,202,176}, {283,235,202,176}, {256,213,183,160}, {256,213,183,160}, {232,193,166,145}, {232,193,166,145}, {210,175,150,131}, {210,175,150,131}, {191,159,136,119}, {191,159,136,119}}, /*66*/ \
			 {{363,302,259,226}, {-1,-1,-1,-1}, {363,302,259,226}, {363,302,259,226}, {329,274,235,205}, {329,274,235,205}, {298,248,213,186}, {298,248,213,186}, {270,225,193,168}, {270,225,193,168}, {245,204,175,153}, {245,204,175,153}, {222,185,158,138}, {222,185,158,138}, {201,167,143,125}, {201,167,143,125}}, /*64*/ \
			 {{382,318,273,239}, {-1,-1,-1,-1}, {382,318,273,239}, {382,318,273,239}, {346,289,247,216}, {346,289,247,216}, {314,261,224,196}, {314,261,224,196}, {284,237,203,178}, {284,237,203,178}, {258,215,184,161}, {258,215,184,161}, {234,195,167,146}, {234,195,167,146}, {212,176,151,132}, {212,176,151,132}}, /*62*/ \
			 {{403,336,288,252}, {-1,-1,-1,-1}, {403,336,288,252}, {403,336,288,252}, {365,304,261,228}, {365,304,261,228}, {331,276,236,207}, {331,276,236,207}, {300,250,214,187}, {300,250,214,187}, {272,226,194,170}, {272,226,194,170}, {246,205,176,154}, {246,205,176,154}, {223,186,159,139}, {223,186,159,139}}, /*60*/ \
			 {{424,354,303,265}, {-1,-1,-1,-1}, {424,354,303,265}, {424,354,303,265}, {385,321,275,240}, {385,321,275,240}, {349,290,249,218}, {349,290,249,218}, {316,263,226,197}, {316,263,226,197}, {286,239,204,179}, {286,239,204,179}, {260,216,185,162}, {260,216,185,162}, {235,196,168,147}, {235,196,168,147}}, /*58*/ \
			 {{447,373,319,279}, {-1,-1,-1,-1}, {447,373,319,279}, {447,373,319,279}, {405,338,289,253}, {405,338,289,253}, {367,306,262,229}, {367,306,262,229}, {333,277,238,208}, {333,277,238,208}, {302,251,215,188}, {302,251,215,188}, {274,228,195,171}, {274,228,195,171}, {248,207,177,155}, {248,207,177,155}}, /*56*/ \
			 {{472,393,337,295}, {-1,-1,-1,-1}, {472,393,337,295}, {472,393,337,295}, {427,356,305,267}, {427,356,305,267}, {387,323,277,242}, {387,323,277,242}, {351,292,251,219}, {351,292,251,219}, {318,265,227,199}, {318,265,227,199}, {288,240,206,180}, {288,240,206,180}, {261,218,186,163}, {261,218,186,163}}, /*54*/ \
			 {{497,414,355,310}, {-1,-1,-1,-1}, {497,414,355,310}, {497,414,355,310}, {450,375,322,281}, {450,375,322,281}, {408,340,291,255}, {408,340,291,255}, {370,308,264,231}, {370,308,264,231}, {335,279,239,209}, {335,279,239,209}, {304,253,217,190}, {304,253,217,190}, {275,229,197,172}, {275,229,197,172}}, /*52*/ \
			 {{524,436,374,327}, {-1,-1,-1,-1}, {524,436,374,327}, {524,436,374,327}, {475,395,339,296}, {475,395,339,296}, {430,358,307,269}, {430,358,307,269}, {390,325,278,244}, {390,325,278,244}, {353,294,252,221}, {353,294,252,221}, {320,267,229,200}, {320,267,229,200}, {290,242,207,181}, {290,242,207,181}}, /*50*/ \
			 {{552,460,394,345}, {-1,-1,-1,-1}, {552,460,394,345}, {552,460,394,345}, {500,417,357,312}, {500,417,357,312}, {453,378,324,283}, {453,378,324,283}, {411,342,293,257}, {411,342,293,257}, {372,310,266,233}, {372,310,266,233}, {338,281,241,211}, {338,281,241,211}, {306,255,218,191}, {306,255,218,191}}, /*48*/ \
			 {{582,485,415,363}, {-1,-1,-1,-1}, {582,485,415,363}, {582,485,415,363}, {527,439,376,329}, {527,439,376,329}, {478,398,341,298}, {478,398,341,298}, {433,361,309,271}, {433,361,309,271}, {393,327,280,245}, {393,327,280,245}, {356,296,254,222}, {356,296,254,222}, {322,269,230,201}, {322,269,230,201}}, /*46*/ \
			 {{613,511,438,383}, {-1,-1,-1,-1}, {613,511,438,383}, {613,511,438,383}, {556,463,397,347}, {556,463,397,347}, {504,420,360,315}, {504,420,360,315}, {456,380,326,285}, {456,380,326,285}, {414,345,295,258}, {414,345,295,258}, {375,312,268,234}, {375,312,268,234}, {340,283,243,212}, {340,283,243,212}}, /*44*/ \
			 {{646,538,461,404}, {-1,-1,-1,-1}, {646,538,461,404}, {646,538,461,404}, {586,488,418,366}, {586,488,418,366}, {531,442,379,332}, {531,442,379,332}, {481,401,343,300}, {481,401,343,300}, {436,363,311,272}, {436,363,311,272}, {395,329,282,247}, {395,329,282,247}, {358,298,256,224}, {358,298,256,224}}}/*42*/};


#define NUM_PROFILES_ULC1 16
#define NUM_ACPP_ULC1 7

// uiProfile - read from fuses (and converted to profile number)
// uiSIDD1p05	=  (uiBlock7_BLOCK7_RESERVED_2 >>  8) & 0x3ff;

static void getThermalLimitsPerPP_ulc1(unsigned int uiProfile, unsigned int uiIddq1p05, int **ttemp_table)
{
	int iTempIndex,iNumCores, iIddqLimit, iACPP, tmp = 0;
	int iProdPtTempLimit[2/*num product points used*/][4/*num cores*/] = {{0}};
	char strp[2][10] = {"1.5G", "1.2G"};

	// use (NUM_ACPP_ulc1-1) - ACPP# to index to the correct product point table
	//iterate through ACPPs that we care about for thermal
	for (iACPP=6; iACPP>=5; iACPP--)
	{
		// iterate through num cores
		for (iNumCores=4; iNumCores>0; iNumCores--)
		{
			// iterate through temperatures to find the iddq that is greater than our uiSIDD1_05 value for the given number of cores (j)
			iTempIndex = 0;
			iIddqLimit = thermalIDDQ1p05TempLimits_ulc1[NUM_ACPP_ULC1-1-iACPP][iTempIndex][uiProfile][iNumCores-1];
			iTempIndex++;
			if (iIddqLimit == -1)
			{
				pr_warn("WARNING: SVC and Thermal specs do not support profile%d for ACPP%d(%s)", uiProfile, iACPP, strp[NUM_ACPP_ULC1 - 1 - iACPP]);
				iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][iNumCores-1]=-1;
				continue;
			}
			while ((uiIddq1p05 > iIddqLimit) && (iTempIndex<20))
			{
				iIddqLimit = thermalIDDQ1p05TempLimits_ulc1[NUM_ACPP_ULC1-1-iACPP][iTempIndex][uiProfile][iNumCores-1];
				iTempIndex++;
			}
			//now build table of thermal thresholds per core
			//first handle the case where a safe temperature could not be found in the table (this should never happen)
			if(20==iTempIndex && uiIddq1p05 > iIddqLimit)
			{
				pr_warn("WARNING: Could not find a safe temperature for %dcore ACPP%d(%s) and therefore it is not supported on this part", iNumCores, iACPP, strp[NUM_ACPP_ULC1 - 1 - iACPP]);
				iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][iNumCores-1]=-1;
			}
			else
			{
				if(iACPP==6)	iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][iNumCores-1]=80-(iTempIndex*2);		/*1.5GHz*/
				else			iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][iNumCores-1]=81-(iTempIndex*2);		/*1.25Ghz*/
			}
		}
	}
	pr_info("Thermal limits based on the profile (profile%d) and Iddq@1.05V (%d) for this part\n", uiProfile, uiIddq1p05);
	pr_info("        4core 3core 2core 1core\n");
	for (iACPP=6; iACPP>=5; iACPP--) {
		tmp = iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][3];
		iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][3] = iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][0];
		iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][0] = tmp;
		tmp = iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][2];
		iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][2] = iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][1];
		iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][1] = tmp;
	}
	for (iACPP=6; iACPP>=5; iACPP--) {
		pr_info("%s%6d%6d%6d%6d\n", strp[NUM_ACPP_ULC1 - 1 - iACPP], iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][0],
				iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][1],
				iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][2],
				iProdPtTempLimit[NUM_ACPP_ULC1-1-iACPP][3]);
	}
	memcpy(ttemp_table, iProdPtTempLimit, sizeof(iProdPtTempLimit));
}
#endif