#pragma once


/*!
 * \file
 * \brief Definicja klasy Flat
 * 
 * Plik zawiera definicję klasy Flat 
 */


#include "solid.hh" 
#include "obstacles.hh"

/*!
 * Flat dziedziczy po klasie Solid i Obstacles
 * Zawiera tylko zmienne z klas rodziców
 */
class Flat: public Solid, public Obstacles {

protected:

//std::string type="Płaskowyż";
   
public:

/*! 
* Konstruktor parametryczny klasy Flat
*/
Flat(PzG::LaczeDoGNUPlota  &Lacze ,int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D());  

/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}
/*! 
* Metoda dostępowa, zwraca środek obiektu
*/
virtual Vector3D getmid() /*const*/ override {return mid;}
/*! 
* Metoda dostępowa, zwraca nazwę obiektu
*/
virtual std::string getname() override {return name;}
/*! 
* Metoda dostępowa, zwraca promień obrysu
*/
virtual double getoradius() override{return oradius;}
};