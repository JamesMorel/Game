#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

#define NUM_VERTEX 70

typedef struct _vertex {
	int position;
} Vertex;

typedef struct _game * Game;

typedef struct _game {
   int currentTurn;
   int playerKPIs[4];
   int numGO8s;
   Vertex campus[NUM_VERTEX];
} game;

typedef char path[PATH_LIMIT];

/*
typedef struct _action {
   int actionCode;
   path destination;
   int disciplineFrom;
   int disciplineTo;
} action;
*/

int main (int argc, char * argv[]){

Game newGame (int discipline[], int dice[]){
   return 0;
}

void disposeGame (Game g){
}

void makeAction (Game g, action a){
}

void throwDice (Game g, int diceScore){
}

int getDiscipline (Game g, int regionID){
   return 0;
}

int getDiceValue (Game g, int regionID){
//   int diceVal = 0;
//   diceVal = dice[regionID];
 // Need pointers for this
//   return diceVal;
   return 0;
}

int getMostARCs (Game g){
   return 0;
}

int getMostPublications (Game g){
   return 0;
}

int getTurnNumber (Game g){
   return 0;
}

int getWhoseTurn (Game g){
   return 0;
}

int getCampus(Game g, path pathToVertex){
   return 0;
}

int getARC(Game g, path pathToEdge){
   return 0;
}

int isLegalAction (Game g, action a){
   return 0;
}

// PLAYER SPECIFIC STATS

int getKPIpoints (Game g, int player){
   return 0;
}

int getARCs (Game g, int player){
   int numARCS_a = 0;
   int numARCS_b = 0;
   int numARCS_c = 0;
   int numARCS;

   if (player == UNI_A){
      numARCS = numARCS_a;
   } else if (player == UNI_B){
      numARCS = numARCS_b;
   }  else if (player == UNI_C){
      numARCS = numARCS_c;
   }
   return numARCS;
}

int getGO8s (Game g, int player){
   int numGO8s = 0;

   if (player == UNI_A) {
      g-> numGO8s++;
   } else if (player == UNI_B) {
      g-> numGO8s++;
   } else if (player == UNI_C) {
      g-> numGO8s++;
   }
   return numGO8s;
}

int getCampuses (Game g, int player){
   return 0;
}

int getIPs (Game g, int player){
   return 0;
}

int getPublications (Game g, int player){
   return 0;
}

int getStudents (Game g, int player, int discipline){
   return 0;
}

int getExchangeRate (Game g, int player,
                     int disciplineFrom, int disciplineTo){
   int exchangeRate = 3;

   if(disciplineFrom == STUDENT_BPS){
      if (player == UNI_A){
         if (g-> campus[60].position){
            exchangeRate = 2;
         }
      } else if (player == UNI_B){
         if (g-> campus[60].position){
            exchangeRate = 2;
         }
      } else if (player == UNI_C){
         if (g-> campus[60].position){
            exchangeRate = 2;
         }
      }
   } else if (disciplineFrom == STUDENT_BQN){
      if (player == UNI_A){
         if (g-> campus[60].position){
            exchangeRate = 2;
         }
      } else if (player == UNI_B){
         if (g-> campus[60].position){
            exchangeRate = 2;
         }
      } else if (player == UNI_C){
         if (g-> campus[60].position) {
            exchangeRate = 2;
         }
      }
   }
   return exchangeRate;
}

return EXIT_SUCCESS;
}
