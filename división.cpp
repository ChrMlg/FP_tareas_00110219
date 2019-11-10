#include <iostream>
using namespace std;
int main(){
    float y=0;
    int x=0;
    float coc=0;
    char ans='s';
    int cont=0;
    while (ans=='s'){
        cont = cont+1;
        cout << "Digite un numero N"<<cont<<": ";cin >> x;
        coc=x/y;
        y=coc;
        cout << "Anadir otro dividendo? (s)i (n)o: ";cin>>ans;
        cout << endl;

    }
    cout<<"La multiplicacion de todos los numeros es: "<<y<<endl;

return 0;
}
