//perkalian 2 bilangan
#include <iostream>

using namespace std;

int a,b;

int perkalian(int a, int b){
    int j = a * b;

    return j;
}

int main()
{
    cout << "Masukan Angka Pertama : ";
    cin >> a;
    cout << "Masukan Angka Kedua : ";
    cin >> b;
    cout << "Hasil Perkalian " << a << " x " << b << " Adalah " << perkalian(a,b);
    return 0;
}
