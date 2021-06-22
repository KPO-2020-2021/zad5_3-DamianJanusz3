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
 * Ridge dziedziczy po klasie Solid i Obstacles
 * zawiera tylko zmienne z klas rodziców
 */
class Ridge: public Solid, public Obstacles{

protected:

//std::string type="Góra z granią";

   
public:

/*! 
* Konstruktor parametryczny klasy Ridge
*/
Ridge(PzG::LaczeDoGNUPlota  &Lacze ,int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D()/*double x=100, double y=100, double z=100*/);  

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