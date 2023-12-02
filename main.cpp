#include <iostream>
#include <conio.h>

using namespace std;

//deklarasi variabel global

struct tumpukan
{
    int top, maks, mins;
    int data [5];
};

tumpukan tumpuk;

void inisialisasi ()
{
    tumpuk.top = -1;
    tumpuk.mins = 0;
    tumpuk.maks = 4;
}

bool isEmpty ()
{
    if (tumpuk.top < tumpuk.mins)
        return true;
    else
        return false;
}

bool isFull ()
{
    if(tumpuk.top == tumpuk.maks)
        return true;
    else
    return false;
}

void push ()
{
    if (isFull())
        cout << "Tumpukan Penuh !!!"<<endl;
    else{
        int bil;
        cout << "Masukkan Sebuah Bilangan : ";
        cin >> bil;
        tumpuk.top++;
        tumpuk.data[tumpuk.top] = bil;
        cout << "Bilangan " <<bil;
        cout << " Berada pada Elemen ke- "<<(tumpuk.top+1);
        cout << endl;
    }
}

void pop ()
{
    if (isEmpty())
        cout << "Tumpukan Kosong !!!" <<endl;
    else
    {
        cout << "Data yang Dikeluarkan Adalah : ";
        cout << tumpuk.data[tumpuk.top];
        cout << " Pada Elemen ke- " <<(tumpuk.top +1)<<endl;
        tumpuk.top--;
    }
}

void cetak ()
{
    if(isEmpty())
        cout << "Tumpukan Kosong !!!" <<endl;
    else
    {
        for (int i=tumpuk.mins; i <= tumpuk.top; i++)
        {
            cout << tumpuk.data[i] << " ";
        }
    }

}


int main()
{
    int pilihan;
    inisialisasi();

    do {

        system("cls");
        cout << "Posisi TOP : " <<tumpuk.top<<endl;
        cetak();
        cout<<endl;
        cout << "----------------------"<<endl;
        cout << "ALGORITMA LIFO (STACK)"<<endl;
        cout << "----------------------"<<endl;
        cout << " 1. Push "<<endl;
        cout << " 2. Pop "<<endl;
        cout << " 3. Print "<<endl;
        cout << " 4. Keluar "<<endl;
        cout << "----------------------"<<endl;
        cout << "Pilihan Anda : "<<endl;
        cin >> pilihan;
        switch (pilihan)
        {
            case 1: {push(); break;}
            case 2: {pop(); break;}
            case 3: {cetak(); break;}
            case 4:
                {
                 cout <<endl;
                 cout << "Terima Kasih Telah Menggunakan Program Ini" <<endl;
                break;

                }
                default: {
                cout << "Tidak Ada dalam Pilihan Menu !!!" <<endl;
                break;
                }

        }
        getch();
    }while(pilihan!=4);
    return 0;
}
