/*#include <avr/pgmspace.h>
const char wmmcof_0[] PROGMEM = "    2020.0            WMM-2020        12/10/2019"; 
const char wmmcof_1[] PROGMEM = "  1  0  -29404.5       0.0        6.7        0.0";
const char wmmcof_2[] PROGMEM = "  1  1   -1450.7    4652.9        7.7      -25.1";
const char wmmcof_3[] PROGMEM = "  2  0   -2500.0       0.0      -11.5        0.0";
const char wmmcof_4[] PROGMEM = "  2  1    2982.0   -2991.6       -7.1      -30.2";
const char wmmcof_5[] PROGMEM = "  2  2    1676.8    -734.8       -2.2      -23.9";
const char wmmcof_6[] PROGMEM = "  3  0    1363.9       0.0        2.8        0.0";
const char wmmcof_7[] PROGMEM = "  3  1   -2381.0     -82.2       -6.2        5.7";
const char wmmcof_8[] PROGMEM = "  3  2    1236.2     241.8        3.4       -1.0";
const char wmmcof_9[] PROGMEM = "  3  3     525.7    -542.9      -12.2        1.1";
const char wmmcof_10[] PROGMEM = "  4  0     903.1       0.0       -1.1        0.0";
const char wmmcof_11[] PROGMEM = "  4  1     809.4     282.0       -1.6        0.2";
const char wmmcof_12[] PROGMEM = "  4  2      86.2    -158.4       -6.0        6.9";
const char wmmcof_13[] PROGMEM = "  4  3    -309.4     199.8        5.4        3.7";
const char wmmcof_14[] PROGMEM = "  4  4      47.9    -350.1       -5.5       -5.6";
const char wmmcof_15[] PROGMEM = "  5  0    -234.4       0.0       -0.3        0.0";
const char wmmcof_16[] PROGMEM = "  5  1     363.1      47.7        0.6        0.1";
const char wmmcof_17[] PROGMEM = "  5  2     187.8     208.4       -0.7        2.5";
const char wmmcof_18[] PROGMEM = "  5  3    -140.7    -121.3        0.1       -0.9";
const char wmmcof_19[] PROGMEM = "  5  4    -151.2      32.2        1.2        3.0";
const char wmmcof_20[] PROGMEM = "  5  5      13.7      99.1        1.0        0.5";
const char wmmcof_21[] PROGMEM = "  6  0      65.9       0.0       -0.6        0.0";
const char wmmcof_22[] PROGMEM = "  6  1      65.6     -19.1       -0.4        0.1";
const char wmmcof_23[] PROGMEM = "  6  2      73.0      25.0        0.5       -1.8";
const char wmmcof_24[] PROGMEM = "  6  3    -121.5      52.7        1.4       -1.4";
const char wmmcof_25[] PROGMEM = "  6  4     -36.2     -64.4       -1.4        0.9";
const char wmmcof_26[] PROGMEM = "  6  5      13.5       9.0       -0.0        0.1";
const char wmmcof_27[] PROGMEM = "  6  6     -64.7      68.1        0.8        1.0";
const char wmmcof_28[] PROGMEM = "  7  0      80.6       0.0       -0.1        0.0";
const char wmmcof_29[] PROGMEM = "  7  1     -76.8     -51.4       -0.3        0.5";
const char wmmcof_30[] PROGMEM = "  7  2      -8.3     -16.8       -0.1        0.6";
const char wmmcof_31[] PROGMEM = "  7  3      56.5       2.3        0.7       -0.7";
const char wmmcof_32[] PROGMEM = "  7  4      15.8      23.5        0.2       -0.2";
const char wmmcof_33[] PROGMEM = "  7  5       6.4      -2.2       -0.5       -1.2";
const char wmmcof_34[] PROGMEM = "  7  6      -7.2     -27.2       -0.8        0.2";
const char wmmcof_35[] PROGMEM = "  7  7       9.8      -1.9        1.0        0.3";
const char wmmcof_36[] PROGMEM = "  8  0      23.6       0.0       -0.1        0.0";
const char wmmcof_37[] PROGMEM = "  8  1       9.8       8.4        0.1       -0.3";
const char wmmcof_38[] PROGMEM = "  8  2     -17.5     -15.3       -0.1        0.7";
const char wmmcof_39[] PROGMEM = "  8  3      -0.4      12.8        0.5       -0.2";
const char wmmcof_40[] PROGMEM = "  8  4     -21.1     -11.8       -0.1        0.5";
const char wmmcof_41[] PROGMEM = "  8  5      15.3      14.9        0.4       -0.3";
const char wmmcof_42[] PROGMEM = "  8  6      13.7       3.6        0.5       -0.5";
const char wmmcof_43[] PROGMEM = "  8  7     -16.5      -6.9        0.0        0.4";
const char wmmcof_44[] PROGMEM = "  8  8      -0.3       2.8        0.4        0.1";
const char wmmcof_45[] PROGMEM = "  9  0       5.0       0.0       -0.1        0.0";
const char wmmcof_46[] PROGMEM = "  9  1       8.2     -23.3       -0.2       -0.3";
const char wmmcof_47[] PROGMEM = "  9  2       2.9      11.1       -0.0        0.2";
const char wmmcof_48[] PROGMEM = "  9  3      -1.4       9.8        0.4       -0.4";
const char wmmcof_49[] PROGMEM = "  9  4      -1.1      -5.1       -0.3        0.4";
const char wmmcof_50[] PROGMEM = "  9  5     -13.3      -6.2       -0.0        0.1";
const char wmmcof_51[] PROGMEM = "  9  6       1.1       7.8        0.3       -0.0";
const char wmmcof_52[] PROGMEM = "  9  7       8.9       0.4       -0.0       -0.2";
const char wmmcof_53[] PROGMEM = "  9  8      -9.3      -1.5       -0.0        0.5";
const char wmmcof_54[] PROGMEM = "  9  9     -11.9       9.7       -0.4        0.2";
const char wmmcof_55[] PROGMEM = " 10  0      -1.9       0.0        0.0        0.0";
const char wmmcof_56[] PROGMEM = " 10  1      -6.2       3.4       -0.0       -0.0";
const char wmmcof_57[] PROGMEM = " 10  2      -0.1      -0.2       -0.0        0.1";
const char wmmcof_58[] PROGMEM = " 10  3       1.7       3.5        0.2       -0.3";
const char wmmcof_59[] PROGMEM = " 10  4      -0.9       4.8       -0.1        0.1";
const char wmmcof_60[] PROGMEM = " 10  5       0.6      -8.6       -0.2       -0.2";
const char wmmcof_61[] PROGMEM = " 10  6      -0.9      -0.1       -0.0        0.1";
const char wmmcof_62[] PROGMEM = " 10  7       1.9      -4.2       -0.1       -0.0";
const char wmmcof_63[] PROGMEM = " 10  8       1.4      -3.4       -0.2       -0.1";
const char wmmcof_64[] PROGMEM = " 10  9      -2.4      -0.1       -0.1        0.2";
const char wmmcof_65[] PROGMEM = " 10 10      -3.9      -8.8       -0.0       -0.0";
const char wmmcof_66[] PROGMEM = " 11  0       3.0       0.0       -0.0        0.0";
const char wmmcof_67[] PROGMEM = " 11  1      -1.4      -0.0       -0.1       -0.0";
const char wmmcof_68[] PROGMEM = " 11  2      -2.5       2.6       -0.0        0.1";
const char wmmcof_69[] PROGMEM = " 11  3       2.4      -0.5        0.0        0.0";
const char wmmcof_70[] PROGMEM = " 11  4      -0.9      -0.4       -0.0        0.2";
const char wmmcof_71[] PROGMEM = " 11  5       0.3       0.6       -0.1       -0.0";
const char wmmcof_72[] PROGMEM = " 11  6      -0.7      -0.2        0.0        0.0";
const char wmmcof_73[] PROGMEM = " 11  7      -0.1      -1.7       -0.0        0.1";
const char wmmcof_74[] PROGMEM = " 11  8       1.4      -1.6       -0.1       -0.0";
const char wmmcof_75[] PROGMEM = " 11  9      -0.6      -3.0       -0.1       -0.1";
const char wmmcof_76[] PROGMEM = " 11 10       0.2      -2.0       -0.1        0.0";
const char wmmcof_77[] PROGMEM = " 11 11       3.1      -2.6       -0.1       -0.0";
const char wmmcof_78[] PROGMEM = " 12  0      -2.0       0.0        0.0        0.0";
const char wmmcof_79[] PROGMEM = " 12  1      -0.1      -1.2       -0.0       -0.0";
const char wmmcof_80[] PROGMEM = " 12  2       0.5       0.5       -0.0        0.0";
const char wmmcof_81[] PROGMEM = " 12  3       1.3       1.3        0.0       -0.1";
const char wmmcof_82[] PROGMEM = " 12  4      -1.2      -1.8       -0.0        0.1";
const char wmmcof_83[] PROGMEM = " 12  5       0.7       0.1       -0.0       -0.0";
const char wmmcof_84[] PROGMEM = " 12  6       0.3       0.7        0.0        0.0";
const char wmmcof_85[] PROGMEM = " 12  7       0.5      -0.1       -0.0       -0.0";
const char wmmcof_86[] PROGMEM = " 12  8      -0.2       0.6        0.0        0.1";
const char wmmcof_87[] PROGMEM = " 12  9      -0.5       0.2       -0.0       -0.0";
const char wmmcof_88[] PROGMEM = " 12 10       0.1      -0.9       -0.0       -0.0";
const char wmmcof_89[] PROGMEM = " 12 11      -1.1      -0.0       -0.0        0.0";
const char wmmcof_90[] PROGMEM = " 12 12      -0.3       0.5       -0.1       -0.1";
const char wmmcof_91[] PROGMEM = "999999999999999999999999999999999999999999999999";
const char wmmcof_92[] PROGMEM = "999999999999999999999999999999999999999999999999";

const char *const wmmcof_table[] PROGMEM = {wmmcof_0, wmmcof_1, wmmcof_2, wmmcof_3, wmmcof_4, wmmcof_5,wmmcof_6,wmmcof_7,wmmcof_8,wmmcof_9,wmmcof_10,wmmcof_11,
wmmcof_12,wmmcof_13,wmmcof_14,wmmcof_15,wmmcof_16,wmmcof_17,wmmcof_18,wmmcof_19,wmmcof_20,wmmcof_21,wmmcof_22,wmmcof_23,wmmcof_24,wmmcof_25,wmmcof_26,wmmcof_27,
wmmcof_28,wmmcof_29,wmmcof_30,wmmcof_31,wmmcof_32,wmmcof_33,wmmcof_34,wmmcof_35,wmmcof_36,wmmcof_37,wmmcof_38,wmmcof_39,wmmcof_40,wmmcof_41,wmmcof_42,wmmcof_43,wmmcof_44,
wmmcof_45,wmmcof_46,wmmcof_47,wmmcof_48,wmmcof_49,wmmcof_50,wmmcof_51,wmmcof_52,wmmcof_53,wmmcof_54,wmmcof_55,wmmcof_56,wmmcof_57,wmmcof_58,wmmcof_59,wmmcof_60,
wmmcof_61,wmmcof_62,wmmcof_63,wmmcof_64,wmmcof_65,wmmcof_66,wmmcof_67,wmmcof_68,wmmcof_69,wmmcof_70,wmmcof_71,wmmcof_72,wmmcof_73,wmmcof_74,wmmcof_75,wmmcof_76,wmmcof_77,
wmmcof_78,wmmcof_79,wmmcof_80,wmmcof_81,wmmcof_82,wmmcof_83,wmmcof_84,wmmcof_85,wmmcof_86,wmmcof_87,wmmcof_88,wmmcof_89,wmmcof_90,wmmcof_91,
wmmcof_92}; */

const char wmmcof_0[] = "    2020.0            WMM-2020        12/10/2019"; 
const char wmmcof_1[] = "  1  0  -29404.5       0.0        6.7        0.0";
const char wmmcof_2[] = "  1  1   -1450.7    4652.9        7.7      -25.1";
const char wmmcof_3[] = "  2  0   -2500.0       0.0      -11.5        0.0";
const char wmmcof_4[] = "  2  1    2982.0   -2991.6       -7.1      -30.2";
const char wmmcof_5[] = "  2  2    1676.8    -734.8       -2.2      -23.9";
const char wmmcof_6[] = "  3  0    1363.9       0.0        2.8        0.0";
const char wmmcof_7[] = "  3  1   -2381.0     -82.2       -6.2        5.7";
const char wmmcof_8[] = "  3  2    1236.2     241.8        3.4       -1.0";
const char wmmcof_9[] = "  3  3     525.7    -542.9      -12.2        1.1";
const char wmmcof_10[] = "  4  0     903.1       0.0       -1.1        0.0";
const char wmmcof_11[] = "  4  1     809.4     282.0       -1.6        0.2";
const char wmmcof_12[] = "  4  2      86.2    -158.4       -6.0        6.9";
const char wmmcof_13[] = "  4  3    -309.4     199.8        5.4        3.7";
const char wmmcof_14[] = "  4  4      47.9    -350.1       -5.5       -5.6";
const char wmmcof_15[] = "  5  0    -234.4       0.0       -0.3        0.0";
const char wmmcof_16[] = "  5  1     363.1      47.7        0.6        0.1";
const char wmmcof_17[] = "  5  2     187.8     208.4       -0.7        2.5";
const char wmmcof_18[] = "  5  3    -140.7    -121.3        0.1       -0.9";
const char wmmcof_19[] = "  5  4    -151.2      32.2        1.2        3.0";
const char wmmcof_20[] = "  5  5      13.7      99.1        1.0        0.5";
const char wmmcof_21[] = "  6  0      65.9       0.0       -0.6        0.0";
const char wmmcof_22[] = "  6  1      65.6     -19.1       -0.4        0.1";
const char wmmcof_23[] = "  6  2      73.0      25.0        0.5       -1.8";
const char wmmcof_24[] = "  6  3    -121.5      52.7        1.4       -1.4";
const char wmmcof_25[] = "  6  4     -36.2     -64.4       -1.4        0.9";
const char wmmcof_26[] = "  6  5      13.5       9.0       -0.0        0.1";
const char wmmcof_27[] = "  6  6     -64.7      68.1        0.8        1.0";
const char wmmcof_28[] = "  7  0      80.6       0.0       -0.1        0.0";
const char wmmcof_29[] = "  7  1     -76.8     -51.4       -0.3        0.5";
const char wmmcof_30[] = "  7  2      -8.3     -16.8       -0.1        0.6";
const char wmmcof_31[] = "  7  3      56.5       2.3        0.7       -0.7";
const char wmmcof_32[] = "  7  4      15.8      23.5        0.2       -0.2";
const char wmmcof_33[] = "  7  5       6.4      -2.2       -0.5       -1.2";
const char wmmcof_34[] = "  7  6      -7.2     -27.2       -0.8        0.2";
const char wmmcof_35[] = "  7  7       9.8      -1.9        1.0        0.3";
const char wmmcof_36[] = "  8  0      23.6       0.0       -0.1        0.0";
const char wmmcof_37[] = "  8  1       9.8       8.4        0.1       -0.3";
const char wmmcof_38[] = "  8  2     -17.5     -15.3       -0.1        0.7";
const char wmmcof_39[] = "  8  3      -0.4      12.8        0.5       -0.2";
const char wmmcof_40[] = "  8  4     -21.1     -11.8       -0.1        0.5";
const char wmmcof_41[] = "  8  5      15.3      14.9        0.4       -0.3";
const char wmmcof_42[] = "  8  6      13.7       3.6        0.5       -0.5";
const char wmmcof_43[] = "  8  7     -16.5      -6.9        0.0        0.4";
const char wmmcof_44[] = "  8  8      -0.3       2.8        0.4        0.1";
const char wmmcof_45[] = "  9  0       5.0       0.0       -0.1        0.0";
const char wmmcof_46[] = "  9  1       8.2     -23.3       -0.2       -0.3";
const char wmmcof_47[] = "  9  2       2.9      11.1       -0.0        0.2";
const char wmmcof_48[] = "  9  3      -1.4       9.8        0.4       -0.4";
const char wmmcof_49[] = "  9  4      -1.1      -5.1       -0.3        0.4";
const char wmmcof_50[] = "  9  5     -13.3      -6.2       -0.0        0.1";
const char wmmcof_51[] = "  9  6       1.1       7.8        0.3       -0.0";
const char wmmcof_52[] = "  9  7       8.9       0.4       -0.0       -0.2";
const char wmmcof_53[] = "  9  8      -9.3      -1.5       -0.0        0.5";
const char wmmcof_54[] = "  9  9     -11.9       9.7       -0.4        0.2";
const char wmmcof_55[] = " 10  0      -1.9       0.0        0.0        0.0";
const char wmmcof_56[] = " 10  1      -6.2       3.4       -0.0       -0.0";
const char wmmcof_57[] = " 10  2      -0.1      -0.2       -0.0        0.1";
const char wmmcof_58[] = " 10  3       1.7       3.5        0.2       -0.3";
const char wmmcof_59[] = " 10  4      -0.9       4.8       -0.1        0.1";
const char wmmcof_60[] = " 10  5       0.6      -8.6       -0.2       -0.2";
const char wmmcof_61[] = " 10  6      -0.9      -0.1       -0.0        0.1";
const char wmmcof_62[] = " 10  7       1.9      -4.2       -0.1       -0.0";
const char wmmcof_63[] = " 10  8       1.4      -3.4       -0.2       -0.1";
const char wmmcof_64[] = " 10  9      -2.4      -0.1       -0.1        0.2";
const char wmmcof_65[] = " 10 10      -3.9      -8.8       -0.0       -0.0";
const char wmmcof_66[] = " 11  0       3.0       0.0       -0.0        0.0";
const char wmmcof_67[] = " 11  1      -1.4      -0.0       -0.1       -0.0";
const char wmmcof_68[] = " 11  2      -2.5       2.6       -0.0        0.1";
const char wmmcof_69[] = " 11  3       2.4      -0.5        0.0        0.0";
const char wmmcof_70[] = " 11  4      -0.9      -0.4       -0.0        0.2";
const char wmmcof_71[] = " 11  5       0.3       0.6       -0.1       -0.0";
const char wmmcof_72[] = " 11  6      -0.7      -0.2        0.0        0.0";
const char wmmcof_73[] = " 11  7      -0.1      -1.7       -0.0        0.1";
const char wmmcof_74[] = " 11  8       1.4      -1.6       -0.1       -0.0";
const char wmmcof_75[] = " 11  9      -0.6      -3.0       -0.1       -0.1";
const char wmmcof_76[] = " 11 10       0.2      -2.0       -0.1        0.0";
const char wmmcof_77[] = " 11 11       3.1      -2.6       -0.1       -0.0";
const char wmmcof_78[] = " 12  0      -2.0       0.0        0.0        0.0";
const char wmmcof_79[] = " 12  1      -0.1      -1.2       -0.0       -0.0";
const char wmmcof_80[] = " 12  2       0.5       0.5       -0.0        0.0";
const char wmmcof_81[] = " 12  3       1.3       1.3        0.0       -0.1";
const char wmmcof_82[] = " 12  4      -1.2      -1.8       -0.0        0.1";
const char wmmcof_83[] = " 12  5       0.7       0.1       -0.0       -0.0";
const char wmmcof_84[] = " 12  6       0.3       0.7        0.0        0.0";
const char wmmcof_85[] = " 12  7       0.5      -0.1       -0.0       -0.0";
const char wmmcof_86[] = " 12  8      -0.2       0.6        0.0        0.1";
const char wmmcof_87[] = " 12  9      -0.5       0.2       -0.0       -0.0";
const char wmmcof_88[] = " 12 10       0.1      -0.9       -0.0       -0.0";
const char wmmcof_89[] = " 12 11      -1.1      -0.0       -0.0        0.0";
const char wmmcof_90[] = " 12 12      -0.3       0.5       -0.1       -0.1";
const char wmmcof_91[] = "999999999999999999999999999999999999999999999999";
const char wmmcof_92[] = "999999999999999999999999999999999999999999999999";

const char *const wmmcof_table[] = {wmmcof_0, wmmcof_1, wmmcof_2, wmmcof_3, wmmcof_4, wmmcof_5,wmmcof_6,wmmcof_7,wmmcof_8,wmmcof_9,wmmcof_10,wmmcof_11,
wmmcof_12,wmmcof_13,wmmcof_14,wmmcof_15,wmmcof_16,wmmcof_17,wmmcof_18,wmmcof_19,wmmcof_20,wmmcof_21,wmmcof_22,wmmcof_23,wmmcof_24,wmmcof_25,wmmcof_26,wmmcof_27,
wmmcof_28,wmmcof_29,wmmcof_30,wmmcof_31,wmmcof_32,wmmcof_33,wmmcof_34,wmmcof_35,wmmcof_36,wmmcof_37,wmmcof_38,wmmcof_39,wmmcof_40,wmmcof_41,wmmcof_42,wmmcof_43,wmmcof_44,
wmmcof_45,wmmcof_46,wmmcof_47,wmmcof_48,wmmcof_49,wmmcof_50,wmmcof_51,wmmcof_52,wmmcof_53,wmmcof_54,wmmcof_55,wmmcof_56,wmmcof_57,wmmcof_58,wmmcof_59,wmmcof_60,
wmmcof_61,wmmcof_62,wmmcof_63,wmmcof_64,wmmcof_65,wmmcof_66,wmmcof_67,wmmcof_68,wmmcof_69,wmmcof_70,wmmcof_71,wmmcof_72,wmmcof_73,wmmcof_74,wmmcof_75,wmmcof_76,wmmcof_77,
wmmcof_78,wmmcof_79,wmmcof_80,wmmcof_81,wmmcof_82,wmmcof_83,wmmcof_84,wmmcof_85,wmmcof_86,wmmcof_87,wmmcof_88,wmmcof_89,wmmcof_90,wmmcof_91,
wmmcof_92}; 

// make sure this is large enough for the largest string it must hold
#include <Arduino.h>
#define radians(deg) ((deg)*DEG_TO_RAD)
#define degrees(rad) ((rad)*RAD_TO_DEG)

#include <TinyGPS++.h>
#include <LiquidCrystal.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

TinyGPSPlus gps;
static const uint32_t GPSBaud=9600;

const int rs = 7, en = 8, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);




static double lat1,lon1,alt1,year,month,day,passingdays;
static unsigned long sat;
const double lat2=37.80557269963443; //kyungpodae beach
const double lon2=128.9079043908416;
const double R = 6371.0; //km
double bearing;
double distance;

static double glat,glon,alt;
static double dec, dip, ti, gv;
static double times;

Adafruit_BMP280 bmp; // I2C  if this is definded we use i2c communication

float bmp_temperature; 
float bmp_pressure;   
float bmp_altitude;

#include "geomag.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NaN log(-1.0)

static char *wmm_lines[93];
char buffer[80];

static int maxdeg,n,m;
static double epochlowlim,epochuplim,epoch,gnm,hnm,dgnm,dhnm;
char decd[7], dipd[7],modl[20];

static int maxord,i,icomp,j,D1,D2,D3,D4;
static double c[13][13],cd[13][13],tc[13][13],dp[13][13],snorm[169],
    sp[13],cp[13],fn[13],fm[13],pp[13],k[13][13],pi,dtr,a,b,re,
    a2,b2,c2,a4,b4,c4,flnmj,
    dt,rlon,rlat,srlon,srlat,crlon,crlat,srlat2,
    crlat2,xq,xq1,xq2,ct,st,r2,r,d,ca,sa,aor,ar,br,bt,bp,bpp,
    par,temp1,temp2,parp,bx,by,bz,bh;
static char model[20], c_new[5];
static double *p = snorm;

String str;

static char* goodbye = "\n -- End of WMM Point Calculation Program -- \n\n";

void setup() 
{
  Serial.begin(38400);
  Serial1.begin(GPSBaud);
  lcd.begin(16, 2);
  bmp.begin(0x76);

  for (int i = 0; i < 93; i++)
  {
         
     wmm_lines[i] = (char*)wmmcof_table[i];
     strcpy_P(buffer,wmm_lines[i]);  
     Serial.println(buffer);
     delay(100);  
  }
   strcpy_P(buffer,wmm_lines[0]);
   str=buffer;

   String epochlowlim0 = str.substring(4,10);
   String modl=str.substring(22,30);
   String epoch0=str.substring(4,10);
   
   epochlowlim=epochlowlim0.toDouble();
   epoch=epoch0.toDouble();

   geomag_init();
}

void loop() 
{
   gps_WmmDeclination_Passingday(); 
}
void gps_WmmDeclination_Passingday(void)
{
   while(Serial1.available()>0)  
   {
     char data=Serial1.read();
     gps.encode(data);
     if(gps.location.isUpdated() && gps.altitude.isUpdated())
     {
        lat1=gps.location.lat();
        lon1=gps.location.lng();
        alt1=gps.altitude.meters();
        sat=gps.satellites.value();
        year=gps.date.year();
        month=gps.date.month();
        day=gps.date.day();
   
        passingdays=passing_day();

        Serial.println(); 
        Serial.print("Passing_day= ");Serial.println(passingdays); 
        Serial.println(); 

        alt = alt1; // 0.8 km above WGS84 ellipsoid
        glat = lat1;
        glon = lon1;
        times = year + (passingdays / 365.0); // day 335 of year 2020
        Serial.println();
        Serial.print("time: ");Serial.println(times);
          
        geomag_calc(alt, glat, glon, times, &dec, &dip, &ti, &gv);
        Serial.println();
        Serial.print("Declination: ");Serial.println(dec);
   //   Serial.print("dip: ");Serial.println(dip);
   //   Serial.print("ti: ");Serial.println(ti);
   //   Serial.print("gv: ");Serial.println(gv);   

        bmp_temperature = bmp.readTemperature();  // get temperature
        bmp_pressure = bmp.readPressure();     // get pressure
        bmp_altitude = bmp.readAltitude(1026.3); // reference standard 1013.25

        two_point_bearing();
      
        Serial.print("Latitude= ");Serial.println(lat1,6);
        Serial.print("Longitude= ");Serial.println(lon1,6);
        Serial.print("Altitude in meters= ");Serial.println(alt1);
        Serial.print("Number of satellites in use = ");Serial.println(sat);
        Serial.print("Raw date DDMMYY = ");Serial.println(gps.date.value());
        Serial.print("Year = ");Serial.println(year);
        Serial.print("Month = ");Serial.println(month);
        Serial.print("Day = ");Serial.println(day); 

        Serial.print("Distance of kyungpodae beach = ");Serial.print(distance);Serial.println("km");
        Serial.print("Bearing="); Serial.println(bearing);
      

      
        lcd.setCursor(0, 0);
        lcd.print(lat1,4);lcd.print(",");lcd.print(lon1,4);
        lcd.setCursor(0, 1);
        lcd.print("Dec =  ");lcd.print(dec);
   }
 }
}

double passing_day(void)
{
    int int_year=(int)year;
    int int_month=(int)month;
    int int_day=(int)day;

    
    if(year==2021)
    {
     
      
      const int dayofmonth2021[12] = {31,28,31,30,31,30,31,31,30,31,30,31};    
     
      
      if(int_month== 1) 
      {
       
        double passing_days=0;
        int sumofdays=0;
        sumofdays = int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month== 2) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays += dayofmonth2021[i];
        }
        sumofdays += int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==3) 
      {
        
        double passing_days=0;
        int sumofdays=0;  
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==4) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==5) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==6) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==7) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==8) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==9) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==10) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==11) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==12) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2021[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
   }
    if(year==2022)
    {
     
      const int dayofmonth2022[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
           
            
      if(int_month== 1) 
      {
       
        double passing_days=0;
        int sumofdays=0;
        sumofdays = int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month== 2) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays += dayofmonth2022[i];
        }
        sumofdays += int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==3) 
      {
        
        double passing_days=0;
        int sumofdays=0;  
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==4) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==5) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==6) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==7) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==8) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==9) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==10) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==11) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==12) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2022[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
   }
    if(year==2023)
    {
     
      const int dayofmonth2023[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
           
      if(int_month== 1) 
      {
       
        double passing_days=0;
        int sumofdays=0;
        sumofdays = int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month== 2) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays += dayofmonth2023[i];
        }
        sumofdays += int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==3) 
      {
        
        double passing_days=0;
        int sumofdays=0;  
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==4) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==5) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==6) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==7) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==8) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==9) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==10) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==11) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==12) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2023[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
   }
    if(year==2024)
    {
     
      const int dayofmonth2024[12] = {31,29,31,30,31,30,31,31,30,31,30,31};;
           
      if(int_month== 1) 
      {
       
        double passing_days=0;
        int sumofdays=0;
        sumofdays = int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month== 2) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays += dayofmonth2024[i];
        }
        sumofdays += int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==3) 
      {
        
        double passing_days=0;
        int sumofdays=0;  
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==4) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==5) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==6) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==7) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==8) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==9) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==10) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==11) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==12) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2024[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
   }
    if(year==2025)
    {
     
      const int dayofmonth2025[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
           
      if(int_month== 1) 
      {
       
        double passing_days=0;
        int sumofdays=0;
        sumofdays = int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month== 2) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays += dayofmonth2025[i];
        }
        sumofdays += int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==3) 
      {
        
        double passing_days=0;
        int sumofdays=0;  
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==4) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==5) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==6) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==7) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==8) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==9) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==10) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==11) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
      if(int_month==12) 
      {
        double passing_days=0;
        int sumofdays=0; 
        for(int i=0;i<(int_month-1);i++)
        {
           sumofdays +=dayofmonth2025[i];
        }
        sumofdays +=int_day;
        passing_days=(double)sumofdays;
        return passing_days;
      }
   }
}   

void two_point_bearing(void)
{
    
    double teta1 = radians(lat1);
    double teta2 = radians(lat2);
    double delta1 = radians(lat2-lat1);
    double delta2 = radians(lon2-lon1);

    //==================Heading Formula Calculation================//

    double y = sin(delta2) * cos(teta2);
    double x = cos(teta1)*sin(teta2) - sin(teta1)*cos(teta2)*cos(delta2);
    double brng = atan2(y,x);
    brng = degrees(brng);// radians to degrees
    brng = ( ((int)brng + 360) % 360 );
    bearing=brng;
 //=====================distance calculation==============//
   double a = sin(delta1 / 2) * sin(delta1 / 2) + cos(teta1) * cos(teta2) * sin(delta2 / 2) * sin(delta2 / 2);
   double c = 2 * atan2(sqrt(a), sqrt(1 - a));

   distance = R * c;
}   

int geomag_init()
{

    maxdeg = 12;
    return geomag_E0_init(&maxdeg);
}


int geomag_calc(double alt, double glat, double glon, double times, double *dec, double *dip, double *ti, double *gv)
{
    return E0000(1,NULL,alt,glat,glon,times,dec,dip,ti,gv);
}


static int geomag_E0_init(int *maxdeg)
{
    return E0000(0,maxdeg,0.0,0.0,0.0,0.0,NULL,NULL,NULL,NULL);
}


static int E0000(int IENTRY, int *maxdeg, double alt, double glat, double glon, double times, double *dec, double *dip, double *ti, double *gv)
{
    

    switch(IENTRY)
    {
      case 0: goto INIT; 
      case 1: goto CALC;
    }

INIT:

   
    maxord = *maxdeg;
    sp[0] = 0.0;
    cp[0] = *p = pp[0] = 1.0;
    dp[0][0] = 0.0;
    a = 6378.137;
    b = 6356.7523142;
    re = 6371.2;
    a2 = a*a;
    b2 = b*b;
    c2 = a2-b2;
    a4 = a2*a2;
    b4 = b2*b2;
    c4 = a4 - b4;

    
    c[0][0] = 0.0;
    cd[0][0] = 0.0;

    for(int i=1;i<93;i++)
    {
      
       strcpy_P(buffer,wmm_lines[i]);
       str=buffer;

       String n0=str.substring(1,3);
       String m0=str.substring(4,6);
       String gnm0=str.substring(8,16);
       String hnm0=str.substring(19,26);
       String dgnm0=str.substring(32,37);
       String dhnm0=str.substring(43,48);
  
       n=n0.toInt();
       m=m0.toInt();
       gnm=gnm0.toDouble();
       hnm=hnm0.toDouble();
       dgnm=dgnm0.toDouble();
       dhnm=dhnm0.toDouble();
   
       if (n > maxord) goto S4;
       if (m > n || m < 0.0) 
       {
          Serial.println(i);
          Serial.println(F("Corrupt record in model wmm_string in geomag."));
           return -1;
       }

       if (m <= n)
       {
          c[m][n] = gnm;
          cd[m][n] = dgnm;
          if (m != 0)
          {
            c[n][m-1] = hnm;
            cd[n][m-1] = dhnm;
          }
       }
   } 
S4:    
    *snorm = 1.0;
    fm[0] = 0.0;
    for (n=1; n<=maxord; n++)
    {
        *(snorm+n) = *(snorm+n-1)*(double)(2*n-1)/(double)n;
        j = 2;
        for (m=0,D1=1,D2=(n-m+D1)/D1; D2>0; D2--,m+=D1)
        {
            k[m][n] = (double)(((n-1)*(n-1))-(m*m))/(double)((2*n-1)*(2*n-3));
            if (m > 0)
            {
                flnmj = (double)((n-m+1)*j)/(double)(n+m);
                *(snorm+n+m*13) = *(snorm+n+(m-1)*13)*sqrt(flnmj);
                j = 1;
                c[n][m-1] = *(snorm+n+m*13)*c[n][m-1];
                cd[n][m-1] = *(snorm+n+m*13)*cd[n][m-1];
            }
            c[m][n] = *(snorm+n+m*13)*c[m][n];
            cd[m][n] = *(snorm+n+m*13)*cd[m][n];
        }
        fn[n] = (double)(n+1);
        fm[n] = (double)n;
    }
    k[1][1] = 0.0;

    return 0;

  

CALC:

    dt = times - epoch;

    pi = 3.14159265359;
    dtr = pi/180.0;
    rlon = glon*dtr;
    rlat = glat*dtr;
    srlon = sin(rlon);
    srlat = sin(rlat);
    crlon = cos(rlon);
    crlat = cos(rlat);
    srlat2 = srlat*srlat;
    crlat2 = crlat*crlat;
    sp[1] = srlon;
    cp[1] = crlon;

    
    xq = sqrt(a2-c2*srlat2);
    xq1 = alt*xq;
    xq2 = ((xq1+a2)/(xq1+b2))*((xq1+a2)/(xq1+b2));
    ct = srlat/sqrt(xq2*crlat2+srlat2);
    st = sqrt(1.0-(ct*ct));
    r2 = (alt*alt)+2.0*xq1+(a4-c4*srlat2)/(xq*xq);
    r = sqrt(r2);
    d = sqrt(a2*crlat2+b2*srlat2);
    ca = (alt+d)/r;
    sa = c2*crlat*srlat/(r*d);

    for (m=2; m<=maxord; m++)
    {
        sp[m] = sp[1]*cp[m-1]+cp[1]*sp[m-1];
        cp[m] = cp[1]*cp[m-1]-sp[1]*sp[m-1];
    }

    aor = re/r;
    ar = aor*aor;
    br = bt = bp = bpp = 0.0;
    for (n=1; n<=maxord; n++)
    {
        ar = ar*aor;
        for (m=0,D3=1,D4=(n+m+D3)/D3; D4>0; D4--,m+=D3)
        {
            
            if (n == m)
            {
                *(p+n+m*13) = st**(p+n-1+(m-1)*13);
                dp[m][n] = st*dp[m-1][n-1]+ct**(p+n-1+(m-1)*13);
                goto S50;
            }
            if (n == 1 && m == 0)
            {
                *(p+n+m*13) = ct**(p+n-1+m*13);
                dp[m][n] = ct*dp[m][n-1]-st**(p+n-1+m*13);
                goto S50;
            }
            if (n > 1 && n != m)
            {
                if (m > n-2) *(p+n-2+m*13) = 0.0;
                if (m > n-2) dp[m][n-2] = 0.0;
                *(p+n+m*13) = ct**(p+n-1+m*13)-k[m][n]**(p+n-2+m*13);
                dp[m][n] = ct*dp[m][n-1] - st**(p+n-1+m*13)-k[m][n]*dp[m][n-2];
            }
S50:
            
            tc[m][n] = c[m][n]+dt*cd[m][n];
            if (m != 0) tc[n][m-1] = c[n][m-1]+dt*cd[n][m-1];
           
            par = ar**(p+n+m*13);
            if (m == 0)
            {
                temp1 = tc[m][n]*cp[m];
                temp2 = tc[m][n]*sp[m];
            }
            else
            {
                temp1 = tc[m][n]*cp[m]+tc[n][m-1]*sp[m];
                temp2 = tc[m][n]*sp[m]-tc[n][m-1]*cp[m];
            }
            bt = bt-ar*temp1*dp[m][n];
            bp += (fm[m]*temp2*par);
            br += (fn[n]*temp1*par);
           
            if (st == 0.0 && m == 1)
            {
                if (n == 1) pp[n] = pp[n-1];
                else pp[n] = ct*pp[n-1]-k[m][n]*pp[n-2];
                parp = ar*pp[n];
                bpp += (fm[m]*temp2*parp);
            }
        }
    }
    if (st == 0.0) bp = bpp;
    else bp /= st;
   
    bx = -bt*ca-br*sa;
    by = bp;
    bz = bt*sa-br*ca;
   
    bh = sqrt((bx*bx)+(by*by));
    *ti = sqrt((bh*bh)+(bz*bz));
    *dec = atan2(by,bx)/dtr;
    *dip = atan2(bz,bh)/dtr;
   
    *gv = -999.0;
    if (fabs(glat) >= 55.)
    {
        if (glat > 0.0 && glon >= 0.0) *gv = *dec-glon;
        if (glat > 0.0 && glon < 0.0) *gv = *dec+fabs(glon);
        if (glat < 0.0 && glon >= 0.0) *gv = *dec+glon;
        if (glat < 0.0 && glon < 0.0) *gv = *dec-fabs(glon);
        if (*gv > +180.0) *gv -= 360.0;
        if (*gv < -180.0) *gv += 360.0;
    }
    return 0;
}



/* void geomag_interactive() 
{

    int warn_H, warn_H_strong, warn_P;
    double warn_H_val, warn_H_strong_val;
    char answer;
    double x1,x2,y1,y2,z1,z2,h1,h2;
    double altm, dlat, dlon;
    double ati, adec, adip;
    double alt, time, dec, dip, ti, gv;
    double time1, dec1, dip1, ti1;
    double dec2, dip2, ti2;
    double ax,ay,az,ah;
    double rTd=0.017453292;
    double epochrange = 5.0;
    double dmin, imin, ddeg, ideg;

    char ans = geomag_introduction(epochlowlim);
    if ((ans == 'y') || (ans == 'Y'))

S1:

    maxdeg = 12;
    warn_H = 0;
    warn_H_val = 99999.0;
    warn_H_strong = 0;
    warn_H_strong_val = 99999.0;
    warn_P = 0;

    Serial.println(F("ENTER LATITUDE IN DECIMAL DEGREES "));
    Serial.println(F("North latitude positive, South latitude negative "));
    Serial.println(F("i.e. 25.5 for 25 degrees 30 minutes north."));
    scanf("%lf%*[^\n]", &dlat);
    getchar();

    Serial.println(F("ENTER LONGITUDE IN DECIMAL DEGREES"));
    Serial.println(F("East longitude positive, West negative ")); 
    Serial.println(F("i.e.- 100.0 for 100.0 degrees west."));
    scanf("%lf%*[^\n]", &dlon);
    getchar();

    Serial.println(F("ENTER ALTITUDE IN KILOMETERS ABOVE WGS84 ELLIPSOID"));
    scanf("%lf%*[^\n]", &altm);
    getchar();
    alt = altm;

    epochuplim = epochlowlim + epochrange;
    Serial.print(F("ENTER TIME IN DECIMAL YEAR "));Serial.print(epochlowlim);Serial.println(epochuplim);
    scanf("%lf%*[^\n]",&time);
    getchar();

    double dt = time - epoch;
    Serial.println(time);
    Serial.println(epoch);
    if (time < 0.0 || (dt < 0.0 || dt > 5.0))
    {      
        Serial.println(F("WARNING - TIME EXTENDS BEYOND MODEL 5-YEAR LIFE SPAN"));
        Serial.println(F("CONTACT NGDC FOR PRODUCT UPDATES:"));
        Serial.println(F("         National Geophysical Data Center"));
        Serial.println(F("         NOAA EGC/2"));
        Serial.println(F("         325 Broadway"));
        Serial.println(F("         Boulder, CO 80303 USA"));
        Serial.println(F("         Attn: Manoj Nair or Stefan Maus"));
        Serial.println(F("         Phone:  (303) 497-4642 or -6522"));
        Serial.println(F("         Email:  Manoj.C.Nair@Noaa.Gov"));
        Serial.println(F("         or"));
        Serial.println(F("         Stefan.Maus@noaa.gov"));
        Serial.println(F("         Web: http://www.ngdc.noaa.gov/geomag/WMM/"));
        Serial.print(F(" EPOCH  = "));Serial.println(epoch);
        Serial.print(F(" TIME   = "));Serial.println(time);
        Serial.println(F("Do you wish to continue? (y or n) "));

        scanf("%c%*[^\n]",&answer);
        getchar();
        if ((answer == 'n') || (answer == 'N'))
            goto MORE;
    }

    geomag_calc(alt,dlat,dlon,time,&dec,&dip,&ti,&gv);
    time1 = time;
    dec1 = dec;
    dip1 = dip;
    ti1 = ti;
    time = time1 + 1.0;

    geomag_calc(alt,dlat,dlon,time,&dec,&dip,&ti,&gv);
    dec2 = dec;
    dip2 = dip;
    ti2 = ti;

   

    x1=ti1*(cos((dec1*rTd))*cos((dip1*rTd)));
    x2=ti2*(cos((dec2*rTd))*cos((dip2*rTd)));
    y1=ti1*(cos((dip1*rTd))*sin((dec1*rTd)));
    y2=ti2*(cos((dip2*rTd))*sin((dec2*rTd)));
    z1=ti1*(sin((dip1*rTd)));
    z2=ti2*(sin((dip2*rTd)));
    h1=ti1*(cos((dip1*rTd)));
    h2=ti2*(cos((dip2*rTd)));

   
    ati = ti2 - ti1;

    
    adip = (dip2 - dip1) * 60.;
    adec = (dec2 - dec1) * 60.;


   
    ax = x2-x1;
    ay = y2-y1;
    az = z2-z1;
    ah = h2-h1;


    if (dec1 < 0.0)
    { 
        strcpy (decd,"(WEST)");
    }
    else 
    { 
        strcpy(decd,"(EAST)");
    }

    if (dip1 < 0.0) 
    {
        strcpy(dipd,"(UP)  ");
    }
    else 
    {
        strcpy(dipd,"(DOWN)");
    }

    

    if (h1 < 100.0) 
    {
        dec1 = NaN;
        adec = NaN;
        strcpy(decd,"(VOID)");
        
    }

    if (h1 < 1000.0) 
    {
        warn_H = 0;
        warn_H_strong = 1;
        warn_H_strong_val = h1;
    }
    else if (h1 < 5000.0 && !warn_H_strong) 
    {
        warn_H = 1;
        warn_H_val = h1;
    }


   
    if (my_isnan(dec1)) ddeg = dec1; else ddeg=(int)dec1;
    dmin=(dec1-(double)ddeg)*60;
    if (dec1 > 0 && dmin >= 59.5)
    {
        dmin -= 60.0;
        ddeg++;
    }
    if (dec1 < 0 && dmin <= -59.5)
    {
        dmin += 60.0;
        ddeg--;
    }
    if(ddeg!=0) dmin=fabs(dmin);

    if (my_isnan(dip1)) ideg = dip1; else ideg=(int)dip1;
    imin=(dip1-(double)ideg)*60;
    if (dip1 > 0 && imin >= 59.5)
    {
        imin -= 60.0;
        ideg++;
    }
    if (dip1 < 0 && imin <= -59.5)
    {
        imin += 60.0;
        ideg--;
    }
    if(ideg!=0) imin=fabs(imin);
    {
        Serial.println(F("Results For "));
    }
    if (dlat < 0)
    {
      Serial.print(F("LATITUDE: "));Serial.println(-dlat);
    }
    else
    {
      Serial.print(F("LATITUDE: "));Serial.println(dlat);
    }
    if (dlon < 0)
    {
      Serial.print(F("LONGITUDE: "));Serial.println(-dlon);
    }
    else
    {
       Serial.print(F("LONGITUDE:  "));Serial.println(dlon);
       Serial.print(F("ALTITUDE:   KM ABOVE WGS84 ELLIPSOID  "));Serial.println(altm);
       Serial.print(F("DATE:  "));Serial.println(time1);
       Serial.println(F(" Main Field     Secular Change"));
       Serial.print("F      =   ");Serial.println(ti1);
       Serial.print("dF  = ");Serial.println(ati);
    }
    if (my_isnan(h1))
    {
      Serial.println(F(" H      =    NaN         dH  = NaN"));
    }
    else
    {
      Serial.print("H      =   ");Serial.print(h1);
      Serial.print(F("dH  = "));Serial.println(ah);
    }
    if (my_isnan(x1))
    {
      Serial.println(F(" X      =    NaN         dX  = NaN"));
    }
    else
    {
      Serial.print(x1);Serial.println(ax);
    }
    if (my_isnan(y1))
    {
      Serial.println(F(" Y      =    NaN           dY  = NaN"));
    }
    else
    {
      Serial.print(y1);Serial.println(ay);
      Serial.print(z1);Serial.println(az);
    }
    if (my_isnan(dec1))
    {
      Serial.print(F(" D      =    NaN          dD  = NaN"));
    }
    else
    {
      Serial.print(ddeg);Serial.print(dmin);Serial.print(decd);Serial.println(adec); 
      Serial.print(ideg);Serial.print(imin);Serial.print(dipd);Serial.println(adip); 
    }
    if (warn_H)
    {
        Serial.print(F("Warning: The horizontal field strength at this location is only ="));Serial.print(warn_H_val);Serial.println(F("nT"));
        Serial.println(F("         Compass readings have large uncertainties in areas where H is"));
        Serial.println(F("         smaller than 5000 nT"));
    } 
    if (warn_H_strong)
    {
        Serial.print(F("Warning: The horizontal field strength at this location is only = "));Serial.print(warn_H_strong_val);Serial.println(F("nT"));
        Serial.println(F("         Compass readings have VERY LARGE uncertainties in areas where H is"));
        Serial.print(F("         smaller than 1000 nT"));
    }
    if (warn_P)
    {
        Serial.print(F("Warning: Location is at geographic pole where X, Y, and Decl are undefined\n"));
    } 

MORE:

    Serial.println(F("DO YOU NEED MORE POINT DATA? (y or n) "));
    scanf("%c%*[^\n]", &answer);
    getchar();

    if ((answer =='y')||(answer == 'Y')) goto S1;
    else 
    {
        Serial.print(goodbye);
    }

} */

/* static int my_isnan(double d)
{
    return (d != d);            
} */

/* static char geomag_introduction(double epochlowlim)
{
    char help;
    static char ans;

    Serial.print(F("Welcome to the World Magnetic Model (WMM) C-Program"));Serial.println(epochlowlim);
    Serial.println(F("            --- Version 3.0, January 2010 ---"));
    Serial.println(F("This program estimates the strength and direction of "));
    Serial.println(F("Earth's main magnetic field for a given point/area."));
    Serial.println(F("Enter h for help and contact information or c to continue."));
    Serial.println();
    scanf("%c%*[^\n]",&help);
    getchar();

    if ((help == 'h') || (help == 'H'))
    {
        Serial.println(F("Help information "));

        Serial.print(F("The World Magnetic Model (WMM): "));Serial.println(epochlowlim);
        Serial.println(F("The WMM is a model of Earth's main magnetic field."));
        Serial.println(F("is recomputed every five (5) years, in years divisible by "));
        Serial.println(F("five (i.e. 2010, 2015).  See the contact information below"));
        Serial.println(F("to obtain more information on the WMM and associated software."));
        Serial.println();
        Serial.println(F("Input required is the location in geodetic latitude and"));
        Serial.println(F("longitude (positive for northern latitudes and eastern "));
        Serial.println(F("longitudes), geodetic altitude in meters, and the date of ")); 
        Serial.println(F("interest in years."));

        Serial.println(F("The program computes the estimated magnetic Declination"));
        Serial.println(F("(D) which is sometimes called MAGVAR, Inclination (I), Total"));
        Serial.println(F("Intensity (F or TI), Horizontal Intensity (H or HI), Vertical"));
        Serial.println(F("Intensity (Z), and Grid Variation (GV). Declination and Grid"));
        Serial.println(F("Variation are measured in units of degrees and are considered")); 
        Serial.println(F("positive when east or north.  Inclination is measured in units"));
        Serial.println(F("of degrees and is considered positive when pointing down (into"));
        Serial.println(F("the Earth).  The WMM is reference to the WGS-84 ellipsoid and"));
        Serial.println(F("is valid for 5 years after the base epoch."));

        Serial.println(F("It is very important to note that a  degree and  order 12 model,"));
        Serial.println(F("such as WMM, describes only the long  wavelength spatial magnetic "));
        Serial.println(F("fluctuations due to  Earth's core.  Not included in the WMM series"));
        Serial.println(F("models are intermediate and short wavelength spatial fluctuations "));
        Serial.println(F("that originate in Earth's mantle and crust. Consequently, isolated"));
        Serial.println(F("angular errors at various  positions on the surface (primarily over"));
        Serial.println(F("land, incontinental margins and  over oceanic seamounts, ridges and"));
        Serial.println(F("trenches) of several degrees may be expected.  Also not included in"));
        Serial.println(F("the model are temporal fluctuations of magnetospheric and ionospheric"));
        Serial.println(F("origin. On the days during and immediately following magnetic storms,"));
        Serial.println(F("temporal fluctuations can cause substantial deviations of the geomagnetic"));
        Serial.println(F("field  from model  values.  If the required  declination accuracy  is"));
        Serial.println(F("more stringent than the WMM  series of models provide, the user is"));
        Serial.println(F("advised to request special (regional or local) surveys be performed"));
        Serial.println(F("and models prepared. Please make requests of this nature to the"));
        Serial.println(F("National Geospatial-Intelligence Agency (NGA) at the address below."));

        Serial.println(F("Contact Information"));

        Serial.println(F("Software and Model Support"));
        Serial.println(F("National Geophysical Data Center"));
        Serial.println(F("NOAA EGC/2"));
        Serial.println(F("325 Broadway"));
        Serial.println(F("Boulder, CO 80303 USA"));
        Serial.println(F("Attn: Susan McLean or Stefan Maus"));
        Serial.println(F("Phone:  (303) 497-6478 or -6522"));
        Serial.println(F("Email:  Susan.McLean@noaa.gov or Stefan.Maus@noaa.gov "));

        Serial.println(F("Continue with program? (y or n) "));
        scanf("%c%*[^\n]", &ans);
        getchar();
    }
    else
    {
        ans = 'y';      
    }

    return(ans);
} */
