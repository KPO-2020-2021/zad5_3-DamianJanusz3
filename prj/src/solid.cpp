/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Solid
 */
#include "solid.hh"





//Solid::Solid():Lacze(Lacze) {Vector3D tmp; nr=0; mid=tmp; name=" "; dimen=tmp; type="obiekt niezidentyfikowany";}
 /*! 
* Operator indeksowania klasy Solid. 
* \param[in]  - index -indeks,                
* Zwraca dany wierzchołek  
*/
Vector3D &Solid::operator[](int index){

return vert[index];
}

 /*! 
* Operator indeksowania const klasy Solid. 
* \param[in]  - index -indeks,                
* Zwraca dany wierzchołek jako stała 
*/
Vector3D Solid::operator[](int index)const{
return vert[index];

}

/*! 
* Metoda odpowiedzialna za ustawianie środka     
* \param[in]  - mid -srodek,                                              
* Przypisuje odpowiedniej zmiennej z klasy, srodek podany w argumencie 
*/
void Solid::setmid (Vector3D mid){
this->mid=mid;
}

/*! 
* Metoda odpowiedzialna za ustawianie nazwy     
* \param[in]  - name -nazwa,                                              
* Przypisuje odpowiedniej zmiennej z klasy nową nazwę pliku
* podaną w argumencie  
*/
void Solid::setname (std::string name){
this->name=name;
}

/*! 
* Metoda odpowiedzialna za zwracanie środka     
* \param[in]  - brak,                                              
* Funkcja dostępowa do środka, zwraca środek bryły  
*/
//Vector3D Solid::getmid() const{
//return mid;
//}

/*! 
* Metoda odpowiedzialna za zwracanie nazwy     
* \param[in]  - brak,                                              
* Funkcja dostępowa do nazwy, zwraca nazwę  
*/
//std::string Solid::getname() const{
//return name;
//}

/*! 
* Metoda odpowiedzialna za przesuwanie bryły    
* \param[in]  - mov -wektor przesunięcia,                                              
* Przesuwa bryłę o zadany wektor  
*/
void Solid::move (Vector3D mov){

for (int i=0; i<(int)vert.size(); ++i) {
    vert[i]=vert[i]+mov;
}
mid=mid+mov;
}

/*! 
* Metoda odpowiedzialna za translację bryły    
* \param[in]  - rot -macierz rotacji,                                              
* Obraca bryłę zgodnie z macierzą rotacji  
*/
void Solid::translate (Matrix3x3 rot){

for (int i=0; i<(int)vert.size(); ++i) {
    vert[i]=(rot*vert[i]);
}
mid=rot*mid;
}

/*! 
* Metoda odpowiedzialna za zapis wierzchołków    
* \param[in]  - brak,                                              
* Zapisuje współrzędne wierzchołków do pliku 
*/
 void Solid::save() {
     
     std::fstream file;
     double tab[]={0,0,(dimen)[2]/2};
     Vector3D movemid(tab);
     file.open(name, std::ios::out);

     for (int i=0; i<(int)vert.size(); i+=2) {

     file<<mid+movemid<<std::endl;
     for (int j=0; j<2; j++) {
         file<<vert[j+i]<<std::endl;
     }
     file <<mid-movemid <<std::endl<<std::endl;

     }
     file<<mid+movemid<<std::endl;
     for (int k=0; k<2; ++k){
         file<<vert[k]<<std::endl;
     }
     file << mid-movemid <<std::endl <<std::endl;
     file.close();
 }