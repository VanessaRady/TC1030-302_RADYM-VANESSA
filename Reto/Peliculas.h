#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
#include "Pelicula.h"

const int MAX_PEL = 50;

class Peliculas{
// Atributos
private:
  Pelicula *arrPtrPeliculas[MAX_PEL];
  int cantidad;

public:
// Método constructor
  Peliculas();

// Métodos Modificadores (SETS)
  void setPtrPelicula(Pelicula *_pelicula);
  void setCantidadPeliculas(int _cantidad);

// Métodos de Accedo (GETS)
  Pelicula * getPtrPelicula(string _iD);
  int getCantidadPeliculas();


// Otros Métodos
  void leerArchivo();
  void reporteTodasLasPeliculas();
  void reporteConCalificacion(double _calificacionPromedio);
  void reporteGenero(string _genero);

};

#endif