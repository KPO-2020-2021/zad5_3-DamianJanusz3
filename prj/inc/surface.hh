#pragma once

/*!
 * \file
 * \brief Definicja klasy Surface
 * 
 * Plik zawiera definicję klasy Surface
 */

#include "vector3D.hh"
#include "matrix3x3.hh"
#include <vector>
#include <fstream>

/*!
 * Surface zawiera 4 wierzchołki płaszczyzny, nazwę pliku i licznik 
 */
class Surface {

protected:
int counter;
std::vector<Vector3D> vert;
std::string name="../datasets/surface.dat";

public:
/*! 
* Konstruktor parametryczny klasy Surface
*/
Surface(Vector3D dimen=Vector3D(),int density=30);
/*! 
* Metoda ustawiająca nazwę
*/
void setname(std::string name);
/*! 
* Metoda zwracająca nazwę
*/
std::string getname() const;
/*! 
* Metoda zapisująca do pliku
*/
void save();
/*! 
* Operator indeksowania
*/
Vector3D &operator[](int index);
/*! 
* Operator indeksowania const
*/
Vector3D operator[](int index) const;

};