#pragma once

/*!
 * \file
 * \brief Definicja klasy Ridge
 * 
 * Plik zawiera definicję klasy Ridge 
 */



#include "solid.hh"
#include "obstacles.hh"

/*!
 * Ridge dziedziczy po klasie Solid
 * zawiera dodatkowe pola: środek podstawy i typ.
 */
class Ridge: public Solid, public Obstacles{

protected:

//std::string type="Góra z granią";

   
public:

/*! 
* Konstruktor parametryczny klasy Ridge
*/
Ridge(/*PzG::LaczeDoGNUPlota  &Lacze ,*/int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D()/*double x=100, double y=100, double z=100*/);  

/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}

virtual Vector3D getmid() /*const*/ override {return mid;}

virtual std::string getname() override {return name;}

};