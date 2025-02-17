// Victoria S. Agostini vagostinia 801224654

#include<iostream>
using namespace std;

int main(){
  
      // Mensaje de bienvenida
      cout << "Este programa suma dos fracciones." << endl;

      // Declaración de variables
      int num1, den1, num2, den2;
  
      // Pedir la primera fracción
      cout << "Entre el numerador de la 1ra fracción: ";
      cin >> num1;
      cout << "Entre el denominador de la 1ra fracción: ";
      cin >> den1;
  
      // Pedir la segunda fracción
      cout << "Entre el numerador de la 2da fracción: ";
      cin >> num2;
      cout << "Entre el denominador de la 2da fracción: ";
      cin >> den2;
  
      // Calcular la suma de fracciones
      int numeradorResultado = (num1 * den2) + (num2 * den1);
      int denominadorResultado = den1 * den2;
  
      // Mostrar el resultado 
      cout << "La suma es " << numeradorResultado << "/" << denominadorResultado << "." << endl;
  return 0;
}
