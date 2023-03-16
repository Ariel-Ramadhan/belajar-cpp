//menghitung total elemen dalam array
#include <iostream>

using namespace std;

int ukuran;
int arraku[] = {2, 3, 4, 5, 6, 1, 3, 8};

int main()
{
    ukuran = sizeof(arraku)/sizeof(arraku[0]);
    cout << "Banyak Elemen dalam Array adalah " << ukuran << endl;

    return 0;
}
