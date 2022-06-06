#include "Pelicula.h"

 Pelicula::Pelicula(){
     oscares = 2022;
 }

 Pelicula::Pelicula(int _oscares){
    oscares = _oscares;
}

    // SET
    void Pelicula::setOscares(int _oscares){
        oscares = _oscares;
    }

    // GET
    int Pelicula::getOscares(){
        return oscares;
    }

    // OTROS METODOS
    string Pelicula::str(){
      return to_string(oscares);
    }