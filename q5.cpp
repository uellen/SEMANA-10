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
void localizacao_maior (int mat[][MAX] , int nl, int nc, int& maior , int& locl , int& locc){
    maior = 0, locl = 0, locc = 0;
    for(int i=0; i<nl; i++){
        for (int j = 0; j<nc; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                locl = i;
                locc = j;
            }
        }
    }
}
int main () {
    int nl, nc;
    int a, b, c;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>nl>>nc;
    int m[MAX][MAX];
    le_mat(m,nl,nc);
    localizacao_maior(m,nl,nc,a,b,c);
    cout<<"O maior elemento eh o "<<a<<" esta na linha "<<b<<" e coluna "<<c;

    return 0;
}
