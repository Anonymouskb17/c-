#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Nhap xau: "; getline(cin,s);
    if(s.empty()){
    	cout<<"Xau vao rong";
	}
	else{
		cout<<"Do dai cua xau la: "<<s.length();
	}
	cout<<"\nDay xau nguoc lai la:";
	for(int i=s.length()-1;i>=0;i--){
		cout<<s[i];
	}
}


