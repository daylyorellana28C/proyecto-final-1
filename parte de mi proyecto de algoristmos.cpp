#Include <iostream>
#include <vector>
#include <string>
#include <limits>

void calcularEdad(Estudiante &estudiante) {
    const int diaActual = 15;
    const int mesActual = 10;
    const int anioActual = 2024;

    estudiante.edad = anioActual - estudiante.anioNacimiento;

    if (mesActual < estudiante.mesNacimiento || 
        (mesActual == estudiante.mesNacimiento && diaActual < estudiante.diaNacimiento)) {
        estudiante.edad--;
    }
}

void registroEstudiantes() {
    Estudiante nuevoEstudiante;
    nuevoEstudiante.codigo = generarCodigo();
    
    cout << "Ingrese el nombre del estudiante: ";
    cin.ignore();
    getline(cin, nuevoEstudiante.nombre);
    
    cout << "Ingrese los apellidos del estudiante: ";
    getline(cin, nuevoEstudiante.apellido);  
    
    mostrarCarrera(nuevoEstudiante);
    
    cout << "Ingrese la direccion :" << endl;
    mostrarDyM(nuevoEstudiante);
    
    ingresarTelefono(nuevoEstudiante);
    
    cout << "Ingrese su fecha de nacimiento (DD MM AAAA): ";
    cin >> nuevoEstudiante.diaNacimiento >> nuevoEstudiante.mesNacimiento >> nuevoEstudiante.anioNacimiento;
     calcularEdad(nuevoEstudiante);
	 
	 cout << "Fecha de nacimiento ingresada: " 
         << nuevoEstudiante.diaNacimiento << "/" 
         << nuevoEstudiante.mesNacimiento << "/" 
         << nuevoEstudiante.anioNacimiento <<endl;
    cout << "Edad: " << nuevoEstudiante.edad << " anios." << endl;
    
    cout << "Ingrese su correo electronico : ";
    cin >> nuevoEstudiante.correo;
    
    cout << "-------------------------------------\n";
            
    estudiantes.push_back(nuevoEstudiante);
