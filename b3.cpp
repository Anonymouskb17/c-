#include <iostream>
#include <string>

using namespace std;

bool doiXung(string str){
	char doiXung;
	 for (int i = 0; i < str.length() ; i++) {
        if (str[i] != str[str.length()  - i]) {
            doiXung = false;
            break;
        }
    }
	if (doiXung) {
        cout << "Chuoi vua nhap la chuoi doi xung" << endl;
    } else {
        cout << "Chuoi vua nhap khong phai la chuoi doi xung" << endl;
    }
}
int main() {
    string str;
    cout << "Nhap vao mot chuoi: ";
    getline(cin, str);
    doiXung(str);
    
   
    

    return 0;
}
