#include <iostream>
using namespace std;
int main(){
    int fil=0,col=0;
    cout<<"filas: ";cin>>fil;cout<<endl;
    cout<<"columnas: ";cin>>col;cout<<endl;

    int mat[fil][col];

    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
int aux=col-1;

cout<<"valores de diagonal secundaria: ";
    for(int i=0;i<fil;i++){
        
            cout<<mat[i][aux]<<" ";
            aux=aux-1;
    }
return 0;
    }