#include <iostream>
const int MAX = 10;
using namespace std;

void le_mat(int mat[MAX][MAX][MAX] , int np,int nl, int nc){
    for (int k = 0 ; k < np ; k++){
        for (int j = 0 ; j < nl ; j++){
            for(int i = 0 ; i < nc ; i++){
               cin>>mat[k][i][j];
            }
        }
    }
}
void imprime_mat(int mat[][MAX], int nl, int nc){
    for(int i=0; i<nl;i++){
        for (int j = 0; j<nc; j++){
            cout<<mat[i][j]<<" ";
        }
            cout<<endl;
    }
}
void soma_matrizes (int hiper[MAX][MAX][MAX], int np, int nl, int nc, int mat[][MAX]){
    mat[nl][nc] = {};
    for (int k = 0 ; k < np ; k++){
        for (int j = 0 ; j < nl ; j++){
            for(int i = 0 ; i < nc ; i++){
                mat[i][j] += hiper[k][i][j];
            }
        }
    }
}

int main (){
    int np,nl,nc;
    cout<<"Digite as dimensoes \n";
    cin>>np>>nl>>nc;
    cout<<"Digite os elementos das matrizes \n";
    int M3D[MAX][MAX][MAX];
    int mretorno[MAX][MAX] = {};

    le_mat(M3D,np,nl,nc);
    soma_matrizes(M3D,np,nl,nc,mretorno);
    imprime_mat(mretorno,nl,nc);

    return 0;
}
