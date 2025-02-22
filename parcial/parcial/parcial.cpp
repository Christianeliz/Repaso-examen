#include <iostream>
#include <string>

using namespace std;

class Vehiculo {
protected:
    string fabricante;
    double velocidad;
    string combustible;
    double precio;

public:
    Vehiculo(string fab, double vel, string comb, double pre)
        : fabricante(fab), velocidad(vel), combustible(comb), precio(pre) {
    }

    virtual void mostrarInfo() {
        cout << "Fabricante: " << fabricante << endl;
        cout << "Velocidad: " << velocidad << " km/h" << endl;
        cout << "Combustible: " << combustible << endl;
        cout << "Precio: Q" << precio << endl;
    }
};

class Automovil : public Vehiculo {
private:
    int numPuertas;
    string modelo;

public:
    Automovil(string fab, double vel, string comb, double pre, int numP, string mod)
        : Vehiculo(fab, vel, comb, pre), numPuertas(numP), modelo(mod) {
    }

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Numero de puertas: " << numPuertas << endl;
        cout << "Modelo: " << modelo << endl;
    }
    void acelerar() {
        velocidad += 100;
        cout << "Acelerando... Nueva velocidad: " << velocidad << " km/h" << endl;
    }
    void frenar() {
        velocidad = max(0.0, velocidad - 100);
        cout << "Frenando... Velocidad actual: " << velocidad << " km/h" << endl;
    }
    void apagar() {
        velocidad = 0;
        cout << "Apagando... El auto esta detenido." << endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    double cilindraje;
    string tipo;

public:
    Motocicleta(string fab, double vel, string comb, double pre, double cil, string tip)
        : Vehiculo(fab, vel, comb, pre), cilindraje(cil), tipo(tip) {
    }

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Cilindraje: " << cilindraje << " cc" << endl;
        cout << "Tipo: " << tipo << endl;
    }
    void acelerar() {
        velocidad += 50;
        cout << "Acelerando... Nueva velocidad: " << velocidad << " km/h" << endl;
    }
    void frenar() {
        velocidad = max(0.0, velocidad - 50);
        cout << "Frenando... Velocidad actual: " << velocidad << " km/h" << endl;
    }
    void apagar() {
        velocidad = 0;
        cout << "Apagando... La motocicleta esta detenida." << endl;
    }
};

class Camion : public Vehiculo {
private:
    double capacidadCarga;
    int ejes;

public:
    Camion(string fab, double vel, string comb, double pre, double cap, int ej)
        : Vehiculo(fab, vel, comb, pre), capacidadCarga(cap), ejes(ej) {
    }

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
        cout << "Ejes: " << ejes << endl;
    }
    void cargar() {
        capacidadCarga += 5;
        cout << "Cargando... Nueva capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }
    void descargar() {
        capacidadCarga = max(0.0, capacidadCarga - 5);
        cout << "Descargando... Capacidad de carga actual: " << capacidadCarga << " toneladas" << endl;
    }
};

class Avion : public Vehiculo {
private:
    int capacidadPasajeros;
    double capacidadCombustible;

public:
    Avion(string fab, double vel, string comb, double pre, int capPas, double capComb)
        : Vehiculo(fab, vel, comb, pre), capacidadPasajeros(capPas), capacidadCombustible(capComb) {
    }

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Capacidad de pasajeros: " << capacidadPasajeros << " personas" << endl;
        cout << "Capacidad de combustible: " << capacidadCombustible << " galones" << endl;
    }
    void despegar() {
        velocidad += 200;
        cout << "Despegando... Nueva velocidad: " << velocidad << " km/h" << endl;
    }
    void aterrizar() {
        velocidad = max(0.0, velocidad - 200);
        cout << "Aterrizando... Velocidad actual: " << velocidad << " km/h" << endl;
    }
};

int main() {
    Automovil auto1("Toyota", 120, "Gasolina", 75000, 4, "Corolla");
    Motocicleta moto1("Yamaha", 90, "Gasolina", 25000, 250, "Deportiva");
    Camion camion1("Volvo", 80, "Diesel", 150000, 20, 6);
    Avion avion1("Boeing", 900, "Jet A", 5000000, 180, 20000);

    cout << "\n--- Informacion de los vehiculos ---\n";
    auto1.mostrarInfo();
    cout << "\n";
    moto1.mostrarInfo();
    cout << "\n";
    camion1.mostrarInfo();
    cout << "\n";
    avion1.mostrarInfo();

    cout << "\n--- Prueba de metodos ---\n";
    auto1.acelerar();
    auto1.frenar();
    auto1.apagar();
    moto1.acelerar();
    moto1.frenar();
    moto1.apagar();
    camion1.cargar();
    camion1.descargar();
    avion1.despegar();
    avion1.aterrizar();

    return 0;
}
