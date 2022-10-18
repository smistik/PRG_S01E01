#include "iostream"

using namespace std;

int main(){
    cout << "Nazev ulohy: Vypocet prumerne denni teploty\n" << endl;
    float t1;  //teplota v 6 hodin ráno
    float t2;  //teplota v 12 hodin
    float t3;  //teplota v 18 hodin
    cout << "Zadej teplotu v 6,00 hodin: ";
    cin >> t1;
    cout << "Zadej teplotu ve 12,00 hodin: ";
    cin >> t2;
    cout << "Zadej teplotu v 18,00 hodin: ";
    cin >> t3;
    cout << "Prumerna teplota je " << t1+t2+t3+t3/4 << " stupnu.\n";
    return 0;
}