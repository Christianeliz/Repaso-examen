#include <iostream>

using namespace std;

class libro {
private:
    string titulo;
    string autor;
    int anio;
    string editorial;
    int paginas;
public:
    libro(string t, string a, int an, string e, int p) : titulo(t), autor(a), anio(an), editorial(e), paginas(p) {}
    void mostrar() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio: " << anio << endl;
        cout << "Editorial: " << editorial << endl;
        cout << "Paginas: " << paginas << endl;
    }
};

class libroDigital : public libro {
private:
    double tamanoArchivo;
    string formato;
    bool licencia;
public:
    libroDigital(string t, string a, int an, string e, int p, double ta, string f, bool l) 
        : libro(t, a, an, e, p), tamanoArchivo(ta), formato(f), licencia(l) {}
    void mostrar() {
        libro::mostrar();
        cout << "Tamanio del archivo: " << tamanoArchivo << " MB" << endl;
        cout << "Formato: " << formato << endl;
        cout << "Licencia: " << (licencia ? "Si" : "Ahhhh neelll") << endl;
    }
};

class libroImpreso : public libro {
private:
    double peso;
    string dimensiones;
public:
    libroImpreso(string t, string a, int an, string e, int p, double pe, string d) 
        : libro(t, a, an, e, p), peso(pe), dimensiones(d) {}
    void mostrar() {
        libro::mostrar();
        cout << "Peso: " << peso << " kg" << endl;
        cout << "Dimensiones: " << dimensiones << endl;
    }
};

class libroAudio : public libro {
private:
    double duracion;
    string narrador;
public:
    libroAudio(string t, string a, int an, string e, int p, double d, string n) 
        : libro(t, a, an, e, p), duracion(d), narrador(n) {}
    void mostrar() {
        libro::mostrar();
        cout << "Duracion: " << duracion << " horas" << endl;
        cout << "Narrador: " << narrador << endl;
    }
};

class libroRevista : public libro {
private:
    int numeroEdicion;
    string mesPublicacion;
public:
    libroRevista(string t, string a, int an, string e, int p, int ne, string mp) 
        : libro(t, a, an, e, p), numeroEdicion(ne), mesPublicacion(mp) {}
    void mostrar() {
        libro::mostrar();
        cout << "Numero de edicion: " << numeroEdicion << endl;
        cout << "Mes de publicacion: " << mesPublicacion << endl;
    }
};

int main() {
    libroDigital ld("El principito", "Antoine de Saint-Exupery", 1943, "Reynal & Hitchcock", 96, 1.5, "PDF", true);
    libroImpreso li("Cien anios de soledad", "Gabriel Garcia Marquez", 1967, "Sudamericana", 471, 0.5, "15x20 cm");
    libroAudio la("Harry Potter y la piedra filosofal", "J.K. Rowling", 1997, "Bloomsbury", 223, 8.5, "Stephen Fry");
    libroRevista lr("National Geographic", "Varios", 2023, "National Geographic Partners", 120, 150, "Octubre");

    ld.mostrar();
    cout << endl;
    li.mostrar();
    cout << endl;
    la.mostrar();
    cout << endl;
    lr.mostrar();

    return 0;
}