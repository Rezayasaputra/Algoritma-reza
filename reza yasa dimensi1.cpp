#include<iostream>
using namespace std;

int main(){

    string nama[5];
    int usia[5];
    string prodi[5];

    for (int i = 0; i<= 4; i++ ){
        cout << " nama mahasiswa [" << i + 1 << "]=";
        cin >> nama[i];
    }cout << " " << endl;

    for (int j = 0; j<= 4; j++ ){
        cout << " usia [" << j + 1 << "]=";
        cin >> usia[j];
    }cout << " " << endl;

    for (int k = 0; k<= 4; k++ ){
        cout << " prodi [" << k + 1 << "]=";
        cin >> prodi[k];
    }cout << " " << endl;

    int l;
    cout << " \n masukan nomor indeks = " << endl;
    cin >> l;
    cout << " \n nama mahasiswa [" << l << "]= " << nama[l -1] << endl;
    cout << " usia [" << l << "]=" << usia[l -1] << endl;
    cout << " prodi [" << l << "]=" << prodi[l -1] << endl;


   return 0;
}
