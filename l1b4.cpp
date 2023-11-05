#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x;
	int a0,a1,a2,a3,a4;
    cout<<"Nhap X = ";cin>>x;
    cout<<"Nhap A0 = ";cin>>a0;
    cout<<"Nhap A1 = ";cin>>a1;
    cout<<"Nhap A2 = ";cin>>a2;
    cout<<"Nhap A3 = ";cin>>a3;
    cout<<"Nhap A4 = ";cin>>a4;
    float f= a0+(a1*x)+(a2*pow(x,2))+(a3*pow(x,3))+(a4*pow(x,4));
    cout<<"f(x) = "<<f;
}


