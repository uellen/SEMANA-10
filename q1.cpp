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
            cout<<mat[i][j];
        }
            cout<<endl;
    }
}
void identidade (int mat[][MAX] , int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(i==j){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }
}
int main () {
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m[MAX][MAX];
    identidade (m,n);
    imprime_mat(m,n,n);

    return 0;
}
