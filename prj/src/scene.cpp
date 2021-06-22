/*!
 * \file
 * \brief plik źródłowy
 * 
 * Plik zawiera wszystkie metody klasy Scene
 */
#include "scene.hh"

 /*! 
* Konstruktor bezparametryczny klasy Scene. 
* \param[in]  - brak,                
* Ustawia zakresy rysowania, tworzy płaszczyznę,
* losuje pozycje dla dronów i je roztawia, rozstawia pierwsze 4 przeszkody 
*/
Scene::Scene(){

Lacze.ZmienTrybRys(PzG::TR_3D);

Lacze.UstawZakresX(-400, 400);
Lacze.UstawZakresY(-400, 400);
Lacze.UstawZakresZ(-100, 400);

double tab1[3]={800,800,0};
Vector3D dimground(tab1);
ground=new Surface(dimground,30);
Lacze.DodajNazwePliku(ground->getname().c_str(),PzG::RR_Ciagly, 2);
ground->save();


double position[3]{(double)(rand()%510-200),(double)(rand()%510-200),30};
double position2[3]{(double)(rand()%510-200),(double)(rand()%510-200),30};
DLst.push_back(std::make_shared<Drone>(0,Lacze,Vector3D(position)));
DLst.push_back(std::make_shared<Drone>(1,Lacze,Vector3D(position2)));
for (std::shared_ptr<Drone> &obd : DLst) {
    obd->save();
}
//

//Lst.push_back(std::make_shared<Obstacles>(0,Lacze,Vector3D(position)));
//Lst.push_back(std::make_shared<Obstacles>(1,Lacze,Vector3D(position2)));//????????????????????


/////////////////
double x=100, y=100, z=100, k=50, l=50, i=-150, j=-250, zz=40, g=-300, h=200, m=50, n=-250;//, nr=1;
double place2[3]{k,l,z/2}; double wym2[3]{x,y,z}; 
double place3[3]{i,j,zz/2}; double wym3[3]{x,y,zz};
double place4[3]{g,h,zz/2}; double wym4[3]{x,y,zz};
double place5[3]{m,n,z/2}; double wym5[3]{x,y,z}; 
Vector3D a(place2);Vector3D d(wym2);
Vector3D a2(place3); Vector3D d2(wym3);
Vector3D a3(place4); Vector3D d3(wym4);
Vector3D a4(place5); Vector3D d4(wym5);

Lst.push_back(std::make_shared<Ridge>(ridgeamount,d,a)); ++ridgeamount;
Lst.push_back(std::make_shared<Flat>(flatamount,d2,a2)); ++flatamount;
Lst.push_back(std::make_shared<Peak>(peakamount,d3,a3)); ++peakamount;
Lst.push_back(std::make_shared<Peak>(peakamount,d4,a4)); ++peakamount;
for (std::shared_ptr<Solid> &ob1 : Lst) {
    Lacze.DodajNazwePliku(ob1->getname().c_str(),PzG::RR_Ciagly, 2);
    ob1->save();}
///////////////////

Lacze.Rysuj(); 
}

 /*! 
* Metoda draw     
* \param[in]  - brak,                                                 
* Rysuje w gnuplocie     
*/
void Scene::draw(){

Lacze.Rysuj();

}

 /*! 
* Metoda interface     
* \param[in]  - brak,                                                 
* odpowiedzialna za kontakt z użytkownikiem,
* posiada całe menu użytkownika    
*/
void Scene::interface(){

Vector3D vec;

std::cout<<"Program dragonfly - faza 1"<<std::endl<<std::endl;
std::cout<<"a - wybierz aktywnego drona"<<std::endl;
std::cout<<"p - zadaj parametry przelotu"<<std::endl;
std::cout<<"d - dodaj element powierzchni"<<std::endl;
std::cout<<"u - usuń element powierzchni"<<std::endl;
std::cout<<"m - wyswietl menu"<<std::endl<<std::endl;
std::cout<<"k - koniec dzialania programu"<<std::endl<<std::endl;

    char action;
    int r=0,num=0, /*nextr=1,nextf=1,nextp=2,*/ n=1, m=0;
    double x, y;
    Vector3D dimens;  
    Vector3D a;
    Vector3D midd;
    
    
    do {
    
    std::cout<<"Twoj wybor (m - menu):";
    std::cin>>action;
    switch (action){

        case 'a':
        std::cout<<"Wybor aktywnego drona"<<std::endl<<std::endl;
        std::cout<<"0 - pierwszy dron"<<std::endl;
        std::cout<<"1 - drugi dron"<<std::endl<<std::endl;

        std::cout<<"Wprowadz numer drona:";
        std::cin>>r;
            if(r<NR) {
                ;
            }
            else{
                std::cerr<<"brak drona o podanym numerze."<<std::endl;
                r=0;
            }
        break;

        case 'p':
        

        if (r==0) {it=DLst.begin(); it->get()->manipulate();}
        else if (r==1) { it=DLst.begin(); (++it)->get()->manipulate(); it=DLst.begin();} //////tu nie moge zmienić to może potem zawsze po 
        else {std::cerr<<"brak drona o podanym numerze."<<std::endl; r=0;}                  //wylądowaniu stawiać nowe drony na liście
        
        break;

        case 'd':
        std::cout<<"Wybierz rodzaj powierzchniowego elementu"<<std::endl<<std::endl;
        std::cout<<"1 - Gora z grania"<<std::endl;
        std::cout<<"2 - Plaskowyz"<<std::endl;
        std::cout<<"3 - Gora z ostrym sztytem"<<std::endl;
        std::cout<<"Wprowadz numer typu elementu> ";
        std::cin>>num;
        std::cout<<std::endl<<std::endl<<"Podaj scale wzdluz kolejnych osi OX, OY, OZ."<<std::endl;
        std::cout<<"Wprowadz skale: OX OY OZ> ";
        std::cin>>dimens;
        std::cout<<std::endl<<std::endl<<"Podaj wspolrzedne srodka podstawy x,y."<<std::endl;
        std::cout<<"Wprowadz wspolrzedne: x y>  ";
        std::cin>>x; std::cin>>y;
        a[0]=x; a[1]=y; a[2]=dimens[2]/2;
        

        
        if(num==1){Lst.push_back(std::make_shared<Ridge>(ridgeamount,dimens,a)); ++ridgeamount;}
        else if(num==2){Lst.push_back(std::make_shared<Flat>(flatamount,dimens,a)); ++flatamount;}
        else if(num==3){Lst.push_back(std::make_shared<Peak>(peakamount,dimens,a)); ++peakamount;}
        else {std::cerr<<"Nie ma bryły o takim numerze"<<std::endl;}

        for (std::shared_ptr<Solid> &ob2 : Lst) {
    Lacze.DodajNazwePliku(ob2->getname().c_str(),PzG::RR_Ciagly, 2);
    ob2->save();}

        break;


        case 'u':
        std::cout<<"Wybierz element powierzchni do usuniecia:"<<std::endl;
        
        for (std::shared_ptr<Solid> &ob : Lst) {
            std::cout<<"test2"<<std::endl;
            //if (ob->gettype()!="Dron"){
                std::cout<<"test"<<std::endl;
            midd=ob->getmid();
             std::cout<<midd<<std::endl;
            std::cout<<n<<" - ("<<midd[0]<<" "<<midd[1]<<") "<<ob->gettype()<<std::endl;
            
            ++n;
            //}
            //else {;}
        }
        iter = Lst.begin();
        std::cout<<"Podaj numer elementu> ";
        std::cin>>m;
        
        if (m<n && m>0) {
            
            advance(iter, m-1);////+1
            Lst.erase(iter);
        }
        else {std::cerr<<"nie ma przeszkody o tym numerze"<<std::endl;}
        deletename (Lacze);
        iter = Lst.begin();
        n=1;


        break;



        case 'm':
        std::cout<<"a - wybierz aktywnego drona"<<std::endl;
        std::cout<<"p - zadaj parametry przelotu"<<std::endl;
        std::cout<<"d - dodaj element powierzchni"<<std::endl;
        std::cout<<"u - usuń element powierzchni"<<std::endl;
        std::cout<<"m - wyswietl menu"<<std::endl<<std::endl;
        std::cout<<"k - koniec dzialania programu"<<std::endl<<std::endl;
        break;

        case 'k':
        std::cout<<"koniec działania programu"<<std::endl;
        break;

        default:
        break;
    }
    draw();
    std::cout<<std::endl;
  vec.vecamount(std::cout);
  std::cout<<std::endl;
    } while (action!='k');
}
 /*! 
* Destruktor bezparametryczny klasy Scene.      
* \param[in]  - brak,                                                 
* niszczy nieużywną już, dynamicznie alokowaną pamięć     
*/
Scene::~Scene()
 {
free (ground);

 }


/*! 
* Metoda odpowiedzialna za usuwanie nazwy pliku z gnuplota   
* \param[in]  - Lacze - łącze do gnuplota,                                              
* Usuwa wszystkie nazwy a następnie dodaje od początku wszystkie oprócz tej którą usunięto
*/
 void Scene::deletename ( PzG::LaczeDoGNUPlota  &Lacze) {
     Lacze.UsunWszystkieNazwyPlikow();
//dla 2 dronów ustawione na stałe
     Lacze.DodajNazwePliku("../datasets/body0.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/body1.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor00.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor01.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor02.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor03.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor10.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor11.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor12.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/rotor13.dat", PzG::RR_Ciagly, 2);
//dla innych elementów
     Lacze.DodajNazwePliku("../datasets/path.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/surface.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/cuboid.dat", PzG::RR_Ciagly, 2);
     Lacze.DodajNazwePliku("../datasets/prism.dat", PzG::RR_Ciagly, 2);
//dla pozostałych przeszkód
     for (std::shared_ptr<Solid> &ob2 : Lst) {
         Lacze.DodajNazwePliku(ob2->getname().c_str(), PzG::RR_Ciagly, 2);
     }

 }