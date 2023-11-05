#include<bits/stdc++.h>
using namespace std;

/*int main(){
	string a=" python";
	string b="java";
	cout<<a + b;
	string c = "kevin jone dias";
	stringstream g(c);
	string h;
	while(g>>h){
		cout<<h<<endl;
	}
	//cin.ignore(1);
    string s ;
    cin>>s;
    cout<<a.compare(b);
    cout<<a.substr(2)<<endl;
    //getline(cin, s);
    for(int i=0; i<s.length();i++){
    	cout<<s[i]<<" ";
	}
	/*for(char i : s){
		cout<<s[i]<<endl;
	}*/
   
int main(){
	// dem so phan tu
	/*string n;
    getline(cin,n);
	int count=0;
	stringstream h(n);
	string w;
	while(h>>w){
		++count;
		cout<<w<<".";
	}
	
	cout<<count;*/
	
	//xoa 1 phan tu
	/*
	string s;
	getline(cin,s);
	string a;cin>>a;
	string w;
	stringstream b(s);
	while(b>>w){
		if(w !=a){
			cout<<w;
		}
	}*/
	int a;cin>>a;
	while(a--){
	
	string s;
	getline(cin,s);
	stringstream c(s);
	for(int i=0; i<s.length();i++){
	        s[i]= tolower(s[i]);
	    }
	vector<string> v;
	string w;
	while(c>>w){
		v.push_back(w);
		cout<<v.length()-1;
	}
	for(int i=0; i<s.length()-1;i++){
		cout<<c[i][0];
	}
	cout<<"@gmail.com";
	return 0 ;
	}

}


