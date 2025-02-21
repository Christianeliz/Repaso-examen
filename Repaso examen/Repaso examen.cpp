#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CuentaBancaria {
private:
    int cuenta;
    double saldo;
    string nPropietario;

public:
    CuentaBancaria(int _cuenta, string _nPropietario, double _saldo) {
        cuenta = _cuenta;
        nPropietario = _nPropietario;
        saldo = _saldo;
    }

    void transferir() {
        double cantidad;
        cout << "Que cantidad desea transferir?" << endl;
        cin >> cantidad;

        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
            cout << "Tu transferencia se ha realizado correctamente." << endl;
        }
        else {
            cout << "Algo ha salido mal, verifique la cantidad." << endl;
        }
    }

    void mostrarSaldo() {
        cout << "Saldo actual de " << nPropietario << ": Q" << saldo << endl;
    }
};

// Subclase para Banco Industrial
class BancoIndustrial : public CuentaBancaria {
public:
    BancoIndustrial(int _cuenta, string _nPropietario, double _saldo)
        : CuentaBancaria(_cuenta, _nPropietario, _saldo) {
    }

    void beneficios() {
        cout << "Banco Industrial ofrece descuentos en comercios aliados." << endl;
    }
};

// Subclase para Banrural
class Banrural : public CuentaBancaria {
public:
    Banrural(int _cuenta, string _nPropietario, double _saldo)
        : CuentaBancaria(_cuenta, _nPropietario, _saldo) {
    }

    void beneficios() {
        cout << "Banrural ofrece prestamos con tasas bajas para agricultores." << endl;
    }
};

class Bantrab : public CuentaBancaria {
public: 
    Bantrab(int _cuenta, string _nPropietario, double _saldo)
        : CuentaBancaria(_cuenta, _nPropietario, _saldo) {
    }
    void beneficios() {
        cout << "Bantrab ofrece grandes beneficios para trabajadores." << endl;
    }
};

int main() {
    BancoIndustrial cuentaBI(12345, "Juan Perez", 5000);
    Banrural cuentaBanrural(67890, "Maria Lopez", 3000);
    Bantrab cuentaBantrab(5434, "Saul Sican", 4233);

    cuentaBI.mostrarSaldo();
    cuentaBI.transferir();
    cuentaBI.mostrarSaldo();
    cuentaBI.beneficios();

    cout << endl;

    cuentaBanrural.mostrarSaldo();
    cuentaBanrural.transferir();
    cuentaBanrural.mostrarSaldo();
    cuentaBanrural.beneficios();

    cout << endl;

    cuentaBantrab.mostrarSaldo();
    cuentaBantrab.transferir();
    cuentaBantrab.mostrarSaldo();
    cuentaBantrab.beneficios();

    return 0;
}