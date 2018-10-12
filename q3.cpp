#include <iostream>
const int MAX = 100;
using namespace std;

void le_mat(int mat[][MAX], int nl, int nc){
    for(int i=0; i<nl; i++){
        for (int j = 0; j<nc ; j++){
            cin>>mat[i][j];
        }
    }
}
void imprime_mat(int mat[][MAX], int nl, int nc){
    for(int i=0; i<nl; i++){
        for (int j = 0; j<nc ; j++){
            cout<<mat[i][j]<<" ";
        }
            cout<<endl;
    }
}
void imparizacao (int mat[][MAX] , int nl, int nc){
    int cont = 0;
    for(int j=0; j<nc; j++){
        for (int i = 0; i<nl; i++){
            mat[i][j] = cont + 1;
            cont += 2;
        }
    }
}
int main () {
    int nl, nc;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>nl>>nc;
    int m[MAX][MAX];
    imparizacao(m,nl,nc);
    imprime_mat(m,nl,nc);

    return 0;
}
