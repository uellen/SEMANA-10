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
bool permutacao (int mat[][MAX] , int n){
    int soma = 0;
    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            if(mat[i][j] != 0 && mat[i][j] != 1){
                return false;
            }
                soma += mat[j][j];
        }

    }
    if(soma != n){
        return true;
    }
    return false;
}
int main () {
    int n;
    cout<<"Digite a ordem da matriz (quadrada): \n";
    cin>>n;
    int m[MAX][MAX];
    le_mat(m,n);
    if(permutacao(m,n)){
        cout<<"A matriz informada eh de permutacao \n";
    }
    else{
        cout<<"A matriz informada nao eh de permutacao \n";
    }


    return 0;
}
