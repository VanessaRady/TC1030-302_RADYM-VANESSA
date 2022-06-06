#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>

#include "Video.h"
using namespace std;

class Pelicula : public Video {
    public:
  // Metodos constructores
    Pelicula();
    Pelicula(int _oscares);

  //Métodos MODIFICADORES (set)
    void setOscares(int _oscares);

  //Métodos de ACCESO (get)
    int getOscares();

    // OTROS METODOS
    string str();

    protected:
    int oscares;

};

#endif