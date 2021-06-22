/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Surface
 */
#include "surface.hh"

/*! 
* Konstruktor parametryczny klasy Surface.      
* \param[in]  - dimen -wymiary płaszczyzny,  
* \param[in]  - density -gęstość rozmieszczenia kratek, 
* \param[in]  - name -nazwa,                                              
* Tworzy za pomocą linii płaszczyznę 
*/
Surface::Surface(Vector3D dimen,int density){


double tab[3];
counter=0;
for (int i= -dimen[0]/2; i<dimen[0]/2; i+=density){

    for (int j= -dimen[1]/2; j<dimen[1]/2; j+=density){
    
        tab[0]=i;
        tab[1]=j;

        vert.push_back(tab);
    }
    counter++;
}
}

/*! 
* Operator indeksowania dla klasy Surface      
* \param[in]  - index -indeks,                                              
* Zwraca dany wierzchołek  
*/
Vector3D &Surface::operator[](int index)
{
    return vert[index];
}

/*! 
* Operator indeksowania dla klasy Surface cons     
* \param[in]  - index -indeks,                                              
* Zwraca dany wierzchołek jako stała 
*/
Vector3D Surface::operator[](int index) const
{
    return vert[index];
}

/*! 
* Metoda odpowiedzialna za ustawianie nazwy     
* \param[in]  - name -nazwa,                                              
* Przypisuje odpowiedniej zmiennej z klasy nową nazwę pliku
* podaną w argumencie  
*/
void Surface::setname(std::string name)
{
    this->name= name;
}

/*! 
* Metoda odpowiedzialna za zwracanie nazwy     
* \param[in]  - brak,                                              
* Funkcja dostępowa do nazwy, zwraca nazwę  
*/
std::string Surface::getname() const
{
    return name;
}

/*! 
* Metoda odpowiedzialna za zapis wierzchołków    
* \param[in]  - brak,                                              
* Zapisuje współrzędne wierzchołków do pliku 
*/
void Surface::save()
{
      std::fstream file;

    file.open(name, std::ios::out);
 for (int i = 0; i < (int)vert.size(); i++)
 {
   if(i%counter==0) {
   file<<std::endl;
   }
   file<<vert[i]<<std::endl;
 }
   
    file.close();
}