#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    //mo file
    ifstream file("sole.txt");

    if (file.is_open()) {
        string line;
        // doc tung dong
        while (getline(file, line)) {
            cout << line <<endl;
        }

        // Ðóng file 
        file.close();
    } else {
        cout << "Khong mo duoc" <<endl;
    }

    return 0;
}
