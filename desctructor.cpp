#include <iostream>
using namespace std;

class angka {
    private:
        int *arr;
        int panjang;
    public:
        angka(int); //contructor
        angka(); //desctructor
        void cetakData();
        void isiData();
};
//definisi member fuction 
angka::angka(int i){ // contructor
    panjang = i;
    arr = new int[i];
    isiData();
}