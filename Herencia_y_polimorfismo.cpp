#include<iostream>
#include<stdlib.h>

using namespace std;

class Persona
{
	protected:
		string nombre;
		int edad;
	public:
		Persona(string,int);	
		void MuestraDatos();
};

Persona::Persona(string nom,int ed)
{
	nombre=nom;
	edad=ed;
}

void Persona::MuestraDatos()
{
	cout<<"\n Nombre: "<<nombre<<" Edad: "<<edad<<endl;
}

class EstudianteUniversitario : public Persona
{
	private:
		string carrera;
		int matricula;
	public:
		EstudianteUniversitario(string,int,string,int);
	    void MuestraDatos();
};

EstudianteUniversitario::EstudianteUniversitario(string nom,int ed,string carr,int matri) : Persona(nom,ed)
{
	carrera=carr;
	matricula=matri;
}

void EstudianteUniversitario::MuestraDatos()
{
	cout<<"\n Nombre: "<<nombre<<" Edad: "<<edad<<" Carrera: "<<carrera<<" Matricula: "<<matricula<<endl;
}

int main()
{
	Persona P1("Patricio.",20);
	EstudianteUniversitario Est1("Panfilo.",25,"Ingenieria en Alimentos.",521654165);
	P1.MuestraDatos();
	Est1.MuestraDatos();
	
	system("pause");
	return 0;
}
