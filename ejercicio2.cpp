#include<iostream>
using namespace std;

int main(){
    int n1, n2, c, i;
    char cont;
    do{//se implemento el do-while para que no se tenga que reabrir el programa
        cout<<"ingrese dos numeros a comprobar: ";cin>>n1>>n2;
    c = 0;
    for(i=1; i<=n1&&i<=n2; i++){
        if(n1%i==0&&n2%i==0){
            c++;
        }
    }
    if(c>1){
        cout<<"No son pesi"<<endl;
    }
    else{
        cout<<"Son pesi"<<endl;
    }
     cout<<"¿Comprobar mas numeros?s/n: ";cin>>cont;
    }while(cont=='s');
    return 0;
}
