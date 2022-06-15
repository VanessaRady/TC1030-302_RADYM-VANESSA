#include "Serie.h"

Serie::Serie():Video(){
  cantidad = 0;
}
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad):Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
  cantidad = _cantidad;
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

double Serie::calculaCalPromedio()
{
    double acum = 0.0;
    if (cantidad > 0)
    {
        for (int iR = 0; iR < cantidad; iR++) {
            acum = acum + episodios[iR].getCalificacion();
        }
        calificacionPromedio = acum / cantidad;
        return calificacionPromedio;
    }
    else
    {
        calificacionPromedio = -1;
        return calificacionPromedio;
    }
}


// Sobrecarga de operador <<
ostream& operator<< (ostream &out, const Serie &s) {
  out << s.iD << "," << s.titulo << "," << s.duracion << "," << s.genero << ", "<< s.calificacionPromedio << "," << s.cantidad << endl;

  return out;

}

string Serie::str(){
    // Concatenar todos los episodios de la serie
  string acum = "\n";
  for (int index = 0; index < cantidad; index++)
    acum = acum + episodios[index].str() + '\n'  ;
    return iD + "," + titulo + ", " + to_string(duracion) + "," + genero + ", " + to_string(calificacionPromedio) + acum;
    }

