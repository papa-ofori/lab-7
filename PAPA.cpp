#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int LinearIndex(int i, int j, int columns){
    int index = i * columns+j;
    return index;
}


int InverseIndex(int index, int rows){
    int i = index % rows;
    int j = index/ rows;
    return i,j;
    
}


int main (){
    int A[8][8];
    int B[32][32];
    int C[128][128];

    for(int i = 0; i<8; i++){
        for (int j = 0; j < 8; j++){
            if (j > i){
                A[i][j] = 0;
                cout<<A[i][j]<<" ";
            }
            else {
                A[i][j] = rand()%1000 + 1;
                cout<<A[i][j]<<" ";
            }
        }

        cout<<endl;
    }

    for(int i = 0; i<32; i++){
        for (int j = 0; j < 32; j++){
            if (j > i){
                B[i][j] = 0;
                cout<<B[i][j]<<" ";
            }
            else {
                B[i][j] = rand()%1000 + 1;
                cout<<B[i][j]<<" ";
            }
        }

        cout<<endl;
    }

    for(int i = 0; i<128; i++){
        for (int j = 0; j < 128; j++){
            if (j > i){
                C[i][j] = 0;
                cout<<C[i][j]<<" ";
            }
            else {
                C[i][j] = rand()%1000 + 1;
                cout<<C[i][j]<<" ";
            }
        }

        cout<<endl;
    }

    int D[8];
    int E[32];
    int F[128];

    for(int i = 0; i<8; i++){
        for (int j = 0; j < 8; j++){
            D[LinearIndex(i,j,8)] = A[i][j];
            cout <<D[i]<<" ";
        } 
        
        
    }

    for(int i = 0; i<32; i++){
        for (int j = 0; j < 32; j++){
            E[LinearIndex(i,j,32)] = B[i][j];
            cout <<E[i]<<" ";
        }
    }

    for(int i = 0; i<128; i++){
        for (int j = 0; j < 128; j++){
            F[LinearIndex(i,j,128)] = C[i][j];
            cout <<F[i]<< " ";
        }
    }

    int G[8][8];
    int H[32][32];
    int I[128][128];

    for(int i = 0; i<8; i++){
        for (int j = 0; j < 8; j++){
           int index = LinearIndex (i,j,8);
           int a,b = InverseIndex(index,8);
            G[a][b] = D[j];
            cout <<G[i][j]<< " ";
        }
    }

    for(int i = 0; i<32; i++){
        for (int j = 0; j < 32; j++){
             int index = LinearIndex (i,j,32);
             int a,b =  InverseIndex(index,32);
            H[a][b] = D[j];
            cout <<H[i][j]<< " ";
        }
    }

    for(int i = 0; i<128; i++){
        for (int j = 0; j < 128; j++){
            int index = LinearIndex (i,j,128);
             int a,b =  InverseIndex(index,128);
            I[a][b] = D[j];
            cout <<I[i][j]<< " ";
        }
    }
return 0;
}