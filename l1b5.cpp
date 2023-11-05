#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float mieng, motTiet, hocKy;
    cout<<"Diem Mieng = ";cin>>mieng;
    cout<<"Diem Mot Tiet = ";cin>>motTiet;
    cout<<"Diem Hoc Ky = ";cin>>hocKy;
    float Tb= (mieng+motTiet*2+hocKy*3)/6;
    cout<<"Diem TB = "<<Tb;
}


