#pragma once

/*!
 * \file
 * \brief Definicja klasy Solid
 * 
 * Plik zawiera definicję klasy Solid
 */

//#include "size.hh" 
#include "matrix3x3.hh"
#include "vector3D.hh"
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <fstream>
#include <vector>
//#include "../inc/lacze_do_gnuplota.hh"


/*!
 * Solid zawiera kontener na wierzchołki, wektor środka bryły, nazwę,
 * oraz wymiary.
 */
class Solid {

protected:
int nr=0;
//PzG::LaczeDoGNUPlota  &Lacze;
Vector3D mid;
std:: string name;
std::vector<Vector3D> vert;
Vector3D dimen; 
std::string type="obiekt niezidentyfikowany";

public:
//Solid();

virtual std::string gettype() {return type;}
/*! 
* Operator indeksowania
*/
Vector3D &operator[](int index);
/*! 
* Operator indeksowania const
*/
Vector3D operator[](int index)const;
/*! 
* Metoda odpowiedzialna za usatwienie środka bryły
*/
void setmid (Vector3D mid);
/*! 
* Metoda odpowiedzialna za ustawienie nazwy
*/
void setname (std::string name);
/*! 
* Metoda dostępowa, zwraca środek
*/
virtual Vector3D getmid() /*const*/ {return mid;}//Vector3D getmid() const;///////////////const?
/*! 
* Metoda dostępowa, zwraca nazwę
*/
virtual std:: string getname () /*const;*/ {return name;}
/*! 
* Metoda odpowiedzialna za przesunięcie bryły
*/
void move (Vector3D mov);
/*! 
* Metoda odpowiedzialna za translację bryły
*/
void translate (Matrix3x3 rot);
/*! 
* Metoda odpowiedzialna za zapis
*/
void save();



};

