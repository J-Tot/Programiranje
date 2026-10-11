#include <iostream>
#include <cmath>

using namespace std;

bool jeParan(int broj){

return broj%2==0;
}


int apsolutnaVrijednost(int broj){

return abs(broj);

}
int kvadrat(int broj){
return broj*broj;

}
void ispisiAnalizu(int broj) {
    if (jeParan(broj)) {
        cout << "Broj je paran." << endl;
    } else {
        cout << "Broj je neparan." << endl;
    }

    cout << "Apsolutna vrijednost: "<< apsolutnaVrijednost(broj) << endl;

    cout << "Kvadrat broja: "<< kvadrat(broj) << endl;

}





int main()
{
int broj;
cout << "Unesi broj izmedu -100 i 100: ";
cin >> broj;
while (broj < -100 || broj > 100){
    cout << "Unesi broj izmedu -100 i 100: ";
    cin >> broj;
}

ispisiAnalizu(broj);


    return 0;
}
