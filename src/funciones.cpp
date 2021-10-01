#include "funciones.hpp"
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

void Funciones::ayuda(){
    cout << "usage: CLI-Test [options]" << endl;
    cout << "-a | -A | ayuda muestra los comandos." << endl;
    cout << "-s | -S | suma comila la funcion suma." << endl;
    cout << "-r | -R | resta compila la funcion resta" << endl;
    cout << "-e | -E | esaclar compila la funcion escalar." << endl;
    cout << "-m | -M | modulo comila la funcion modulo." << endl;
}

void Funciones::suma_2D(char x1, char y1, char x2, char y2){
  int x_1, x_2, y_1, y_2;
  
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;
  cout << "R => (" << x_1+x_2 << "," << y_1+y_2 << ")" << endl; 
}

//suma 3D
void Funciones::suma_3D(char x1, char y1, char x2, char y2, char x3, char y3){
  int x_1, x_2, y_1, y_2,x_3,y_3;
  
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  x_3 = x3 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
  y_3 = y3 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;
  cout << "R => (" << x_1+x_2+x_3 << "," << y_1+y_2+y_3 << ")" << endl; 
}

//modulo 3d
void Funciones::modulo_3D(char x, char y, char z){
    float _x, _y,_z, _escalar;
  cout << "ingrese su vector: (x1,y1,z1)" << endl;
  cin >> x; 
  cin >> y;
  cin >> z;
  _x = x - 48;
  _y = y - 48;
  _z = z - 48;
cout << "|A|: " << "√" << x <<"² + " << y << "² + " << z << "²"<< endl;
  cout << "|A|: " << sqrt(pow(_x, 2) + pow(_y, 2) + pow(_z, 2)) << endl;
}

void Funciones::resta_2D(char x1, char y1, char x2, char y2){
  int x_1, x_2, y_1, y_2;
  
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;

cout << "resta: " << "("<< x1 << "," << y1 << ")-("<< x2 << "," << y2 << ")"<< endl;
  cout << "R => (" << x_1-x_2 << "," << y_1-y_2 << ")" << endl; 
}

void Funciones::escalar_2D(char escalar, char x, char y){
  int _x, _y, _escalar;
  
  _x = x - 48;
  _y = y - 48;
  _escalar = escalar - 48;
  cout << "Multi: " << "("<< escalar << ")*("<< x << "," << y << ")"<< endl;
  cout << "R => (" << _x*_escalar  << "," << _y*_escalar << ")" << endl;
}

void Funciones::modulo_2D(char x, char y){
    int _x, _y, _escalar;;
  _x = x - 48;
  _y = y - 48;

cout << "|A|: " << "√" << x <<"² + " << y << "²"<< endl;
  cout << "|A|: " << sqrt(pow(_x, 2) + pow(_y, 2)) << endl;
}
void resta_3D(char x1, char y1, char x2, char y2, char x3, char y3){
  int x_1, x_2, y_1, y_2,x_3,y_3;
  
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  x_3 = x3 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
  y_3 = y3 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;
  cout << "R => (" << x_1+x_2+x_3 << "," << y_1+y_2+y_3 << ")" << endl; 
}