#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    cout<<"Nhap x = ";cin>>x;
    if(x>3){
    	cout<<"Ket qua: "<<(1+sqrt(x))/(x-3);
	}
	else{
		cout<<"Bieu thuc khong xac dinh";
	}
}


