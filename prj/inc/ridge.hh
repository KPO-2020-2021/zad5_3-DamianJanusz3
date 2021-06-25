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


   
public:

/*! 
* Konstruktor parametryczny klasy Ridge 
*/
Ridge(PzG::LaczeDoGNUPlota  &Lacze ,int nr,Vector3D mid=Vector3D(),Vector3D dimenn=Vector3D());  

/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
virtual std::string gettype() override {return type;}
/*! 
* Metoda dostępowa, zwraca środek obiektu
*/
virtual Vector3D getmid()  override {return mid;}
/*! 
* Metoda dostępowa, zwraca nazwę obiektu
*/
virtual std::string getname() override {return name;}
/*! 
* Metoda dostępowa, zwraca promień obrysu
*/
virtual double getoradius() override{return oradius;}

/*! 
* Metoda sprawdzająca czy zachodzi kolizja
* \param[in]  - rad - promień obrysu drona
* \param[in]  - midb- środek drona
*/
virtual bool istherecolision(double rad, Vector3D midb) override{

     if (sqrt(pow((midb[0]-this->mid[0]),2)+pow((midb[1]-this->mid[1]),2))<=rad+this->oradius) {return true;}
     else {return false;}
 }

};