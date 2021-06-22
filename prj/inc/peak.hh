#pragma once


/*!
 * \file
 * \brief Definicja klasy Peak
 * 
 * Plik zawiera definicję klasy Peak 
 */


#include "solid.hh"
#include "obstacles.hh"

/*!
 * Peak dziedziczy po klasie Solid i Obstacles
 * zawiera tylko zmienne z klas rodziców
 */
class Peak: public Solid, public Obstacles {

protected:

//std::string type="Góra ze szczytem";

   
public:

/*! 
* Konstruktor parametryczny klasy Peak 
*/
Peak(PzG::LaczeDoGNUPlota  &Lacze ,int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D());           


/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}
/*! 
* Metoda dostępowa, zwraca środek obiektu
*/
virtual Vector3D getmid() /*const*/ override {return mid;};
/*! 
* Metoda dostępowa, zwraca nazwę obiektu
*/
virtual std::string getname() override {return name;}

};