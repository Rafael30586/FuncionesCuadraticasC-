// Encontrar raíces en funciones cuadráticas

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

void menu();
void pedirDatos();
float raiz1(float,float,float);
float raiz2(float,float,float);

int opcionMenu;
float a,b,c,r1,r2;

int main(){
	cout<<"Hola usuario, gracias a esta aplicacion puede encontrar las raices"<<endl; 
	cout<<"de una funcion cuadratica con rapidez"<<endl;
	cout<<"Se llama raices a los cortes de la funcion con el eje de las abcisas"<<endl;
	
	while(opcionMenu != 3){
		menu();
	
	switch(opcionMenu){
		case 1: pedirDatos();
		r1 = raiz1(a,b,c);
		r2 = raiz2(a,b,c);
		system("cls");
		cout<<"\n\nLas raices de la funcion son: "<<r1<<" y "<<r2<<endl;break;
		
		case 2: system("cls");break;
		
		case 3: cout<<"Saliendo del programa"<<endl;
	            cout<<"Aplicacion desarrollada por F. Rafael Alvarez"<<endl;
			    cout<<"miniCalculadoras LightSpeed"<<endl;break;
			   
		        
		default: cout<<"Numero equivocado, la opcion no existe en esta aplicacion"<<endl;break;        
	}
	
	}
	
	
	
	system("pause");
	return 0;
}

void menu(){
	cout<<"\nf(X) = aX2 + bX + c"<<endl;
	cout<<"\nElija una opcion: "<<endl;
	cout<<"\n1. Encontrar raices"<<endl;
	cout<<"2. Limpiar pantalla"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opcionMenu;
}

void pedirDatos(){
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>c;
}

float raiz1(float x,float y,float z){
	return (-b+(sqrt(pow(b,2)+(-4*a*c))))/(2*a);
}


float raiz2(float x,float y,float z){
	return (-b-(sqrt(pow(b,2)+(-4*a*c))))/(2*a);
}


