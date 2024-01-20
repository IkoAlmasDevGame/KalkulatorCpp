#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    int pilihan;
    float number1,number2;
    float persen = 100;
    
    float scoreBagi;
    float scoreTambah;
    float scorePerkalian;
    float scorePangkat;
    float scorePersen;
    
    cout << "Pilih No Kalkulator\n1.Pertambahan\n2.Perkalian\n3.Pembagian\n4.Pangkat\n5.persenan" << endl;
    cout << "Pilih No Kalkulator : ";
    cin >> pilihan;
    
    switch(pilihan){
        case 1:
        cout << "masukkan angka pertama : ";
        cin >> number1;
        cout << "masukkan angka kedua : ";
        cin >> number2;
        
        scoreTambah = number1 + number2;
        cout << "Hasil : " << scoreTambah << endl;
        break;
        
        case 2:
        cout << "masukkan angka pertama : ";
        cin >> number1;
        cout << "masukkan angka kedua : ";
        cin >> number2;
        
        scorePerkalian = number1 * number2;
        cout << "Hasil : " << scorePerkalian << endl;
        break;
        
        case 3:
        cout << "masukkan angka pertama : ";
        cin >> number1;
        cout << "masukkan angka kedua : ";
        cin >> number2;
        
        scoreBagi = number1 / number2;
        cout << "Hasil : " << scoreBagi << endl;
        break;
        
        case 4:
        cout << "masukkan angka pertama : ";
        cin >> number1;
        cout << "masukkan angka kedua : ";
        cin >> number2;
        
        scorePangkat = pow(number1,number2);
        cout << "Hasil : " << scorePangkat << endl;
        break;
        
        case 5:
        cout << "masukkan angka pertama : ";
        cin >> number1;
        cout << "masukkan angka kedua : ";
        cin >> number2;
        
        scorePersen = number1 * number2 / persen;
        cout << "Hasil : " << scorePersen << endl;
        break;
        
        default:
        cout << "" << endl;
        cout << "Tidak terdapat pilihan yang anda" << endl;
        cout << "anda pilih ...." << endl;
        exit(0);
    }
    
    return 0;
}
