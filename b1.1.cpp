#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,w;
    cout<<"Nhap xau S: "; getline(cin,s);
    cout<<"Nhap xau W: "; getline(cin,w);
    int a= s.find(w);
    if(a!= string::npos){
    	cout<<"W xuat hien trong S o vi tri "<<a<<endl;
	}
	else{
		cout<<"W khong xuat hien trong S";
	}
    return 0;
    	
	}


