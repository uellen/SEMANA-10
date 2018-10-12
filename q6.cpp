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
bool esparsa (int mat[][MAX], int nl, int nc){
    float cont = 0;
    for (int i = 0; i < nl; i++){
        for (int j = 0; j < nc; j++){
            if (mat[i][j] == 0){
                cont ++;
            }
        }
    }
    float lob = 0.7 * (nl*nc);
    if(lob < cont){
        return true;
    }
    return false;
}
int main () {
    int nl, nc;
    int a, b, c;
    cout<<"Digite a ordem NxM da matriz (quadrada): \n";
    cin>>nl>>nc;
    int m[MAX][MAX];
    cout<<"Informe os elementos da Matriz: \n";
    le_mat(m,nl,nc);

    if(esparsa (m,nl,nc)){
        cout<<"A matriz eh esparsa";
    }
    else{
        cout<<"A matriz nao eh esparsa";
    }

    return 0;
}

