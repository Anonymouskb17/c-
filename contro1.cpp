#include<bits/stdc++.h>
using namespace std;


int *nhapMang(int *a, int &n) {
    cout << "Nhap n = "; cin >> n;
    a = new int[n];
    for(int i=0; i<n; i++) {
        cout << "arr[" << i << "] = "; cin >> *(a+i);
    }
    return a;
}
void xuatMang(int *a, int n) {
    for(int i=0; i<n; i++) {
        cout << *(a+i) << " ";
    }
}
int tong(int *a,int n){
	int tong =*(a+0);
	for(int i=0;i<n;i++){
		tong+=*(a+i);
	}
	return tong;
}
int nhonhat(int *a, int n){
	int min=*(a+0);
	for(int i=1;i<n;i++){
		if(*(a+i)<min){
			min=*(a+i);
		}
	}return min;
}
int *xoaPhantu(int *a, int &n, int k){
	if(k>0 && k<n){
		for(int i=k;i<n-1;i++){
			*(a+i)=*(a+i+1);
		}
		n--;
	}

	return a;
}
int *themphantu(int *a, int &n, int k, int x){
	if(k>0 && k<n){
		for(int i=n;i>=k+2;i--){
			*(a+i)=*(a+i-1);
			
		
		
		}
		*(a+k+1)= x;
		n++;
	}
	return a;
}

int main(){
	int *a;
    int n;
    a = nhapMang(a,n);
    cout << "Mang vua nhap: ";
    xuatMang(a,n);
	
	
    cout<<"Tong:"<<tong(a,n);
    cout<<"\nnho nhat la"<<nhonhat(a,n);
	int k;
	cout<<"\nNhap k:";cin>>k;	
	cout<<"Mang sau khi xoa la:";
	a=xoaPhantu(a,n,k);
	xuatMang(a,n);
	int x;
	cout<<"Them vao gia tri x:"; cin>>x;
	
	
	
	a=themphantu(a,n,k,x);

	xuatMang(a,n);

	
    
}

