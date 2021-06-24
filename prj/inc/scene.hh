#pragma once

/*!
 * \file
 * \brief Definicja klasy Scene
 * 
 * Plik zawiera definicję klasy Scene
 */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <memory>
#include <list>

//#include "obstacles.hh"
//#include "solid.hh"/////?????????????
#include "ridge.hh"
#include "flat.hh"
#include "peak.hh"
#include "example.h"
#include "lacze_do_gnuplota.hh"
//#include "prism.hh"
#include "drone.hh"
#include "surface.hh"

#define NR 2

/*!
 * Scene zawiera liczniki poszczególnych przeszkód, łącze do gnuplota, listę dronów, listę przeszkód, ich iteratory, płaszczyznę. 
 */
class Scene {
int ridgeamount=0, flatamount=0, peakamount=0;
PzG::LaczeDoGNUPlota Lacze;
std::list<std::shared_ptr<Drone>> DLst;
std::list<std::shared_ptr<Drone>>::iterator it = DLst.begin();
Surface *ground;
std::list<std::shared_ptr<Solid>> Lst;
std::list<std::shared_ptr<Solid>>::iterator iter = Lst.begin();


public:
/*! 
* Konstruktor bezparametryczny klasy Cuboid 
*/
Scene();
/*! 
* Destruktor bezparametryczny klasy Cuboid
*/
~Scene();
/*! 
* Metoda rysująca elementy sceny
*/
void draw();
/*! 
* Metoda odpowiedzialna za cały interfejs
*/
void interface();
/*! 
* Metoda odpowiedzialna za usunięcie nazwy pliku z łącza 
*/
void deletename ( PzG::LaczeDoGNUPlota  &Lacze);

//std::list<std::shared_ptr<Solid>> getLst() const {return Lst;}
void manipulate1(Drone *tmp);

bool canland(  Drone *tmp ) ;
};