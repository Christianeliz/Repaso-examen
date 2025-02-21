#include <iostream>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
public:
    Estudiante(string nom, int ed) {
        nombre = nom;
        edad = ed;
    }
    string getNombre() {
        return nombre;
    }
    int getEdad() {
        return edad;
    }
};

class EstudiantePrimaria : public Estudiante {
private:
    string grado;
public:
    EstudiantePrimaria(string nom, int ed, string gr) : Estudiante(nom, ed) {
        grado = gr;
    }
    string getGrado() {
        return grado;
    }
};

class EstudianteSecundaria : public Estudiante {
private:
    string especialidad;
public:
    EstudianteSecundaria(string nom, int ed, string esp) : Estudiante(nom, ed) {
        especialidad = esp;
    }
    string getEspecialidad() {
        return especialidad;
    }
};

class EstudianteUniversidad : public Estudiante {
private:
    string carrera;
public:
    EstudianteUniversidad(string nom, int ed, string car) : Estudiante(nom, ed) {
        carrera = car;
    }
    string getCarrera() {
        return carrera;
    }
};

int main()
{
    EstudiantePrimaria ep("Juan", 10, "5to Grado");
    EstudianteSecundaria es("Maria", 15, "Ciencias");
    EstudianteUniversidad eu("Pedro", 20, "Ingeniería");

    cout << "Estudiante de Primaria: " << ep.getNombre() << ", Edad: " << ep.getEdad() << ", Grado: " << ep.getGrado() << endl;
    cout << "Estudiante de Secundaria: " << es.getNombre() << ", Edad: " << es.getEdad() << ", Especialidad: " << es.getEspecialidad() << endl;
    cout << "Estudiante de Universidad: " << eu.getNombre() << ", Edad: " << eu.getEdad() << ", Carrera: " << eu.getCarrera() << endl;

    return 0;
}