#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variabel inputan n

void input() 
{
    // Prodecure Input
    while (true)
    {
        
        if (n <= 20)
        {
            // Membuat Kondisi n tidak Lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
        }
    }

    cout << endl; // Membuat jarak per baris program
    cout << "=====================" << endl; // Membuat tampilan susunan data elemen array
    cout << " Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        // Menggunakan perulangan for untuk menyimpan data pada array
        cout << "Data ke-" << (i + 1) << " : "; // Memasukan atau menginput nilai data n
        cin >> arr[i]; // Menyimpan nilai data ke dalam array arr
    }
}

void insertionSort()
{
    // Prodecure InsertionSort
    int temp; // Membuat variabel data temporer atau penyimpanan sementara
    int i,j; // Membuat variabel j sebagai penanda

    for (i = 1; i <=n - 1; i++)
    {
        // Step 1
        temp = arr[i]; // Step 2
        j = i - 1; // Step 3

        while (j >= 0 && arr[j] > temp) // Step 4
        {
            arr[j + 1] = arr[j]; //Step 4a
            j--; // Step 4b
        }

        arr[j + 1] = temp; // Step 5
    }
}

void display() 
{
    cout << endl; // Output baris Kosong
    cout << "====================" << endl;
    cout << "Total Passes = " << n - 1 << endl; // Count element movement
    cout << "====================" << endl; // Output ke layar
    cout <<"Element Array yang telah tersusun" << endl; // Output ke layar
    cout << "====================" << endl; // Output ke layar

    for (int j = 0; j < n; j++)
    {
        // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // Output ke layar
    }

    cout << endl; // Output baris kosong
}

int main()
{
    input();
    insertionSort();
    display();
    system("Pause");
    return 0;
}



