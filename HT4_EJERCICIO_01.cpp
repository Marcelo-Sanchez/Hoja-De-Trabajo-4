#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
using namespace std;

struct fumigaciones{
	int tipodeservicio;
	float descuento;
	float precio;
	float  totalhectarias;
	float descuentosdos;
	float totaldes;  
};

void fumigacions();
void ventas();
int main(){
	fumigacions();
	
}

void fumigacions(){
	int tipodeservicio;
	float descuento;
	float precio;
	float  totalhectarias;
	float descuentotres;
	float descuentodos;
	float totaldes; 
	string s; 
		
	cout << "//////////INGRESE EL SERVICIO QUE DESEA////////" << endl;
	cout << "SERVICIO DE HIERBA MALA Q10.00 POR HEC, Seleccione  1 " << endl;	
	cout << "SERVICIO DE LANGOSTAS  Q20.00 POR HEC , Seleccione	2" << endl;	
	cout << "SERVICIO DE  GUSANOS  Q30.00 POR HEC , Seleccione  3  " << endl;	
	cout << "SERVICIO TODOS LOS ANTERIORES Q50.00 POR HEC, Seleccione-> 4 " << endl;   
	cin >> tipodeservicio;
	cout  << "CUANTAS HECTARIAS FUMIGARA: "  << endl;
	cin >> totalhectarias; 
	
	if (tipodeservicio ==1){
	
		descuento = 10 * totalhectarias;
		totaldes= descuento;
		if (totalhectarias>=500){
			descuentodos= descuento * 0.95;
			totaldes=descuentodos;
		}else if (totalhectarias<500)
			descuentodos= totalhectarias * 10;
			totaldes= descuentodos;
		
		if(descuentodos>= 1500){
			totaldes= descuentodos *0.90;
			
		}else if(descuentodos<1500){
			totaldes=descuentodos;
			
			}
			
		cout<<"TOTAL A PAGAR:"<< endl;
		cout<<totaldes;
	}
	
	else if (tipodeservicio ==2){
	
		descuento = 20 * totalhectarias;
		totaldes= descuento;
		if (totalhectarias>=500){
			descuentodos= descuento * 0.95;
			totaldes=descuentodos;
		}else if (totalhectarias<500)
			descuentodos= totalhectarias * 10;
			totaldes= descuentodos;
		
		if(descuentodos>= 1500){
			totaldes= descuentodos *0.90;
			
		}else if(descuentodos<1500){
			totaldes=descuentodos;
			
			}
			
		cout<<"TOTAL A PAGAR:"<< endl;
		cout<<totaldes;
}
	
	else if (tipodeservicio ==3){
	
		descuento = 30 * totalhectarias;
		totaldes= descuento;
		if (totalhectarias>=500){
			descuentodos= descuento * 0.95;
			totaldes=descuentodos;
		}else if (totalhectarias<500)
			descuentodos= totalhectarias * 10;
			totaldes= descuentodos;
		
		if(descuentodos>= 1500){
			totaldes= descuentodos *0.90;
			
		}else if(descuentodos<1500){
			totaldes=descuentodos;
			
			}
			
		cout<<"TOTAL A PAGAR:"<< endl;
		cout<<totaldes;
	}
	
	else if (tipodeservicio ==4){
	
		descuento = 50 * totalhectarias;
		totaldes= descuento;
		if (totalhectarias>=500){
			descuentodos= descuento * 0.95;
			totaldes=descuentodos;
		}else if (totalhectarias<500)
			descuentodos= totalhectarias * 10;
			totaldes= descuentodos;
		
		if(descuentodos>= 1500){
			totaldes= descuentodos *0.90;
			
		}else if(descuentodos<1500){
			totaldes=descuentodos;
			
			}
		
		cout<<"TOTAL A PAGAR:"<< endl;
		cout<<totaldes;
	}
	


	ofstream grabararchivo;
	try {
		grabararchivo.open("fumigacion.txt",ios::app);
		grabararchivo<<tipodeservicio<<"\t"<<totalhectarias<<"\t"<<totaldes<<endl;
		grabararchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
	
	cout<<"\n"<<"fumigaciones actuales:"<<endl;
	cout<<"tipo	hect	total"<<endl;
	ifstream leerarchivo;
	try {
		leerarchivo.open("fumigacion.txt",ios::in);				
		while (getline(leerarchivo, s))
			cout<<s<<endl;		
		leerarchivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
	}
}

	
