//Penjumlahan dua bilangan
#include <iostream>

using namespace std;

int a,b;

int tambah(int a, int b){
    int x = a + b;

    return x;
}
int main()
{
    cout << "Masukan Angka Pertama : ";
    cin >> a;
    cout << "Masukan Angka Kedua : ";
    cin >> b;

    cout << "Hasil Penjumlahan " << a << " + " << b << " Adalah "<< tambah(a,b);
    return 0;
}
