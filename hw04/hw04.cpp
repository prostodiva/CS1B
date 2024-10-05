#include "hw04.hpp"

int main () {
    
    int choice = 0;
    double matrixA[SIZE][SIZE];
    double matrixB[SIZE][SIZE];
    double matrixC[SIZE][SIZE];

    cout <<"Enter integers to fill out the first matrix: "<<endl;
        for(int i = 0; i < SIZE; i ++) {
            for (int j = 0; j < SIZE; j++) {
                cin >>matrixA[i][j];
            }
        }
    cout <<"Enter integers to fill out the second matrix: "<<endl;
        for(int i = 0; i < SIZE; i ++) {
            for (int j = 0; j < SIZE; j++) {
                cin >>matrixB[i][j];
            }
        }

        while (choice != 4) {
            cout <<"Operations to perform: "<<endl;
            cout <<"Choose  1 - addition, 2 - subtraction, 3 - multiplication, 4 - exit"<<endl;
            cin >>choice;

            switch(choice) {
                case 1: add(matrixA, matrixB, matrixC, SIZE);
                break;
                case 2: sub(matrixA, matrixB, matrixC, SIZE);
                break;
                case 3: mul(matrixA, matrixB, matrixC, SIZE);
                break;
                case 4: return 0;
                break;
            }
    }
    
    return 0;
}