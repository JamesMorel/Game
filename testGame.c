/*
Date: 4-05-2016
Group Name: PROJECTGAME Test statements
Members: Handry Tjo, James Morel, Yida Hao, Shannon Li
Program: runs some simple assert statements FOR NOW...
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include "Game.h"

int main (int argc, char * argv[]){

    if (getDiceValue == 7){
        assert (STUDENT_THD = STUDENT_MTV);
        assert (STUDENT_THD = STUDENT_MMONEY);
    }
    if (getDiceValue != 7){
        assert (STUDENT_MTV = STUDENT_MTV);
        assert (STUDENT_MMONEY = STUDENT_MMONEY);
    }
    if ((getKPIpoints(Game g, int UNI_A)) >= 150){
        assert (UNI_A == TRUE); //wins the game
    } else {
        assert(UNI_A == FALSE); //the game continues
    }
    if ((getKPIpoints(Game g, int UNI_B)) >= 150){
        assert (UNI_B == TRUE); //wins the game
    } else {
        assert(UNI_B == FALSE); //the game continues
    }
    if ((getKPIpoints(Game g, int UNI_C)) >= 150){
        assert (UNI_C == TRUE); //wins the game
    } else {
        assert(UNI_C == FALSE); //the game continues
    }

    assert (diceScore <= 13);
    //game number is dummy var
    assert (getG08s ( 1, 1) <= 4);
    if (turn == -1) {
        assert (getGO8s (1, 1) == 2);
        assert (getGO8s (1, 2) == 2);
        assert (getGO8s (1, 3) == 2);
    }

    Assert (NUM_UNIS == 3);
    int checkReset (int thd, int bps, int bqn, int mj, int mtv, int mmoney){
    if (turn == -1) {
    int uni num = 1;
    int thd;
    int bps;
    int bqn;
    int mj;
    int mtv;
    int mmoney;
    while ( uni num < 4 ) {
        assert( thd == 0)
        assert(bps == 0)
        assert(bqn == 0)
        assert(mj == 0)
        assert(mtv == 0)
        assert(mmoney == 0)
        UNI_NUM++;
        }
    }

    return EXIT_SUCCESS;
}
