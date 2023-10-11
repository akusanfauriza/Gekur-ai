// Import Library
#include<iostream>
#include <fstream>
#include <string.h>

using namespace std;

// Main Program
int main(){
    // Variabel
    char pilihan, jenis_k;
    string nama;
    double usia, bb, tb, bmi, bmr_p, bmr_w;

    // Clear Screen
    system("clear");

    // Output masukan nama
    cout<<"Masukan nama anda : ";
    // Input ke variabel nama
    getline(cin, nama);

    // Clear Screen
    system("clear");

    // Ouput Pilih Jenis Kelamin 
    cout<<"Jenis Kelamin";
    cout<<"\n1. Pria";
    cout<<"\n2. Wanita";
    cout<<"\n3. Non Biner";
    cout<<"\nHalo "<<nama<<" ! Silahkan masukan jenis kelamin anda (1/2/3) : ";
    // Input Jenis Kelamin
    cin>>jenis_k;

    // Clear Screen
    system("clear");

    // Input Usia
    cout<<"Berapa usia anda : ";
    cin>>usia;

    // Newline
    cout<<"\n";

    // Input Berat Badan
    cout<<"Berapa berat badan anda (kg) : ";
    cin>>bb;

    // Newline
    cout<<"\n";

    // Input Tinggi Badan
    cout<<"Berapa tinggi badan anda (cm) : ";
    cin>>tb;

    // Rumus BMI dan BMR
    bmi = bb / ((tb/100)*(tb/100));                                     // BMI
    bmr_p =  88.362 + (13.397 * bb) + (4.479 * tb) - (5.677 * usia);    // BMR Pria
    bmr_w = 447.593 + (9.247 * bb) + (3.098 * tb) - (4.330 * usia);     // BMR Wanita

    // Clear Screen
    system("clear");

    cout<<"Nama "<<nama;
    cout<<"\nJenis Kelamin "<<jenis_k;
    cout<<"\nUsia anda "<<usia;
    cout<<"\nBerat anda "<<bb<<" kg";
    cout<<"\nTinggi anda "<<tb<<" cm";
    cout<<"\nBMI anda adalah "<<bmi;

    // Newline
    cout<<"\n";

}