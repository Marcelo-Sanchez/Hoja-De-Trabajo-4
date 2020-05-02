#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>	
#include <string>	
using namespace std;
void grabar_archivo();
void leer_archivo();

int main(){
	grabar_archivo();
	leer_archivo();	
}
	
void grabar_archivo(){
	float muestreo=0;
	float ninos=0;
	float jovenes=0;
	float adultos=0;
	float adultos_mayores=0;
	int edad=0;
	string s;
	
	cout<<"INGRESE EL NUMERO DE PERSONAS DE MUESTREO: "<<endl;
	cin>>muestreo;
	if (muestreo>=1 and muestreo<=50){
		for (int i=1; i<=muestreo; i++){
			cout<<"INGRESE LA EDAD DE LA PERSONA: "<<endl;
			cin>>edad;	
			if (edad>=0 and edad<=12){
				ninos+=1;
			}else if( edad>=13 and edad<=29)
				jovenes+=1;
			else if( edad>=30 and edad<=59)
				adultos+=1;	
			else if( edad>=60)
				adultos_mayores+=1;
		}
	}
	cout<<"El muestreo es de: "<<muestreo<<"\t"<<"\t"<<"Porcentaje de niños \t"<<ninos<<"%\t"<<"Porcentaje de jovenes \t"<<jovenes<<endl;
	
	cout<<" Porcentaje de adultos \t"<<adultos<<"% Porcentaje de adultos mayores \t"<<adultos_mayores<<"%";
	ofstream grabararchivo;
	try {
		grabararchivo.open("muestreopersonas.txt",ios::app);
		grabararchivo<<muestreo<<"\t"<<"\t"<<ninos<<"\t"<<jovenes<<"\t"<<adultos<<"\t"<<"\t"<<adultos_mayores<<endl;
		grabararchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
	cout<<"\n"<<"Muestreo total"<<endl;
	cout<<"Personas	ninos jovenes adultos adultos_mayores"<<endl;
	ifstream leerarchivo;
	try {
		leerarchivo.open("muestreopersonas.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
}		

void leer_archivo(){
	ifstream archivo;
	float m,n,j,a, am;
	try{	
		archivo.open("muestreopersonas.txt",ios::in);
		
		while (archivo >>m >> n>> j>>a>>am){	
			n= (n/m)*100;	
			j= (j/m)*100;
			a= (a/m)*100;
			am=(am/m)*100;
		}	
		archivo.close();
		cout<<"Porcentajes de cada categoria: "<<endl;
		cout<<" Categoria \t"<<" Edad "<<endl;
		cout<<" Ninos\t"<<"\t 0-12 \t"<<"="<<n<<"%"<<endl;
		cout<<" Jovenes\t"<<"13-29 \t"<<"="<<j<<"%"<<endl;
		cout<<" Adultos\t"<<"30-59 \t"<<"="<<a<<"%"<<endl;
		cout<<" AdultosM\t"<<">60 \t"<<"="<<am<<"%"<<endl;
	
	}
	catch (exception X){		
			cout<<"Error para abrir archivo"<<endl;			
			exit(1);
	}		
	
	
}
