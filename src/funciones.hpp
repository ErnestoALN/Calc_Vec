#ifndef funciones_hpp
#define funciones_hpp

#include <string>
using namespace std;
class Funciones{
    public:
    void ayuda();
    void suma_2D(char x1, char y1, char x2, char y2);
    void suma_3D(char x1, char y1, char x2, char y2, char x3, char y3);
    void resta_2D(char x1, char y1, char x2, char y2);
    void escalar_2D(char escalar, char x, char y);
    void modulo_2D(char x, char y);
    void modulo_3D(char x, char y, char z);
    void greetings(string data);
    void greetings(string data, int times);
};

#endif