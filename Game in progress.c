
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

#define NUM_VERTEX 54

typedef struct _vertex {
	int position;
} Vertex;

typedef int student;

typedef int score;

typedef struct _uni *Uni{
	student numTHD;
	student numBPS;
	student numBQN;
	student numMJ;
	student numMTV;
	student numMMONEY;
	int numArcs;
	int numPubs;
	int numIPs;
	int numCampus;
	int numGO8;
	score KPI;
}

typedef struct _game * Game;

typedef struct _game {
   int currentTurn;
   int whoseTurn;
   Uni uniA;
   Uni uniB;
   Unit uniC;
} game;

typedef char path[PATH_LIMIT];

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
    int KPIpoints = 0;
    if(player == 0){
    	KPIpoints = g->uniA->numKPI;
    }else if(player == 1){
    	KPIpoints = g->uniB->numKPI;
    }else if(player == 2){
    	KPIpoints = g->uniC->numKPI;
    }
    return KPIpoints;
    
    
/*    
    int numKPI_a = 20;
    int numKPI_b = 20;
    int numKPI_c = 20;
    int numKPI;
    
    if (player == UNI_A){
        numKPI = numKPI_a;
    } else if (player == UNI_B){
        numKPI = numKPI_b;
    } else if (player == UNI_C){
        numKPI = numKPI_c;
    }
*/    
}

int getARCs (Game g, int player){
      int Arcs = 0;
    if(player == 0){
    	Arcs = g->uniA->numArcs;
    }else if(player == 1){
    	Arcs = g->uniB->numArcs;
    }else if(player == 2){
    	Arcs = g->uniC->numArcs;
    }
    return Arcs;
/*  
   int numARC_a = 0;
   int numARC_b = 0;
   int numARC_c = 0;
   int numARC;

   if (player == UNI_A){
      numARC = numARC_a;
   } else if (player == UNI_B){
      numARC = numARC_b;
   }  else if (player == UNI_C){
      numARC = numARC_c;
   }
 */
}

int getGO8s (Game g, int player){
      int GO8s = 0;
    if(player == 0){
    	GO8s = g->uniA->numGO8;
    }else if(player == 1){
    	GO8s = g->uniB->numGO8;
    }else if(player == 2){
    	GO8s = g->uniC->numGO8;
    }
    return GO8s;
/*  
   int numGO8_a = 0;
   int numGO8_b = 0;
   int numGO8_c = 0;
   int numGO8;

   if (player == UNI_A){
      numGO8 = numGO8_a;
   } else if (player == UNI_B){
      numAGO8 = numGO8_b;
   }  else if (player == UNI_C){
      numGO8 = numGO8_c;
   }
   return numGO8;
*/   
}

int getCampuses (Game g, int player){
       int numCampus = 0;
    if(player == 0){
    	numCampus = g->uniA->numCampus;
    }else if(player == 1){
    	numCampus = g->uniB->numCampus;
    }else if(player == 2){
    	numCampus = g->uniC->numCampus;
    }
    return numCampus;
/*   
   int numCAMPUS_a = 2;
   int numCAMPUS_b = 2;
   int numCAMPUS_c = 2;
   int numCAMPUS;

   if (player == UNI_A){
      numCAMPUS = numCAMPUS_a;
   } else if (player == UNI_B){
      numCAMPUS = numCAMPUS_b;
   }  else if (player == UNI_C){
      numCAMPUS = numCAMPUS_c;
   }
*/ 
}

int getIPs (Game g, int player){
      int numIPs = 0;
    if(player == 0){
    	numIPs = g->uniA->numIPs;
    }else if(player == 1){
    	numIPs = g->uniB->numIPs;
    }else if(player == 2){
    	numIPs = g->uniC->numIPs;
    }
    return numIPs;
/*  
   int numIP_a = 0;
   int numIP_b = 0;
   int numIP_c = 0;
   int numIP;

   if (player == UNI_A){
      numIP = numIP_a;
   } else if (player == UNI_B){
      numIP = numIP_b;
   }  else if (player == UNI_C){
      numIP = numIP_c;
   }
   return numIP;
*/
}

int getPublications (Game g, int player){
   int numPUB_a = 0;
   int numPUB_b = 0;
   int numPUB_c = 0;
   int numPUB;

   if (player == UNI_A){
      numPUB = numPUB_a;
   } else if (player == UNI_B){
      numPUB = numPUB_b;
   }  else if (player == UNI_C){
      numPUB = numPUB_c;
   }
   return numPUB;
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
