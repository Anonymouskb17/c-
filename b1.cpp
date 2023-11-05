#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    
    cout<<"Nhap xau: "; getline(cin,c);
    int dem =0;
    for(int i=0;i<c.length();i++){
    	if(isupper(c[i])){
    		dem++;
		}
	}
	cout<<"So chu hoa trong xau la "<<dem;
}


