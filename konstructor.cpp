#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
        int nim;
        string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int inim, string inama);
        void cetak();
};
mahasiswa:: mahasiswa(){
    nim =0;
    nama ="";
}

mahasiswa ::mahasiswa(int inim){
    nim=inim;
}
mahasiswa ::mahasiswa(string inama){
    nama=inama;
}
mahasiswa ::mahasiswa(int inim, string inama){
    nim=inim;
    nama=inama;
}