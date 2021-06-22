/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Obstacles
 */

#include "obstacles.hh"


//Obstacles::Obstacles(PzG::LaczeDoGNUPlota  &Lacze):Lacze(Lacze) { }











































/*Obstacles::Obstacles(int id,PzG::LaczeDoGNUPlota  &Lacze, Vector3D position):Lacze(Lacze) {
  this->p=Drone( id,Lacze,position);
  this->nr=4;
  //this->p=pa;
  //pa.save();
}*/
//Obstacles::Obstacles():Lacze(Lacze) {int d=3; nr=d;}
/*! 
* Konstruktor parametryczny klasy Obstacles. 
* \param[in]  - nr - numer wybrany przez użytkownika,   
* \param[in]  - next - numer porządkowy przeszkody danego typu,
* \param[in]  - Lacze -łącze do gnoplota,  
* \param[in]  - dimensions -wektor wymiarów przeszkody, 
* \param[in]  - position -wektor określający położenie drona, 
* w zależności od wybranego numeru tworzy odpowiednią przeszkodę, podaje ją do gnuplota 
* i zapisuje 
*/
/*Obstacles::Obstacles(int nr, int next,PzG::LaczeDoGNUPlota  &Lacze,Vector3D dimensions, Vector3D position):Lacze(Lacze){
double x=dimensions[0]; double y=dimensions[1]; double z=dimensions[2];
std::string name=" ";
this->nr=nr;
if (nr==1) {
  Ridge rid(position,x,y,z,name);
rid.setname("../datasets/rmountain"+std::to_string(nr)+std::to_string(next)+".dat");
Lacze.DodajNazwePliku(rid.getname().c_str(), PzG::RR_Ciagly, 2);

this->rid2=rid;
rid.save();

}
else if(nr==2) {
Flat fla(position,x,y,z,name);
fla.setname("../datasets/fmountain"+std::to_string(nr)+std::to_string(next)+".dat");
Lacze.DodajNazwePliku(fla.getname().c_str(), PzG::RR_Ciagly, 2);

this->fla2=fla;
fla.save();

}
else if(nr==3) {
  
Peak pea(position,x,y,z,name);
pea.setname("../datasets/pmountain"+std::to_string(nr)+std::to_string(next)+".dat");
Lacze.DodajNazwePliku(pea.getname().c_str(), PzG::RR_Ciagly, 2);

this->pea2=pea;
pea.save();

}
else{std::cout<<"_______________"<<std::endl;}

}
*/
/*! 
* Metoda odpowiedzialna za zwracanie środka odpowiedniej bryly    
* \param[in]  - brak,                                              
* Funkcja dostępowa do środka, zwraca środek wybranej bryły  
*/
/*Vector3D Obstacles::getmid() {
if (this->nr==1) {
  
  return rid2.getmid();
  }
else if (this->nr==2) {
  
  return fla2.getmid();
  }
else if (this->nr==3) {
  
  return pea2.getmid();
  }
  else if (this->nr==4) {
  
  return this->getmid();
  }
else {
  std::cerr<<"nie ma takiej figury!"<<std::endl;
  Vector3D b; return b;}
}
*/
/*! 
* Metoda odpowiedzialna za zwracanie typu    
* \param[in]  - brak,                                              
* Funkcja dostępowa do typu, zwraca typ  wybranej bryły  
*/
/*std::string Obstacles::gettype() {
  if (this->nr==1) {
  
  return rid2.gettype();
  }
else if (this->nr==2) {
  
  return fla2.gettype();
  }
else if (this->nr==3) {
  
  return pea2.gettype();
  }
  //////
else if (this->nr==4) {
  
  return this->gettype();
  }
  /////
else {std::string b="nie ma takiej figury?"; return b;}
}*/

/*! 
* Metoda odpowiedzialna za zwracanie nazwy     
* \param[in]  - brak,                                              
* Funkcja dostępowa do nazwy, zwraca nazwę wybranej bryły  
*/
/*std::string Obstacles::getname() {
  if (this->nr==1) {
  
  return rid2.getname();
  }
else if (this->nr==2) {
  
  return fla2.getname();
  }
else if (this->nr==3) {
  
  return pea2.getname();
  }
  /////
else if (this->nr==4) {
  
  return this->getname();
  }
  /////
else {std::string b="nie ma takiej figury?"; return b;}
}*/


