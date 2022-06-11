#include "Peliculas.h"
#include <sstream>
#include <fstream>

  Peliculas::Peliculas(){
    
  }

// Métodos Modificadores (SETS)
  void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula){
      if (cantidad < 50){
          arrPtrPeliculas[cantidad++] = _ptrPelicula;
    }
  }


  void Peliculas::setCantidadPeliculas(int _cantidad){
    cantidad = _cantidad;
  }


// Métodos de Accedo (GETS)
  Pelicula * Peliculas::getPtrPelicula(string sId){
    for(int iR = 0; iR < cantidad; iR++)
      {
          if(arrPtrPeliculas[iR]->getId() == sId)
              return arrPtrPeliculas[iR];
      }
      return nullptr;
  }


  int Peliculas::getCantidadPeliculas(){
    return cantidad;
  }


// Otros Métodos
  void Peliculas::leerArchivo(){
    fstream fin;
    string row[6];
    string line, word;
    fin.open("Pelicula-1.csv", ios::in);
    cantidad = 0;
    while (getline(fin, line)){
      //cout << cantidad << line << endl;
      stringstream s(line);

      int iR = 0;
      while (getline(s, word, ',')){
        row[iR++] = word;
      }
      setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));
      
    }
    fin.close();

    for(int iR = 0; iR < cantidad; iR++){
      //cout << iR << "-" << arrPtrPeliculas[iR]->str() << endl; 
    }
    
  }


  void Peliculas::reporteTodasLasPeliculas(){
     double count = 0;
    for(int iR = 0; iR < cantidad; iR++) {
        cout << *arrPtrPeliculas[iR] << endl;
        count = count + arrPtrPeliculas[iR]->getCalificacion();
    }
    
    if(cantidad > 0)
    {
        cout << "Promedio:" << count / cantidad << endl;
    }
  }


  void Peliculas::reporteConCalificacion(double _calificacionPromedio){
    double count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrPeliculas[iR] -> getCalificacion() == _calificacionPromedio) {  
          cout << *arrPtrPeliculas[iR] << '\n';
            count++;
        } 
    }
    if (count == 0)
      cout << "No hay peliculas con calificación " << _calificacionPromedio << endl;
}

    
  
  void Peliculas::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrPeliculas[iR] -> getGenero() == _genero) {
          cout << *arrPtrPeliculas[iR] << '\n';
            count++;
        } 
    }
    if (count == 0)
      cout << "No hay peliculas del genero " << _genero << endl;
}


