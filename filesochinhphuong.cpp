#include<bits/stdc++.h>
#include <fstream>
using namespace std;


bool SNT(int n){
	if(n<1){
		return false;
	}
for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
	}
}
bool soCP(int n) {
    int CP = sqrt(n);
    return CP * CP == n;
}

int main() {
	ofstream file("soCP.txt");
    ofstream fileSNT("soNT.txt");
    int n;
    for (int i = 1; i <= 20; i++) {
        if (soCP(i)) {
            file<<i<<" ";
        }
        
    }cout<<"Da nhap duoc";
    SNT;
    fileSNT.close();
    file.close();

    return 0;
}


