#include "Pelicula.h"

 Pelicula::Pelicula():Video(){
     oscares = 2022;
 }

 Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares): Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
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

    ostream & operator<<(ostream &out, const Pelicula &v) {
        out << v.iD << "," << v.titulo << "," << v.duracion << "," << v.genero << "," << v.calificacionPromedio << "," << v.oscares << endl;
        return out;
    }   
    

    // OTROS METODOS
    string Pelicula::str(){
      return to_string(oscares);
    }