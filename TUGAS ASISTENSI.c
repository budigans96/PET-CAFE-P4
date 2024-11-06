#include <iostream>
#include <string>

// Struct untuk cetak biru karakter
struct Karakter {
    std::string nama;
    int energi;
    int kasih;
};

// Fungsi untuk simulasi mengelus, menambah atribut kasih
void elus(Karakter &hewan) {
    std::cout << "Kamu mendapatkan kasih dari " << hewan.nama << "\n";
    hewan.kasih += 10;
}

// Fungsi untuk simulasi melompat, mengurangi energi dan tidak mengubah kasih
void lompat(Karakter &karakter) {
    std::cout << karakter.nama << " sedang melompat!\n";
    karakter.energi -= 20;
}

// Fungsi untuk simulasi makan, menambah kasih dan energi
void makan(Karakter &karakter) {
    std::cout << karakter.nama << " sedang makan!\n";
    karakter.kasih += 10;
    karakter.energi += 10;
}

// Fungsi untuk simulasi lari, mengurangi energi dan tidak mengubah kasih
void lari(Karakter &karakter) {
    std::cout << karakter.nama << " sedang berlari!\n";
    karakter.energi -= 30;
}

// Fungsi untuk menampilkan atribut dari karakter
void tampilkanAtribut(const Karakter &karakter) {
    std::cout << "Energi " << karakter.nama << " adalah " << karakter.energi << std::endl;
    std::cout << "Kasih " << karakter.nama << " adalah " << karakter.kasih << std::endl;
}

int main() {
    // Mendefinisikan karakter
    Karakter budi = {"budi", 100, 50};  // Karakter manusia
    Karakter hasty = {"hasty", 70, 30};     // Karakter kelinci

    // Loop utama simulasi
    std::string perintah;
    while (true) {
        std::cout << "\nMasukkan perintah (ELUS hasty, LOMPAT hasty, MAKAN hasty, LARI hasty, ATRIBUT <nama_karakter>, atau KELUAR): ";
        std::getline(std::cin, perintah);

        if (perintah == "ELUS hasty") {
            elus(zeus);
        } else if (perintah == "LOMPAT hasty") {
            lompat(zeus);
        } else if (perintah == "MAKAN hasty") {
            makan(zeus);
        } else if (perintah == "LARI hasty") {
            lari(zeus);
        } else if (perintah == "ATRIBUT budi") {
            tampilkanAtribut(bagas);
        } else if (perintah == "ATRIBUT hasty") {
            tampilkanAtribut(zeus);
        } else if (perintah == "KELUAR") {
            break;
        } else {
            std::cout << "Perintah tidak dikenal. Silakan coba lagi." << std::endl;
        }
    }

    return 0;
}