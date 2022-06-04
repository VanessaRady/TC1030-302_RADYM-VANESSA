#ifndef Episodio_hpp
#define Episodio_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio {
  public: 
  //Metodos constructores
  Episodio();
  Episodio(string _titulo, int _temporada, int _calificacion);

  //Métodos MODIFICADORES (set)
  void setTitulo(string _titulo);
  void setTemporada(int _temporada);
  void setCalificacion(int _calificacion);

  //Métodos de ACCESO (get)
  string getTitulo();
  int getTemporada();
  int getCalificacion();

  //Otros metodos 
  string str();

  protected:
  string titulo;
  int temporada;
  int calificacion;


};


#endif
