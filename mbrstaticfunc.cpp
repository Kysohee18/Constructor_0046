include <iostream>
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