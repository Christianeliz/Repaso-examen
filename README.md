# 🏢 Laboratorio: Sistema de Gestión de Empleados en C++

## 📌 Descripción
Este proyecto implementa un **sistema de gestión de empleados** utilizando **Programación Orientada a Objetos (POO)** en **C++**. Se modela una estructura organizativa con una **clase base (`Empleado`)** y **tres clases derivadas (`Gerente`, `Ingeniero` y `Asistente`)**, demostrando conceptos clave como **herencia**, **encapsulamiento** y **polimorfismo**.

## 🎯 Objetivos del Laboratorio
✅ Aplicar **herencia** entre clases.  
✅ Implementar **constructores y métodos** en cada clase.  
✅ Usar **encapsulamiento** para proteger datos privados.  
✅ Demostrar **polimorfismo** sobrescribiendo métodos en clases derivadas.  

## 🛠️ Estructura del Código
### 🔹 **Clase Base: `Empleado`**
- **Atributos privados**:
  - `nombre`: Nombre del empleado.
  - `edad`: Edad del empleado.
  - `salario`: Salario base del empleado.
- **Métodos**:
  - `getters` y `setters` para acceder y modificar atributos.
  - `mostrarInformacion()`: Método virtual para permitir polimorfismo.

### 🔹 **Clases Derivadas**
Cada una **hereda** de `Empleado` y sobrescribe el método `mostrarInformacion()`:

1. **`Gerente`**  
   - **Atributo adicional:** `bono` (cantidad adicional sobre el salario).  
   - **Método sobrescrito:** Muestra el bono junto con la información del empleado.

2. **`Ingeniero`**  
   - **Atributo adicional:** `especialidad` (área de especialización).  
   - **Método sobrescrito:** Muestra la especialidad del ingeniero.

3. **`Asistente`**  
   - **Atributo adicional:** `nivelExperiencia` (años de experiencia).  
   - **Método sobrescrito:** Muestra los años de experiencia.

### 🔹 **Uso de Polimorfismo**
En la función `main()`, los objetos de **Gerente, Ingeniero y Asistente** se almacenan en un **arreglo de punteros a `Empleado`**.  
Esto permite que, al llamar a `mostrarInformacion()`, C++ ejecute la versión correcta según la clase del objeto, demostrando **polimorfismo dinámico**.
