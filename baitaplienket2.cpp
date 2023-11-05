#include<bits/stdc++.h>
using namespace std;

struct Date{
	int ngay;
	int thang;
	int nam;
	
};

struct hs{
	string hoten;
	Date date;
};

void input(hs a[], int n) {
     

        
    for (int i = 0; i < n; i++) {
        
        cin.ignore();
        cout << "Ho ten sinh vien thu "<<i+1<<" la: "; getline(cin, a[i].hoten);//cin>> a[i].hoten;
        
	    cout << "Nhap ngay sinh cua sinh vien thu "<<i+1<<" la: "; cin>>a[i].date.ngay;
        cin.ignore();
        cout<<"Nhap thang sinh cua sinh vien thu "<<i+1<<" la: "; cin>>a[i].date.thang;
        cout<<"Nhap nam sinh cua sinh vien thu "<<i+1<<" la: "; cin>>a[i].date.nam;
        
        
    }
}
	

void ouput(hs a[], int n){
	cout<<"Danh sach sinh vien la:";
	for(int i=0;i<n;i++){
		cout<<"Ten sinh vien thu "<<i+1;
	}
	
	
}
int main(){
    int n;
    cout<<"Nhap so sinh vien: "; cin>>n;
	hs a[n];
    input(a,n);
    
}

