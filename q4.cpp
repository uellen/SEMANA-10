#include <iostream>
const int MAX = 100;
using namespace std;

void le_mat(int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            cin>>mat[i][j];
        }
    }
}
void imprime_mat(int mat[][MAX], int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n ; j++){
            cout<<mat[i][j]<<" ";
        }
            cout<<endl;
    }
}
void triangularizacao (int mat[][MAX] , int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(j<i){
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
    le_mat(m,n);
    triangularizacao(m,n);
    imprime_mat(m,n);

    return 0;
}
