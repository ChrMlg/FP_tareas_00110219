#include <iostream>
using namespace std;
float last=0;
char ans='n';

//funciones de operaciones:
void sum(float x){
    last=last+x;
}
void res(float x){
    last=last-x;
}
void mul(float x){
    last=last-x;
}
void div(float x){
    last=last/x;
}
//f princ.
int main(){
    int men;
    //ciclo para añadir numeros / operaciones
    while (ans=='n'){
        int num=0;
        cout<<"1.suma"<<endl;
        cout<<"2.resta"<<endl;
        cout<<"3.multiplicacion"<<endl;
        cout<<"4.division"<<endl;
        cin>>men;
        //opcion de tipo de operacion 
        switch (men){
            //solicitud de numeros para op. en cuestion 
            case 1:
            cout<<"digite un numero: ";cin>>num;
            sum(num);
            break;
            case 2:
            cout<<"digite un numero: ";cin>>num;
            res(num);
            break;
            case 3:
            cout<<"digite un numero: ";cin>>num;
            mul(num);
            break;
            case 4:
            cout<<"digite un numero: ";cin>>num;
            div(num);
            break;
        }
        //desicion de salir de while
        cout<<endl;
        cout<<"Terminar? (s)i (n)o ";cin>>ans;
        cout<<endl;
    }
    //resultado final
    cout<<last;
    return 0;
}