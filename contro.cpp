#include<bits/stdc++.h>
using namespace std;


void dem(int *p){
	
}
int main(){
	int *p= new int [10];
	for(int i=0; i<10;i++){
		cout<<"Nhap "<<i+1<<" :";cin>>p[i];
	}
	int lonnhat=*p;
	int nhonhat=*(p+2);
	for(int i=0;i<10;i++){
		if(p[i]>lonnhat){
			lonnhat=p[i];
		}else{
			if(p[i]<lonnhat)
		    nhonhat=p[i];
		}
	}
	for(int i=0;i<10;i++){
		
	}
	cout<<"So lon nhat trong day la"<<lonnhat<<"\nSo nho nhat trong day la:"<<nhonhat;
}

	



