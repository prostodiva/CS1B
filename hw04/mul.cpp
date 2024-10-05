#include "hw04.hpp"

void mul(double arrayOne[SIZE][SIZE], double arrayTwo[SIZE][SIZE], double arrayThree[SIZE][SIZE], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for(int k = 0; k < SIZE; k++) {
                arrayThree[i][j] += arrayOne[i][k] * arrayTwo[k][j];
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout <<arrayThree[i][j]<<" ";
        }
        cout <<"\n";
    }

}