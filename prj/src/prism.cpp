/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Prism
 */
#include "prism.hh"

 /*! 
* Konstruktor parametryczny klasy Prism.      
* \param[in]  - mid -środek graniastosłupa,   
* \param[in]  - z -wysokość graniastosłupa, 
* \param[in]  - radius -odległość od środka do wierzchołka,
* \param[in]  - name -nazwa,                                                
* wpisuje do kontenera wszystkie wierzchołki graniastosłupa
*/
Prism::Prism (Vector3D mid,double z, double radius,std::string name ) {

double tab[]={0,0,z};
dimen= Vector3D(tab);
   this->name=name;
    this->mid=mid;
    Vector3D vertex;
   
   
    vertex[0]=radius*cos(0*M_PI/180);
    vertex[1]=radius*sin(0*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(0*M_PI/180);
    vertex[1]=radius*sin(0*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(60*M_PI/180);
    vertex[1]=radius*sin(60*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(60*M_PI/180);
    vertex[1]=radius*sin(60*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(120*M_PI/180);
    vertex[1]=radius*sin(120*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(120*M_PI/180);
    vertex[1]=radius*sin(120*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(180*M_PI/180);
    vertex[1]=radius*sin(180*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(180*M_PI/180);
    vertex[1]=radius*sin(180*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(240*M_PI/180);
    vertex[1]=radius*sin(240*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(240*M_PI/180);
    vertex[1]=radius*sin(240*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(300*M_PI/180);
    vertex[1]=radius*sin(300*M_PI/180);
    vertex[2]=mid[2]+(z/2);
    vert.push_back(vertex);

    vertex[0]=radius*cos(300*M_PI/180);
    vertex[1]=radius*sin(300*M_PI/180);
    vertex[2]=mid[2]-(z/2);
    vert.push_back(vertex);
   

}