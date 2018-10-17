#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class CAlumno{
	string name;
public:
	CAlumno(string name = "Andy") : name(name){}
	string getNombre(){
		return this->name;
	}
};
int main(){
	cout<<"Hola Mundo";
	cout<<"Prueba"<<endl;
	CAlumno Andy ;
	cout<<Andy.getNombre();
	return 0;
}