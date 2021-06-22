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
 * Peak dziedziczy po klasie Solid
 * zawiera dodatkowe pola: środek podstawy i typ.
 */
class Peak: public Solid, public Obstacles {

protected:

//std::string type="Góra ze szczytem";

   
public:

/*! 
* Konstruktor parametryczny klasy Peak 
*/
Peak(int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D());           


/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}

virtual Vector3D getmid() /*const*/ override {return mid;};

virtual std::string getname() override {return name;}

};