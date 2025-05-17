#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setiD();
        void printALL();

        static void setnim(int pNim){nim=pNim; /*definisi fuction*/}
        static int getnim(){return nim; /*definisi fuction*/}

        mahasiswa(string pnama):nama(pnama){setiD();}
};
int mahasiswa::nim=0;

void mahasiswa::setiD(){
    id = ++nim;
}

void mahasiswa::printALL(){
    cout <<"ID  =  "<<id<<endl;
    cout <<"Nama = "<<nama<<endl;
    cout <<endl;
}