#include "StateCalculator.h"

using namespace std;

namespace GOL {
    void calculateNextState(array<array<bool, MAX_SIZE+1>, MAX_SIZE+1> &p_currentStateBoard){

        array<array<bool, MAX_SIZE+1>, MAX_SIZE+1> nextStateBoard = {};

        for (int i(1); i < MAX_SIZE; i++) {
            for (int j(1); j< MAX_SIZE; j++){
                 int total = neighbourTotal(p_currentStateBoard, i, j);
                 if(p_currentStateBoard[i][j]){
                     if (total == 2 || total == 3){
                         nextStateBoard[i][j] = true;
                     }else{
                         if(total==3){
                             nextStateBoard[i][j] = true;
                         }
                     }
                 }

            }
        }


    }

    int neighbourTotal(array<array<bool, MAX_SIZE+1>, MAX_SIZE+1> &p_currentStateBoard, int posX, int posY){

        int total {0};

        total += p_currentStateBoard[posX][posY+1];
        total += p_currentStateBoard[posX+1][posY];
        total += p_currentStateBoard[posX+1][posY+1];
        total += p_currentStateBoard[posX][posY-1];
        total += p_currentStateBoard[posX-1][posY];
        total += p_currentStateBoard[posX-1][posY-1];
        total += p_currentStateBoard[posX+1][posY-1];
        total += p_currentStateBoard[posX-1][posY+1];

        return total;

    }
}
