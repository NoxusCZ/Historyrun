#include <iostream>
#include <string>

using namespace std;

struct Postava {
    string jmeno;
    int maxHp, hp, maxMana, mana, utok, zlato, level, exp;
};

int main() {
    char vstup;
    int vyber;
    Postava hrac;
    cout << "------------- Ahoj, vitej v me hre! -------------\n";
    cout << "Chces zacit? (y/n): ";
    cin >> vstup;
    if (vstup == 'y' || vstup == 'Y') {
    cout << "Vyborne! Vitej ve stredoveku...\n";
    cout << "\nVyber si svou tridu:\n";
    cout << "1) Lupic\nHP: 25, Max Mana: 10, Utok: 35\n";
    cout << "2) Mag\nHP: 30, Max Mana: 30, Utok: 15\n";
    cout << "Tvoje volba: ";
    cin >> vyber;

    if (vyber == 1) { //UDĚLEJ RYBÁŘ, KRÁL A RYTÍŘ JEŠTĚ
    hrac.jmeno = "Lupic";
    hrac.maxHp = 25;
    hrac.hp = 25;
    hrac.maxMana = 10;
    hrac.mana = 10;
    hrac.utok = 35;
    hrac.zlato = 10;
    hrac.level = 1;
    hrac.exp = 0;

    cout << "\nZvolil jsi: LUPIC\n";
    cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
else if (vyber == 2) {
    hrac.jmeno = "Mag";
    hrac.maxHp = 30;
    hrac.hp = 30;
    hrac.maxMana = 30;
    hrac.mana = 30;
    hrac.utok = 15;
    hrac.zlato = 5;
    hrac.level = 1;
    hrac.exp = 0;

cout << "\nZvolil jsi: MAG\n";
cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
    }

}
