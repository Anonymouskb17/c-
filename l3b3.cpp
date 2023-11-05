#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,x,minSo, maxSo, sum;
    cout<<"A = "; cin>>a;
    cout<<"B = "; cin>>b;
    cout<<"C = "; cin>>c;
    
   
    minSo= min(a,min(b,c));
    maxSo= max(a,max(b,c));
    sum= a+b+c;
    x= sum- minSo- maxSo;
    
    cout<<"X = "<<x<<endl;
    
	
    }


