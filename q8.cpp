#include <iostream>
const int MAX = 100;
using namespace std;

void le_mat(int mat[][MAX], int nl, int nc){
    for(int i=0; i<nl;i++){
        for (int j = 0; j<nc; j++){
            cin>>mat[i][j];
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
void maiores (int mat[][MAX], int nl, int nc, int vet[]){
    int maior = 0;
    for (int j = 0; j < nc ; j++){
        for (int i = 0; i < nl ; i++){
            if(mat[i][j] > maior){
                vet[j] = mat[i][j];
            }
            maior = 0;
        }
    }
}
void imprimir_vetor (int vet[MAX],int n){
    for(int i=0; i<n; i++){
            cout<<vet[i];
    }
}

int main (){
    int num_l,num_c;
    num_l = 1;
    num_c = 1;
    cout<<"Insira o numero de linhas e colunas da sua matriz, respectivamente. \n";
    cin>>num_l>>num_c;
    int m[MAX][MAX];
    int v[num_c];

    cout<<"Digite os elementos da matriz. \n";
    le_mat(m,num_l,num_c);
    maiores( m , num_l, num_c , v);
    imprimir_vetor(v,num_c);


    return 0;

}
