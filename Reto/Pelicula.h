#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>

#include "Video.h"
using namespace std;

class Pelicula : public Video {
    public:
  // Metodos constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion,string _genero, double _calificacionPromedio, int _oscares);

  //Métodos MODIFICADORES (set)
    void setOscares(int _oscares);

  //Métodos de ACCESO (get)
    int getOscares();

    // OTROS METODOS
    string str();

  friend ostream & operator<<(ostream &out, const Pelicula &v);

    private:
    int oscares;

};

#endif
