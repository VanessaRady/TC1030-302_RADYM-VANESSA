#include "Episodio.h"

Episodio::Episodio(){
  titulo = "Titulo";
  temporada = 0;
  calificacion = 0;
  
}
  Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
  }

 // SETS
  void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
  }
  void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
  }
  void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
  }

// GETS
  string Episodio::getTitulo(){
    return titulo;
  }
  int Episodio::getTemporada(){
    return temporada;
  }
  int Episodio::getCalificacion(){
    return calificacion;
  }

  string Episodio::str(){
    return titulo + "," + " Temporada " + to_string(temporada) + "\nCalificación: " + to_string(calificacion);
  }

