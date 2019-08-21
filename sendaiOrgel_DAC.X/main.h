/* 
 * File:   main.h
 * Author: MATHRAX
 *
 * Created on April 26, 2018, 10:05 AM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif
#define _MAX_CHORUS 3
#define _WAVE_F 32

    uint8_t evp0;
    uint32_t waveData0;
    uint8_t voice_on0;
    uint8_t env0;
    int8_t envelopeCount0;
    uint16_t envelopeValue0;

    uint8_t dat_d0;
    uint8_t dat_f0;
    uint8_t pos_d0;
    uint16_t pos_f0;
    uint8_t pos0;

    uint8_t evp1;
    uint32_t waveData1;
    uint8_t voice_on1;
    uint8_t env1;
    int8_t envelopeCount1;
    uint16_t envelopeValue1;

    uint8_t dat_d1;
    uint8_t dat_f1;
    uint8_t pos_d1;
    uint16_t pos_f1;
    uint8_t pos1;

    uint16_t pitch;
    uint16_t count;
    uint16_t ENV_DELAY;

    void randomSeed(long val);
    long random(long min, long max);

    const volatile uint16_t waveTable[256] = {
        //        0,
        //        2,
        //        10,
        //        22,
        //        40,
        //        62,
        //        89,
        //        122,
        //        159,
        //        201,
        //        247,
        //        299,
        //        355,
        //        417,
        //        483,
        //        553,
        //        628,
        //        708,
        //        793,
        //        881,
        //        975,
        //        1072,
        //        1174,
        //        1281,
        //        1391,
        //        1506,
        //        1624,
        //        1747,
        //        1874,
        //        2004,
        //        2138,
        //        2276,
        //        2417,
        //        2562,
        //        2710,
        //        2862,
        //        3017,
        //        3175,
        //        3336,
        //        3500,
        //        3667,
        //        3837,
        //        4009,
        //        4184,
        //        4361,
        //        4541,
        //        4722,
        //        4906,
        //        5092,
        //        5280,
        //        5469,
        //        5661,
        //        5853,
        //        6047,
        //        6243,
        //        6439,
        //        6637,
        //        6836,
        //        7035,
        //        7235,
        //        7436,
        //        7637,
        //        7839,
        //        8041,
        //        8242,
        //        8444,
        //        8646,
        //        8847,
        //        9048,
        //        9249,
        //        9449,
        //        9648,
        //        9846,
        //        10043,
        //        10239,
        //        10434,
        //        10627,
        //        10819,
        //        11010,
        //        11198,
        //        11385,
        //        11570,
        //        11753,
        //        11934,
        //        12112,
        //        12288,
        //        12462,
        //        12633,
        //        12801,
        //        12966,
        //        13129,
        //        13288,
        //        13445,
        //        13598,
        //        13748,
        //        13895,
        //        14038,
        //        14178,
        //        14313,
        //        14446,
        //        14574,
        //        14699,
        //        14819,
        //        14936,
        //        15049,
        //        15157,
        //        15261,
        //        15361,
        //        15456,
        //        15548,
        //        15634,
        //        15716,
        //        15794,
        //        15867,
        //        15935,
        //        15999,
        //        16057,
        //        16111,
        //        16161,
        //        16205,
        //        16245,
        //        16279,
        //        16309,
        //        16334,
        //        16354,
        //        16368,
        //        16378,
        //        16383,
        //        16383,
        //        16378,
        //        16368,
        //        16354,
        //        16334,
        //        16309,
        //        16279,
        //        16245,
        //        16205,
        //        16161,
        //        16111,
        //        16057,
        //        15999,
        //        15935,
        //        15867,
        //        15794,
        //        15716,
        //        15634,
        //        15548,
        //        15456,
        //        15361,
        //        15261,
        //        15157,
        //        15049,
        //        14936,
        //        14819,
        //        14699,
        //        14574,
        //        14446,
        //        14313,
        //        14178,
        //        14038,
        //        13895,
        //        13748,
        //        13598,
        //        13445,
        //        13288,
        //        13129,
        //        12966,
        //        12801,
        //        12633,
        //        12462,
        //        12288,
        //        12112,
        //        11934,
        //        11753,
        //        11570,
        //        11385,
        //        11198,
        //        11010,
        //        10819,
        //        10627,
        //        10434,
        //        10239,
        //        10043,
        //        9846,
        //        9648,
        //        9449,
        //        9249,
        //        9048,
        //        8847,
        //        8646,
        //        8444,
        //        8242,
        //        8041,
        //        7839,
        //        7637,
        //        7436,
        //        7235,
        //        7035,
        //        6836,
        //        6637,
        //        6439,
        //        6243,
        //        6047,
        //        5853,
        //        5661,
        //        5469,
        //        5280,
        //        5092,
        //        4906,
        //        4722,
        //        4541,
        //        4361,
        //        4184,
        //        4009,
        //        3837,
        //        3667,
        //        3500,
        //        3336,
        //        3175,
        //        3017,
        //        2862,
        //        2710,
        //        2562,
        //        2417,
        //        2276,
        //        2138,
        //        2004,
        //        1874,
        //        1747,
        //        1624,
        //        1506,
        //        1391,
        //        1281,
        //        1174,
        //        1072,
        //        975,
        //        881,
        //        793,
        //        708,
        //        628,
        //        553,
        //        483,
        //        417,
        //        355,
        //        299,
        //        247,
        //        201,
        //        159,
        //        122,
        //        89,
        //        62,
        //        40,
        //        22,
        //        10,
        //        2,
        //        0
        //    };
        //    const volatile uint16_t waveTable2[256] = {
        //        0,
        //        10,
        //        40,
        //        89,
        //        159,
        //        247,
        //        355,
        //        483,
        //        628,
        //        793,
        //        975,
        //        1174,
        //        1391,
        //        1624,
        //        1874,
        //        2138,
        //        2417,
        //        2710,
        //        3017,
        //        3336,
        //        3667,
        //        4009,
        //        4361,
        //        4722,
        //        5092,
        //        5469,
        //        5853,
        //        6243,
        //        6637,
        //        7035,
        //        7436,
        //        7839,
        //        8242,
        //        8646,
        //        9048,
        //        9449,
        //        9846,
        //        10239,
        //        10627,
        //        11010,
        //        11385,
        //        11753,
        //        12112,
        //        12462,
        //        12801,
        //        13129,
        //        13445,
        //        13748,
        //        14038,
        //        14313,
        //        14574,
        //        14819,
        //        15049,
        //        15261,
        //        15456,
        //        15634,
        //        15794,
        //        15935,
        //        16057,
        //        16161,
        //        16245,
        //        16309,
        //        16354,
        //        16378,
        //        16383,
        //        16368,
        //        16334,
        //        16279,
        //        16205,
        //        16111,
        //        15999,
        //        15867,
        //        15716,
        //        15548,
        //        15361,
        //        15157,
        //        14936,
        //        14699,
        //        14446,
        //        14178,
        //        13895,
        //        13598,
        //        13288,
        //        12966,
        //        12633,
        //        12288,
        //        11934,
        //        11570,
        //        11198,
        //        10819,
        //        10434,
        //        10043,
        //        9648,
        //        9249,
        //        8847,
        //        8444,
        //        8041,
        //        7637,
        //        7235,
        //        6836,
        //        6439,
        //        6047,
        //        5661,
        //        5280,
        //        4906,
        //        4541,
        //        4184,
        //        3837,
        //        3500,
        //        3175,
        //        2862,
        //        2562,
        //        2276,
        //        2004,
        //        1747,
        //        1506,
        //        1281,
        //        1072,
        //        881,
        //        708,
        //        553,
        //        417,
        //        299,
        //        201,
        //        122,
        //        62,
        //        22,
        //        0,
        //        0,
        //        10,
        //        40,
        //        89,
        //        159,
        //        247,
        //        355,
        //        483,
        //        628,
        //        793,
        //        975,
        //        1174,
        //        1391,
        //        1624,
        //        1874,
        //        2138,
        //        2417,
        //        2710,
        //        3017,
        //        3336,
        //        3667,
        //        4009,
        //        4361,
        //        4722,
        //        5092,
        //        5469,
        //        5853,
        //        6243,
        //        6637,
        //        7035,
        //        7436,
        //        7839,
        //        8242,
        //        8646,
        //        9048,
        //        9449,
        //        9846,
        //        10239,
        //        10627,
        //        11010,
        //        11385,
        //        11753,
        //        12112,
        //        12462,
        //        12801,
        //        13129,
        //        13445,
        //        13748,
        //        14038,
        //        14313,
        //        14574,
        //        14819,
        //        15049,
        //        15261,
        //        15456,
        //        15634,
        //        15794,
        //        15935,
        //        16057,
        //        16161,
        //        16245,
        //        16309,
        //        16354,
        //        16378,
        //        16383,
        //        16368,
        //        16334,
        //        16279,
        //        16205,
        //        16111,
        //        15999,
        //        15867,
        //        15716,
        //        15548,
        //        15361,
        //        15157,
        //        14936,
        //        14699,
        //        14446,
        //        14178,
        //        13895,
        //        13598,
        //        13288,
        //        12966,
        //        12633,
        //        12288,
        //        11934,
        //        11570,
        //        11198,
        //        10819,
        //        10434,
        //        10043,
        //        9648,
        //        9249,
        //        8847,
        //        8444,
        //        8041,
        //        7637,
        //        7235,
        //        6836,
        //        6439,
        //        6047,
        //        5661,
        //        5280,
        //        4906,
        //        4541,
        //        4184,
        //        3837,
        //        3500,
        //        3175,
        //        2862,
        //        2562,
        //        2276,
        //        2004,
        //        1747,
        //        1506,
        //        1281,
        //        1072,
        //        881,
        //        708,
        //        553,
        //        417,
        //        299,
        //        201,
        //        122,
        //        62,
        //        22,
        //        0,
        0,
        2,
        10,
        22,
        40,
        62,
        89,
        122,
        159,
        201,
        247,
        299,
        355,
        417,
        483,
        553,
        628,
        708,
        793,
        881,
        975,
        1072,
        1174,
        1281,
        1391,
        1506,
        1624,
        1747,
        1874,
        2004,
        2138,
        2276,
        2417,
        2562,
        2710,
        2862,
        3017,
        3175,
        3336,
        3500,
        3667,
        3837,
        4009,
        4184,
        4361,
        4541,
        4722,
        4906,
        5092,
        5280,
        5469,
        5661,
        5853,
        6047,
        6243,
        6439,
        6637,
        6836,
        7035,
        7235,
        7436,
        7637,
        7839,
        8041,
        8242,
        8444,
        8646,
        8847,
        9048,
        9249,
        9449,
        9648,
        9846,
        10043,
        10239,
        10434,
        10627,
        10819,
        11010,
        11198,
        11385,
        11570,
        11753,
        11934,
        12112,
        12288,
        12462,
        12633,
        12801,
        12966,
        13129,
        13288,
        13445,
        13598,
        13748,
        13895,
        14038,
        14178,
        14313,
        14446,
        14574,
        14699,
        14819,
        14936,
        15049,
        15157,
        15261,
        15361,
        15456,
        15548,
        15634,
        15716,
        15794,
        15867,
        15935,
        15999,
        16057,
        16111,
        16161,
        16205,
        16245,
        16279,
        16309,
        16334,
        16354,
        16368,
        16378,
        16383,
        16383,
        16378,
        16368,
        16354,
        16334,
        16309,
        16279,
        16245,
        16205,
        16161,
        16111,
        16057,
        15999,
        15935,
        15867,
        15794,
        15716,
        15634,
        15548,
        15456,
        15361,
        15261,
        15157,
        15049,
        14936,
        14819,
        14699,
        14574,
        14446,
        14313,
        14178,
        14038,
        13895,
        13748,
        13598,
        13445,
        13288,
        13129,
        12966,
        12801,
        12633,
        12462,
        12288,
        12112,
        11934,
        11753,
        11570,
        11385,
        11198,
        11010,
        10819,
        10627,
        10434,
        10239,
        10043,
        9846,
        9648,
        9449,
        9249,
        9048,
        8847,
        8646,
        8444,
        8242,
        8041,
        7839,
        7637,
        7436,
        7235,
        7035,
        6836,
        6637,
        6439,
        6243,
        6047,
        5853,
        5661,
        5469,
        5280,
        5092,
        4906,
        4722,
        4541,
        4361,
        4184,
        4009,
        3837,
        3667,
        3500,
        3336,
        3175,
        3017,
        2862,
        2710,
        2562,
        2417,
        2276,
        2138,
        2004,
        1874,
        1747,
        1624,
        1506,
        1391,
        1281,
        1174,
        1072,
        975,
        881,
        793,
        708,
        628,
        553,
        483,
        417,
        355,
        299,
        247,
        201,
        159,
        122,
        89,
        62,
        40,
        22,
        10,
        2,
        0,
    };


    const volatile uint8_t envelopeTable[256] = {
        0,
        6,
        12,
        18,
        24,
        29,
        34,
        38,
        43,
        47,
        51,
        55,
        58,
        62,
        65,
        68,
        71,
        74,
        77,
        79,
        81,
        84,
        86,
        88,
        90,
        92,
        94,
        95,
        97,
        98,
        100,
        101,
        102,
        104,
        105,
        106,
        107,
        108,
        109,
        110,
        111,
        111,
        112,
        113,
        114,
        114,
        115,
        116,
        116,
        117,
        117,
        118,
        118,
        119,
        119,
        119,
        120,
        120,
        121,
        121,
        121,
        121,
        122,
        122,
        122,
        122,
        123,
        123,
        123,
        123,
        123,
        124,
        124,
        124,
        124,
        124,
        124,
        125,
        125,
        125,
        125,
        125,
        125,
        125,
        125,
        125,
        125,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        126,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        127,
        128,
    };
    const volatile uint8_t envelopeTable2[256] = {
        0,
        2,
        3,
        5,
        6,
        8,
        9,
        10,
        12,
        13,
        14,
        16,
        17,
        18,
        19,
        20,
        21,
        22,
        23,
        24,
        25,
        26,
        27,
        28,
        29,
        30,
        31,
        32,
        33,
        33,
        34,
        35,
        36,
        36,
        37,
        38,
        38,
        39,
        40,
        40,
        41,
        41,
        42,
        42,
        43,
        44,
        44,
        45,
        45,
        45,
        46,
        46,
        47,
        47,
        48,
        48,
        48,
        49,
        49,
        50,
        50,
        50,
        51,
        51,
        51,
        52,
        52,
        52,
        53,
        53,
        53,
        53,
        54,
        54,
        54,
        54,
        55,
        55,
        55,
        55,
        56,
        56,
        56,
        56,
        56,
        57,
        57,
        57,
        57,
        57,
        57,
        58,
        58,
        58,
        58,
        58,
        58,
        59,
        59,
        59,
        59,
        59,
        59,
        59,
        59,
        60,
        60,
        60,
        60,
        60,
        60,
        60,
        60,
        60,
        60,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        61,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        62,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        63,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
        64,
    };
#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

