/*
    ╭─────────────────────╮ ╭─────────────────────╮
    │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
╭───╯ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 ╰───╮
│ LA1 LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 RA1 │
╰───────────╮ LH2 LH1 LH0 │ │ RH0 RH1 RH2 ╭───────────╯
            ╰─────────────╯ ╰─────────────╯ 
*/
#pragma once

#define LT1 0
#define LT2 1
#define LT3 2
#define LT4 3
#define LT5 4
#define RT5 5
#define RT4 6
#define RT3 7
#define RT2 8
#define RT1 9

#define LM1 10
#define LM2 11
#define LM3 12
#define LM4 13
#define LM5 14
#define RM5 15
#define RM4 16
#define RM3 17
#define RM2 18
#define RM1 19

#define LB1 20
#define LB2 21
#define LB3 22
#define LB4 23
#define LB5 24
#define RB5 25
#define RB4 26
#define RB3 27
#define RB2 28
#define RB1 29

#define LH1 32
#define LH2 33
#define LH3 34
#define RH3 35
#define RH2 36
#define RH1 37

#define LA1 30
#define RA1 39

#define KEYS_LEFT LT1 LT2 LT3 LT4 LT5 LM1 LM2 LM3 LM4 LM5 LB1 LB2 LB3 LB4 LB5
#define KEYS_RIGHT RT1 RT2 RT3 RT4 RT5 RM1 RM2 RM3 RM4 RM5 RB1 RB2 RB3 RB4 RB5
#define KEYS_ETC LH1 LH2 LH3 RH1 RH2 RH3 LA_1 RA_1
