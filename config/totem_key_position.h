/*
    ╭─────────────────────╮ ╭─────────────────────╮
    │ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
╭───╯ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 ╰───╮
│ LA0 LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 RA0 │
╰───────────╮ LH2 LH1 LH0 │ │ RH0 RH1 RH2 ╭───────────╯
            ╰─────────────╯ ╰─────────────╯ 
*/
#pragma once

#define LT4 0
#define LT3 1
#define LT2 2
#define LT1 3
#define LT0 4
#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

#define LM4 10
#define LM3 11
#define LM2 12
#define LM1 13
#define LM0 14
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB4 20
#define LB3 21
#define LB2 22
#define LB1 23
#define LB0 24
#define RB0 25
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

#define LH2 32
#define LH1 33
#define LH0 34
#define RH0 35
#define RH1 36
#define RH2 37

#define LA0 30
#define RA0 39

#define KEYS_LEFT  LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_RIGHT RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define KEYS_ETC   LH0 LH1 LH2 RH0 RH1 RH2 LA_0 RA_0
