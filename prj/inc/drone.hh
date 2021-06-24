#pragma once

/*!
 * \file
 * \brief Definicja klasy Drone
 * 
 * Plik zawiera definicję klasy Drone
 */
#include "obstacles.hh"
//#include "solid.hh"
#include "cuboid.hh"
#include "matrix3x3.hh"
#include "prism.hh"
#include <unistd.h>
#include "vector3D.hh"
//#include "scene.hh"
//#include "../inc/lacze_do_gnuplota.hh"


/*!
 * Drone zawiera: kąt, id, odległość do przebycia, macierz rotacji 
 * oryginalne rotory, ich kopie, oryginalny kadłub, jego kopię,
 * i rysowaną scieżkę. 
 */
class Drone: public Solid, public Obstacles /* :public Obstacles*/{
public:
    int id;
    double angle;
    std::vector <Vector3D> pathr;
    //PzG::LaczeDoGNUPlota  &Lacze;
    Cuboid org;
    Cuboid cpy;
    Prism orgw[4];
    Prism cpyw[4];
    Matrix3x3 rot;
    Vector3D path;
    //Vector3D mid;
    //std::string type="Dron";
    double angler=0;
    

    
Drone();
/*! 
* Konstruktor parametryczny klasy Surface
*/
    Drone(int id,PzG::LaczeDoGNUPlota  &Lacze, Vector3D position);
/*! 
* Metoda odpowiedzialna za zapis 
*/
    void save();
/*! 
* Metoda odpowiedzialna za sterowanie dronem
*/
    //void manipulate();
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


    virtual Vector3D getmid() /*const*/ override {return mid;}

    virtual std::string getname() override {return name;}

   // bool canland(  Scene &Scn );

   virtual bool istherecolision(double rad, Vector3D midb) override{
       std::cout<<midb[0]<<" "<<this->mid[0]<<" "<<midb[1]<<" "<<this->mid[1]<<" "<<rad<<" "<<this->oradius<<std::endl;
     if (sqrt(pow((midb[0]-this->mid[0]),2)+pow((midb[1]-this->mid[1]),2))<=rad+this->oradius) {return true;}
     else {return false;} 
 }


virtual Vector3D getbmid() /*const*/override {return bmid;}
};