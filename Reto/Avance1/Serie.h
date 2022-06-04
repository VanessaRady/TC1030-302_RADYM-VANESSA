#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>

#include "Video.h"
#include "Episodio.h"

class Serie: public Video {
public:
  //Métodos constructores
  Serie();
  Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

  // Métodos modificadores (SETS)
  void setEpisodio(int _index, Episodio _episodio);
  void setCantidad(int _cantidad);

  //Métodos de acceso (GETS)
  Episodio getEpisodio(int _index);
  int getCantidad();

  //Otros métodos
  double calculaCalPromedio();
  string str();

private:
  Episodio episodios[5];
  // Cantidad de episodios de la serie
  int cantidad;
};


#endif
