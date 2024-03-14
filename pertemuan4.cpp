

#include <iostream>
using namespace std;

int arr[20];                                  //Membuat Array dengan panjang data 20
int n;                                        //Membuat Variable Inputan n

void input() {              //procedure input
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : ";    //Membuat Imputan jumlah element array
        cin >> n;                                       //Memanggil variable Inputan n

        if (n <= 20) {                                  // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang ada masukan maksimal 20 Elemen. \n";  //menampilkan pesan
        }
    }
   
