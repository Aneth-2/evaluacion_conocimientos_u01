#include<iostream>
#include<string>
using namespace std;

int main(){
    float op1, op2;
    char op; 
    do{
        cout<<"ingrese dos numeros a operar: ";cin>>op1>>op2;
        system("cls");
        cout<<"Menu de opciones"<<endl;
        cout<<"+: sumar los datos"<<endl;
        cout<<"-: restar los datos"<<endl;
        cout<<"*: multiplicar los datos"<<endl;
        cout<<"/: dividir los datos"<<endl;
        cout<<"0: salir del programa"<<endl;
        cout<<"Selecione una opcion: ";cin>>op;
        switch(op){
            case '+':
                cout<<"La sumatoria es: "<<op1+op2<<endl;
                system("pause");
                break;
            case '-':
                cout<<"La resta es de: "<<op1-op2<<endl;
                system("pause");
                break;
            case '*':
                cout<<"El producto es de: "<<op1*op2<<endl;
                system("pause");
                break;
            case '/':
                if(op2!=0){
                    cout<<"La division es de: "<<op1/op2<<endl;
                }
                else{
                    cout<<"Resultado invalido"<<endl;
                }
                system("pause");
                break;
        }
    }while(op!='0');
    return 0;
}
