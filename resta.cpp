#include <iostream>
using namespace std;
int main(){
    int y=0;
    int x=0;
    int res=0;
    char ans='s';
    int cont=0;
    while (ans=='s'){
        cont = cont+1;
        cout << "Digite un numero N"<<cont<<": ";cin >> x;
        res=x-y;
        y=res;
        cout << "Anadir otro sustraendo? (s)i (n)o: ";cin>>ans;
        cout << endl;

    }
    cout<<"La diferencia de todos los numeros es: "<<y<<endl;

return 0;
}
