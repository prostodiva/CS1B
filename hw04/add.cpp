#include "hw04.hpp"

void add(double arrayOne[SIZE][SIZE], double arrayTwo[SIZE][SIZE], double arrayThree[SIZE][SIZE], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arrayThree[i][j] = arrayOne[i][j] + arrayTwo[i][j];
        }
    }

    for (int i = 0; i < SIZE; i ++) {
        for (int j = 0; j < SIZE; j++) {
            cout <<arrayThree[i][j]<< " ";
        }
        cout <<endl;
    }
    cout <<"\n";
    
}