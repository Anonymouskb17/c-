#include<bits/stdc++.h>
using namespace std;

struct hs{
	string hoten;
	string lop;
	int MSV;
};

void input(hs a[], int n) {
     
cin.ignore(); 
        
    for (int i = 0; i < n; i++) {
        
        
        cout << "Ho ten sinh vien thu "<<i+1<<" la: "; getline(cin, a[i].hoten);//cin>> a[i].hoten;
        //cin.ignore();
	    cout << "Ma sinh vien thu "<<i+1<<" la: "; cin>>a[i].MSV;
        cin.ignore();
        cout << "Lop sinh vien thu"<<i+1<<" la: "; getline(cin, a[i].lop);//cin>> a[i].lop;
        
    }
}
void output(hs a[], int n){
	cout<<endl<<"Danh sach sinh vien :";
	for(int i=0; i<n; i++){
		cout<<endl<<"Ten sinh thu "<< i+1 <<" la: "<<a[i].hoten<<endl;
		cout<<"Ma sinh vien thu "<< i+1 <<" la: "<<a[i].MSV<<endl;
		cout<<"Lop cua sinh vien thu "<< i+1 <<" la: "<<a[i].lop<<endl;
	}
}
void TTNT( hs a[], int n) {
    cout << "\nThong tin sinh vien lop TTNT:\n";
    for (int i = 0; i < n; i++) {
        if (a[i].lop == "ttnt") {
        	cout << "Ho ten: " << a[i].hoten << endl;
            cout << "Ma sinh vien: " << a[i].MSV << endl;
            cout << "Lop: " << a[i].lop << endl;
            cout << endl;
        }
    }
}
bool tenhs(hs sv1, hs sv2){
	return sv1.hoten<sv2.hoten;
	
}
void sapxep(hs a[], int n){
	
//	for(int i=0; i<n;i++){
	
    sort(a, a+n,tenhs);
    }

int main(){
    int n;
    cout<<"Nhap so hoc sinh: "; cin>>n;
    hs a[n];
    input(a,n);
    output(a,n);
    TTNT(a,n);
    sapxep(a,n);
    cout<<"Danh sach sau khi thay doi la: ";
    output(a,n);
}

