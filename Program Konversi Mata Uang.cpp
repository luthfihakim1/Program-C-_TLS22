/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    double rupiah, dollar;
    
    cout<<"==========================\n";
    cout<<"Program Konversi Mata Uang\n";
    cout<<"==========================\n";
    cout<<"Kurs per tanggal 28 September 2022 :\n1 Dolar Amerika Serikat = 15256 Rupiah Indonesia\n\n";
    cout<<"Pilih konverter yang Anda inginkan!\n";
    cout<<"\t1.Rupiah ke Dollar\n\t2.Dollar ke Rupiah";
    cout<<"\nMasukkan Pilihan : ";
    cin>>pilihan;
    
    if (pilihan==1){
        cout<<"\nJumlah Rupiah yang ingin Anda konversi : ";
        cin>>rupiah;
        dollar=rupiah/15256;
        cout<<"\nNilai Rupiah Anda dalam Dollar : "<<dollar<<" Dollar";
    }  
        else if(pilihan==2){
            cout<<"\nJumlah Dollar yang ingin Anda konversi : ";
            cin>>dollar;
            rupiah=dollar*15256;
            cout<<"\nNilai Rupiah Anda dalam Dollar : "<<rupiah<<" Rupiah";
        }
    return 0;
}