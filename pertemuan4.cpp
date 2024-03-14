

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
    cout << endl;                                       //membuat jarak perbaris program
    cout << "=====================" << endl;            //membuat tampilan susunan data element 
    cout << "Masukan Element Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)                         //Mengunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke-" << (i + 1) << ": ";          //Memasukan atau mennginput nilai data n
        cin >> arr[i];                                  //menyimpan nilai data n kedalam array arr
    }
}




