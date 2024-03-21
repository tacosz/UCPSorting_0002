// 1. bubble short:
// - set pass = 1
// - repeat step 3 varying j from 0 to n - 1 - pass
// - jika indeks j lebih besar dari elemen di indeks j+1, pindah ke elemen ke-2
// - increment pass by 1
// - if pass <= n-1, kelangkah 2

// 2. shell sort:
// - awal kita pecah menjadi 3 bagian agar mudah untuk mengurutkan
// - kembalikan lagi seperti semula
// - pecah kembali menjadi 2 bagian, agar urut semua angka
// - dikembalikan lagi menjadi 1 bagian

// 3. insertion sort: hanya melakukan 1 kali perbandingan, jumlah langkah untuk mengurutkan insertion sort (n-1) langkah.


#include <iostream>
using namespace std;

int nabil[2];
int n;

void input()
{
    while (true) 
    {
        cout << "Masukkan banyak elemen pada array : ";
        cin >> n;
        if (n <= 2)
            break;
        else
        {
            cout << "Array dapat mempunyai maksimal 2 elemen" << endl;
        }
    }
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;    //output menampilkan "Masukkan elemen array"
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke- " << (i + 1) << " : ";
        cin >> nabil[i];
    }
}

void selectionsort()
{
    int i, j, min_idx;

    for (j = 0; j < n - 2; j++)
    {
        min_idx = j;
        for (i = j + 1; j < n - 1; j++) 
        {
            if(nabil[j] < nabil[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap (nabil[min_idx], nabil[i]);
    }
        
    
}

void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    
    for (int j = 0; j < n; j++)
    {
        cout << nabil[j];
        if (j < n - 1)
        {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    selectionsort();
    display();
    system("pause");

    return 0;
}
