#include "Serie.h"

Serie::Serie():Video(){
  cantidad = 0;
}
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio):Video(_iD, _titulo, _duracion, _genero, 0){
  cantidad = 0;
}

void Serie::setEpisodio(int _index, Episodio _episodio){
  //Validar que el index sea correcto, >= 0 and _index < cantidad
  //Si no cumple no se cambia
episodios[_index] = _episodio;
  
}
void Serie::setCantidad(int _cantidad){
  cantidad = _cantidad;
  }

Episodio Serie::getEpisodio(int _index){
  Episodio ep;
    //Validar que el index sea correcto, >= 0 and _index < cantidad
    //Si no cumple no se cambia
    return episodios[_index];
    return Episodio();
}
int Serie::getCantidad(){
  return cantidad;
}

double Serie::calculaCalPromedio(){
  double acum = 0;
  for (int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].getCalificacion();

  if (cantidad > 0)
    return acum / cantidad;
  else
    return 0;
}
string Serie::str(){
  // Concatenar todos los episodios de la serie
  string acum = "\n";
  for (int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].str() + '\n';
      
  return iD + "," + titulo + ", " + to_string(duracion) + "," + genero + ", " + to_string(calificacionPromedio) + acum;
}
