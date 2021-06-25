#pragma once

/*!
 * \file
 * \brief Definicja klasy Drone
 * 
 * Plik zawiera definicję klasy Drone
 */
#include "obstacles.hh"
#include "cuboid.hh"
#include "matrix3x3.hh"
#include "prism.hh"
#include <unistd.h>
#include "vector3D.hh"



/*!
 * Drone zawiera: kąt, id, odległość do przebycia, macierz rotacji 
 * oryginalne rotory, ich kopie, oryginalny kadłub, jego kopię, kąt dla ścieżki
 * i rysowaną scieżkę. 
 */
class Drone: public Solid, public Obstacles {
public:
    int id;
    double angle;
    std::vector <Vector3D> pathr;
    Cuboid org;
    Cuboid cpy;
    Prism orgw[4];
    Prism cpyw[4];
    Matrix3x3 rot;
    Vector3D path;
    double angler=0;
    

/*! 
* Konstruktor bezparametryczny klasy Drone
*/  
    Drone();
/*! 
* Konstruktor parametryczny klasy Drone
*/
    Drone(int id,PzG::LaczeDoGNUPlota  &Lacze, Vector3D position);
/*! 
* Metoda odpowiedzialna za zapis 
*/
    void save();
/*! 
* Metoda odpowiedzialna za przesunięcie drona
*/
    void move(double path);
/*! 
* Metoda odpowiedzialna za obrót drona
*/
    void rotate(double angle);
/*! 
* Metoda odpowiedzialna za obrót rotorów
*/
    void rotatew();
/*! 
* Metoda odpowiedzialna za lot pionowy drona
*/
    void verticalmove(double path);
/*! 
* Metoda odpowiedzialna za wyznaczenie ścieżki drona
*/
    void calculatepath(double path, double angle1);
/*! 
* Metoda dostępowa, zwraca typ obiektu
*/
    virtual std::string gettype() override {return type;}

/*! 
* Metoda dostępowa, zwraca środek obiektu
*/
    virtual Vector3D getmid() override {return mid;}
/*! 
* Metoda dostępowa, zwraca nazwę obiektu
*/
    virtual std::string getname() override {return name;}


/*! 
* Metoda sprawdzająca czy zachodzi kolizja
* \param[in]  - rad - promień obrysu drona
* \param[in]  - midb- środek drona
*/
   virtual bool istherecolision(double rad, Vector3D midb) override{
       
     if (sqrt(pow((midb[0]-this->bmid[0]),2)+pow((midb[1]-this->bmid[1]),2))<=rad+this->oradius) {return true;}
     else {return false;} 
 }

/*! 
* Metoda dostępowa, zwraca pomocniczy środek obiektu
*/
virtual Vector3D getbmid() override {return bmid;}
};