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
    cout<<"valores de diagonal principal: ";
    for(int i=0;i<fil;i++){
            cout<<mat[i][i]<<" ";
    }
return 0;
    }