#include <iostream>
#include <string>
using namespace std;

struct Postava {
    string jmeno;
    int maxHp, hp, maxMana, mana, utok, zlato, level, xp;
};

int main() {
    char vstup;
    int vyber;
    Postava hrac;
    int vyber.mista = 0;

    cout << "------------- Ahoj, vitej v me hre! -------------\n";
    cout << "Chces zacit? (y/n): ";
    cin >> vstup;

    if (vstup == 'y' || vstup == 'Y') {
        cout << "Vyborne! Vitej ve stredoveku...\n";
        cout << "\nVyber si svou tridu:\n";
        cout << "1) Lupic\nHP: 25, Max Mana: 10, Utok: 35\n";
        cout << "2) Mag\nHP: 20, Max Mana: 50, Utok: 15\n";
        cout << "3) Rybar\nHP: 30, Max Mana: 15, Utok: 28\n";
        cout << "4) Rytir\nHP: 45, Max Mana: 15, Utok: 25\n";
        cout << "5) Kral\nHP: 25, Max Mana: 35, Utok: 20\n";
        cout << "Tvoje volba: ";
        cin >> vyber;

        if (vyber == 1) {
            hrac.jmeno = "Lupic";
            hrac.maxHp = 25;
            hrac.hp = 25;
            hrac.maxMana = 10;
            hrac.mana = 10;
            hrac.utok = 35;
            hrac.zlato = 10;
            hrac.level = 1;
            hrac.xp = 0;
            cout << "\nZvolil jsi: LUPIC\n";
            cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
        else if (vyber == 2) {
            hrac.jmeno = "Mag";
            hrac.maxHp = 20;
            hrac.hp = 20;
            hrac.maxMana = 50;
            hrac.mana = 50;
            hrac.utok = 15;
            hrac.zlato = 5;
            hrac.level = 1;
            hrac.xp = 0;
            cout << "\nZvolil jsi: MAG\n";
            cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
        else if (vyber == 3) {
            hrac.jmeno = "Rybar";
            hrac.maxHp = 30;
            hrac.hp = 30;
            hrac.maxMana = 15;
            hrac.mana = 15;
            hrac.utok = 28;
            hrac.zlato = 8;
            hrac.level = 1;
            hrac.xp = 0;
            cout << "\nZvolil jsi: RYBAR\n";
            cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
        else if (vyber == 4) {
            hrac.jmeno = "Rytir";
            hrac.maxHp = 45;
            hrac.hp = 45;
            hrac.maxMana = 15;
            hrac.mana = 15;
            hrac.utok = 25;
            hrac.zlato = 12;
            hrac.level = 1;
            hrac.xp = 0;
            cout << "\nZvolil jsi: RYTIR\n";
            cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
        else if (vyber == 5) {
            hrac.jmeno = "Kral";
            hrac.maxHp = 25;
            hrac.hp = 25;
            hrac.maxMana = 35;
            hrac.mana = 35;
            hrac.utok = 20;
            hrac.zlato = 20;
            hrac.level = 1;
            hrac.xp = 0;
            cout << "\nZvolil jsi: KRAL\n";
            cout << "Staty: HP: " << hrac.hp << ", Utok: " << hrac.utok << ", Mana: " << hrac.mana << endl;
        }
        else {
            cout << "\nNespravna volba! Zvol cislo 1-5.\n";
        }   cout << "Jsi" hrac.jmeno << "můžes jít do dungeonu nebo do vesnice co si vyberes? (1/2): "
        if (vyber.mista == 1)
            cout << "-------------Vitej ve vesnici Oglokoma-----------/n"
            cout << "HP: " hrac.hp << "/" hrac.maxHp << ", Zlato: " hrac.zlato << ", Mana: " hrac.mana << "/" hrac.maxMana << " ,Utok: " hrac.utok << ", Level: " hrac.level;
            cout << "Muzes si uprgadovat armor ktery stoji 2xp a 5 zlaza"
            cout << "Muzes si uprgadovat mec ktery stoji 2xp a 5 zlata"
            cout << "Muzes si se naucit nove kouzlo"
    }
    else {
        cout << "Na shledanou!\n";
    }

    return 0;
}
