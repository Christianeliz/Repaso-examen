#include <iostream>
#include <string>

using namespace std;

// Clase base Empleado
class Empleado {
protected:
    string nombre;  // Nombre del empleado
    int edad;       // Edad del empleado
    double salario; // Salario base del empleado

public:
    // Constructor de la clase Empleado
    Empleado(string _nombre, int _edad, double _salario) : nombre(_nombre), edad(_edad), salario(_salario) {}

    // Métodos Getters
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    double getSalario() const { return salario; }

    // Métodos Setters
    void setNombre(string _nombre) { nombre = _nombre; }
    void setEdad(int _edad) { edad = _edad; }
    void setSalario(double _salario) { salario = _salario; }

    // Método virtual para mostrar información (será sobrescrito)
    virtual void mostrarInformacion() const {
        cout << "Empleado: " << nombre << ", Edad: " << edad << ", Salario: Q" << salario;
    }

    // Destructor virtual para asegurar correcta eliminación de objetos derivados
    virtual ~Empleado() {}
};

// Clase derivada Gerente
class Gerente : public Empleado {
private:
    double bono; // Bono adicional del gerente

public:
    // Constructor de Gerente, inicializa atributos heredados y propios
    Gerente(string _nombre, int _edad, double _salario, double _bono)
        : Empleado(_nombre, _edad, _salario), bono(_bono) {
    }

    // Sobrescribimos el método mostrarInformacion para incluir el bono
    void mostrarInformacion() const override {
        Empleado::mostrarInformacion();
        cout << ", Bono: Q" << bono << endl;
    }
};

// Clase derivada Ingeniero
class Ingeniero : public Empleado {
private:
    string especialidad; // Especialidad del ingeniero

public:
    // Constructor de Ingeniero
    Ingeniero(string _nombre, int _edad, double _salario, string _especialidad)
        : Empleado(_nombre, _edad, _salario), especialidad(_especialidad) {
    }

    // Sobrescribimos el método mostrarInformacion para incluir la especialidad
    void mostrarInformacion() const override {
        Empleado::mostrarInformacion();
        cout << ", Especialidad: " << especialidad << endl;
    }
};

// Clase derivada Asistente
class Asistente : public Empleado {
private:
    int nivelExperiencia; // Nivel de experiencia del asistente (años)

public:
    // Constructor de Asistente
    Asistente(string _nombre, int _edad, double _salario, int _nivelExperiencia)
        : Empleado(_nombre, _edad, _salario), nivelExperiencia(_nivelExperiencia) {
    }

    // Sobrescribimos el método mostrarInformacion para incluir la experiencia
    void mostrarInformacion() const override {
        Empleado::mostrarInformacion();
        cout << ", Experiencia: " << nivelExperiencia*12 << " meses" << endl;
    }
};

// Función principal
int main() {
    // Creación de objetos de las clases derivadas
    Gerente g1("Carlos Lopez", 45, 15000, 5000);
    Ingeniero i1("Ana Perez", 30, 12000, "Software");
    Asistente a1("Luis Gomez", 25, 8000, 2);

    // Arreglo de punteros a la clase base para demostrar polimorfismo
    Empleado* empleados[] = { &g1, &i1, &a1 };

    // Mostrar la información de cada empleado usando polimorfismo
    for (int i = 0; i < 3; i++) {
        empleados[i]->mostrarInformacion();
    }

    return 0;
}
