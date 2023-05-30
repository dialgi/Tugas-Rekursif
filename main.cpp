#include <iostream>

using namespace std;

int Tambah(int x,int y){
    if(x!=0)
        return 1+Tambah(x-1,y);
    if(y!=0)
        return 1+Tambah(x,y-1);
    else
        return 0;
}

int Kurang(int x,int y){
    if(y==0)
        return x;
    else
        return -1+Kurang(x,y-1);
}

int Kali(int x,int y){
    if(y==1)
        return x;
    else
        return x+Kali(x,y-1);
}

int Bagi(int x, int y){
    if(x<y)
        return 0;
    else
        return 1+Bagi(x-y,y);
}

int Pangkat(int x,int y){
    if(y==1)
        return x;
    else
        return x*Kali(x,y-1);
}
int main()
{
    cout << Tambah(5,6) << endl;
    cout << Kurang(0,8) << endl;
    cout << Kali(4,6) << endl;
    cout << Bagi(8,2) << endl;
    cout << Pangkat(2,5) << endl;
    return 0;
}
