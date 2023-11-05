#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void input(int a[], int n){
	
	for(int i; i<n;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
}
void output(int a[], int n){
    cout<<"Phan tu trong mang la: ";
	for(int i=0; i<n;i++){
	cout<<a[i]<<" ";
	}	
	
}
void max(int a[], int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		
		if(a[i]>max)
		    max=a[i];
	}
	cout<<"\nPhan tu lon nhat la:"<<max<<endl;
}
void min(int a[], int n){
	int min=a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min)
		   min= a[i];
	}
	cout<<"Phan tu nho nhat la:"<<min<<endl;
}
void tangDan(int a[], int n){
	cout<<"Day so theo tang dan la:";
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int sapxep= a[j];
				a[j]=a[j+1];
				a[j+1]= sapxep;
			}
		}
	
		
		
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	
	}
	
	
void giamDan(int a[], int n){
	cout<<"\nDay so theo giam dan la:";
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int sapxep= a[j];
				a[j]=a[j+1];
				a[j+1]= sapxep;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
}
}
void tongChan(int a[], int n){
	cout<<"\nTong chan la:";
	int tong =0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			tong+=a[i];
		}
	}
	cout<<tong<<endl;
}

void tongLe(int a[],int n){
	cout<<"Tong le: ";
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			sum+=a[i];
		}
	}
	cout<<sum<<endl;
}
bool KTSNT(int n){
	
	if(n<=1){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n % i==0){
			return false;
		}
	}
	return true;
}
void SNT(int a[],int n){
    
    for(int i=0;i<n;i++){
    	if(KTSNT(i))
        cout<<a[i]<<" ";
	}
}

void sochiahet3(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			count++;
		}
	}cout<<endl<<"Co so la: "<<count;
}


bool kt(int n){
    int s = sqrt(n);
    return s * s == n;
}

void SCP(int a[], int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (kt(i)) {
            dem++;
        }
    }cout<<endl<<"So chinh phuong la "<<dem;
    
}
int main(){
	
    int n;
    cout<<"Nhap n "; cin>>n;
    int a[n];
	input(a,n);
	output(a,n);
	max(a,n);
	min(a,n);
	tangDan(a,n);	

	giamDan(a,n);

	tongChan(a,n);
	tongLe(a,n);
	SNT(a,n);
    SCP(a,n);
    sochiahet3(a,n);
}





