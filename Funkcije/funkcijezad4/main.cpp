#include <iostream>
#include <cmath>

using namespace std;

bool ispravanUnos(int bodovi, int maksimalnoBodova){

if(maksimalnoBodova>0 && bodovi>0 && bodovi<=maksimalnoBodova) {
        return true;

}
else return false;

}
double izracunajPostotak(int bodovi, int maksimalnoBodova){

return 100.0*bodovi/maksimalnoBodova;

}
int odrediOcjenu(double postotak){

    if (postotak < 50) return 1;
    if (postotak < 65) return 2;
    if (postotak < 80) return 3;
    if (postotak < 90) return 4;
    return 5;

}
void ispisiIzvjestaj(int bodovi, int maksimalnoBodova,
double postotak, int ocjena){


cout <<"bodovi "<<bodovi <<"/"<<maksimalnoBodova<< endl;
cout <<"postotak: " <<postotak<<"%"<<endl;
cout <<"Ocjena: " <<ocjena <<endl;




}





int main()
{
int bodovi,maksimalnoBodova;



cout << "Unesi ostvarene bodove: ";
cin >> bodovi;
cout << "Unesi maksimalne bodove: ";
cin >> maksimalnoBodova;

if (!ispravanUnos(bodovi,maksimalnoBodova)){
    cout <<"Pogrešan unos!" << endl;
    return 1;
}
double postotak =izracunajPostotak(bodovi,maksimalnoBodova);
int ocjena=odrediOcjenu(postotak);


ispisiIzvjestaj(bodovi, maksimalnoBodova,
postotak, ocjena);





    return 0;
}
