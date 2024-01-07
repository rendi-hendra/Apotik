#include <iostream>
#include<string.h>
#include <algorithm>
using namespace std;

// Array
string obat[3] = {"antimo", "paramex", "tolak-angin"};
int harga[3] = {5000, 3000, 6000};

void listObat () {
    for(int i = 0; i < sizeof(obat) / sizeof(string); i++) {
        cout << i+1 << "." << obat[i] << " Harga: " << harga[i] << endl;
    }

    cout << endl;
}

void findObat () {
    string getObat;
    int arrObat;
    bool found = false;

    cout << "Silakan Masukan Obat Yang Mau Di Cari: ";
    cin >> getObat;
    transform(getObat.begin(), getObat.end(), getObat.begin(), ::tolower);


    for(int i = 0; i < sizeof(obat) / sizeof(string); i++) {
        if (obat[i] == getObat) {
            found = true;
            arrObat = i;
            break;
        }
    }

    if(found){
        cout << endl;
        cout << "Nama: " << obat[arrObat] << endl;
        cout << "Harga: " << harga[arrObat] <<endl;
        cout << endl;
    }else {
        cout << endl;
        cout << "Obat Tidaa Ada!" << endl;
        cout << endl;
    }
}

int main () {
    // Type Data
    //  Variabel
    string command;

    cout << "========== Apotek ==========" << endl;

    // Perulangan
    while (true) {

        cout << "Perintah(list, find, exit): ";

        cin >> command;
        transform(command.begin(), command.end(), command.begin(), ::tolower);

        // Percabangan
        if(command == "list"){
            cout << endl;
            listObat();
        } else if (command == "find") {
            cout << endl;
            findObat();
        } else if (command == "exit") {
            cout << "Exit";
            break;
        } else {
            cout << "Perintah Yang Anda Masukan Tidak Valid" << endl;
        }

    }

    return 0;
}
