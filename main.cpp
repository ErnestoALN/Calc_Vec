#include "src/funciones.hpp"
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char* argv[]){
   // Funciones fc;
    //char escalar, x,  y,  x1,  y1,  x2, y2;
    if(argc == 1){
        cout << "escribre -a para ayuda" << endl;
    }else{
        // Convertir un char a string
        std::vector<std::string> argList;
        for(int i=1;i<argc;i++){
            argList.push_back(argv[i]); 
        }
        // menu
        if(argList[0] == "-a" || argList[0] == "-A" || argList[0] == "ayuda"){
           void ayuda();
        }else if(argList[0] == "-s"  || argList[0] == "-S" || argList[0] == "suma"){
         void suma_2D();    
        }else if(argList[0] == "-r"  || argList[0] == "-R" || argList[0] == "resta"){
          void resta_2D();
        }else if(argList[0] == "-e"  || argList[0] == "-E" || argList[0] == "escalar"){
           void escalar_2D();
            if(argc == 2){ 
          void modulo_2D();
        }else if(argList[0] == "-m" || argList[0] == "-M" || argList[0] == "modulo" ){
                cout << "error" << endl;
            }else if(argc == 5){
    }
  }
    }
    return 0;
  
}