#include<iostream>
using namespace std;
float suma(float);
int factorial(int);

//algoritmo proncipal
int main(){
    float n, sum;
    char cn;
    do{
        system("cls");
        cout<<"Ingrese un numero a operar: ";cin>>n;
        sum =suma(n);
        cout<<"La sumatoria es de: "<<sum<<endl;
        cout<<"Desea probar con mas numeros? s/n: ";cin>>cn;
    }while(cn=='s');
    return 0;
}

//funcion suma total
float suma (float a){
    float s=0;
    for(int i=1; i<=a; i++){
        s=s+(factorial(i)/(2.0*i));
    }
    return s;
}

//funcion factorial
int factorial(int b){
    int f=1;
    for(int i=2; i<=b; i++){
        f=f*i;
    }
    return f;
}
