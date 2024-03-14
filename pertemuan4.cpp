

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
void insertionsort() {                                  //Procedure Inserttionsort

    int temp;                                           //membuat variable data temporer atau penyimpanan sementara
    int i, j;                                           //Membbuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) {                      //1. looping dengan i dimulai dari 1 hingga n-1


        temp = arr[i];                                  //2. simpan nilau arr[1] ke variable sementara temp

        j = i - 1;                                      //3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp)                 //4. looping while dimana nilai j lebih besar sama dengan 0 dan
        {                                               //arr[j] lebih besar daripada temp
            arr[j + 1] = arr[j];                        //4.a simpan arr[j] ke dalam variable arr[j+1]
            j--;                                        // 4.b derement nilai j by 1
        }

        arr[j + 1] = temp;                              //5 simpan nilai temp kedalam arr[j+1]

        cout << "\nPass " << i << ": ";                 //output ke layar
        for (int k = 0; k < n; k++) {                   // loopqing nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";                      //output ke layar
        }
    }
}
void display() {                //procedure display
    cout << endl;                                           //Output ke baris kosong
    cout << "\n================================" << endl;   //Output ke layar
    cout << " Element Array yang telah tersusun" << endl;   //Output ke layar
    cout << "==================================" << endl;   //Output ke layar

    for (int j = 0; j < n; j++) {                           //looping dengan j dimulai dari 0 hinigga n-1
        cout << arr[j] << endl;                             //output ke layar
    }
    cout << endl;                                           //output baris kosong

}
int main()
{

    input();                        //Memanggil input
    insertionsort();                //Memanggil insertionsort
    display();                      //Memanggil display
}

