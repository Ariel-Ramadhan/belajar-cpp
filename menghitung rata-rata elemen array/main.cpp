#include <iostream>

using namespace std;

int inp[100], Narr, i;
float total=0, rata2;

void arr(int inp[100]){
    for(i = 0; i < Narr; i++);
}

int main()
{

    cout << "Input Jumlah Array : ";
    cin >> Narr;

    cout << "Input " << Narr << " Angka (dipisah enter) :" << endl;

    for(i = 0; i < Narr; i++){
        cin >> inp[i];
    }
    cout << endl;
    for(i=0;i<Narr;i++){
        total=total+inp[i];
    }
    rata2=total/Narr;

    cout << "Nilai rata-rata dari " << Narr << " inputan adalah " << rata2;
    return 0;
}
