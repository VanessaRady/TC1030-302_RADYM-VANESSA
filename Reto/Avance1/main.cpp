#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"

int main() {
  // Declaración de un video default
  Video video1;

  //Declaración de video con parametros
  Video video2{"001", " Drama de los Rayados", 120, " Drama - Tragedia - Eliminados", 0};

  Serie bridgerton{"002", " Bridgerton", 995, " Drama - Romance - Historia", 0};

  Episodio episodio1{"Final: parte 1", 2, 9};

  bridgerton.setEpisodio(0, episodio1);
  bridgerton.setCantidad(bridgerton.getCantidad() + 1);
  bridgerton.setEpisodio(1, episodio1);
  bridgerton.setCantidad(bridgerton.getCantidad() + 1);
  
  cout << bridgerton.str() << endl;


  //Desplegar video1
  cout << video1.str() << endl;
  cout << video2.str() << endl;

}
