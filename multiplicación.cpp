#include <iostream>
using namespace std;
int main(){
    int y=0;
    int x=0;
    int mul=0;
    char ans='s';
    int cont=0;
    while (ans=='s'){
        cont = cont+1;
        cout << "Digite factor N"<<cont<<": ";cin >> x;
        mul=x*y;
        y=mul;
        cout << "Anadir otro factor? (s)i (n)o: ";cin>>ans;
        cout << endl;

    }
    cout<<"La suma de todos los numeros es: "<<y<<endl;

return 0;
}
