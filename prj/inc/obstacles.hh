# pragma once

/*!
 * \file
 * \brief Definicja klasy Obstacles
 * 
 * Plik zawiera definicję klasy Obstacles
 */


#include "../inc/lacze_do_gnuplota.hh"




/*!
 * Obstacles zawiera:  łącze do gnuplota, 
 */
class Obstacles { 
public:

    
    PzG::LaczeDoGNUPlota  &Lacze;
    


/*! 
* Konstruktor parametryczny klasy Obstacles
*/
Obstacles(PzG::LaczeDoGNUPlota  &Lacze):Lacze(Lacze) { };

 























/*
    int nr;
    PzG::LaczeDoGNUPlota  &Lacze;
    int nextr=0, nextf=0, nextp=0;
    Flat fla2;
    Ridge rid2;
    Peak pea2;
    Drone p;
    

public:
Obstacles (int id,PzG::LaczeDoGNUPlota  &Lacze, Vector3D position);*/
/*! 
* Konstruktor bezparametryczny klasy Obstacles
*/
//Obstacles ();
/*! 
* Konstruktor parametryczny klasy Obstacles
*/
//Obstacles(int nr,int next, PzG::LaczeDoGNUPlota  &Lacze,Vector3D dimensions, Vector3D position);

/*! 
* Metoda dostępowa, zwraca środek 
*/
 // Vector3D getmid();
/*! 
* Metoda dostępowa, zwraca typ
*/
 // std::string gettype();
/*! 
* Metoda dostępowa, zwraca nazwę
*/
//  std::string getname();
};