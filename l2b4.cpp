#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"N = ";cin>>n;
    double sum=0;
    for(int i=n; i>0;i--){
    	sum=sqrt(sum)+i;
	}
	cout<<"F(n) = "<<sqrt(sum);
}


