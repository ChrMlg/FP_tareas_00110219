#include <iostream>
using namespace std;
int main(){
    int y=0;
    int x=0;
    int sum=0;
    char ans='s';
    int cont=0;
    while (ans=='s'){
        cont = cont+1;
        cout << "Digite sumando N"<<cont<<": ";cin >> x;
        sum=x+y;
        y=sum;
        cout << "Anadir otro sumando? (s)i (n)o: ";cin>>ans;
        cout << endl;

    }
    cout<<"La suma de todos los numeros es: "<<y<<endl;

return 0;
}
