#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


//bài 1
//struct Date{
//	int ngay;
//	int thang;
//	int nam;
//};
//struct Drug{
//    string name;
//    Date dat;
//    int soLuong;
//    int donGia;
//};
//bool check(int ngay1, int thang1, int nam1){
//	
//	if(nam1<nam){
//		return true;
//	}
//	else if(nam1==nam && thang1<thang){
//		return true;
//	}else if(nam1 == nam && thang1==thang && ngay1<=ngay)
//	    return true;
//    else {
//    	return false;
//	}
//}
//
//int main() {
//    int n;
//    cout << "Nhap so luong thuoc: ";
//    cin >> n; 
//    Drug a[n];
//    
//    for (int i = 0; i < n;i++) {
//    cout << "Nhap ten thuoc thu " << i+1 << ": "; cin>>a[i].name;
////    if (Drug.name.find("***") != string::npos){
////	
////	   break;
////	}
////	else{
////	}
//    cout << "Nhap ngay het han cua thuoc thu " << i+1 <<": "; cin>> a[i].dat.ngay;
//    cout << "Nhap thang het han cua thuoc thu " << i+1 <<": "; cin>> a[i].dat.thang;
//    cout << "Nhap nam het han cua thuoc thu " << i+1 <<": "; cin>> a[i].dat.nam;
//    cout << "Nhap so luong thuoc thu " << i+1 << ": "; cin >> a[i].soLuong;
//    cout << "Nhap don gia thuoc thu " << i+1 << ": "; cin>>a[i].donGia;
//    
//  }
//   cout << endl << "Danh sach thuoc:"<< endl;
//  for (int i = 0; i < n; i++) {
//    cout << "Thuoc thu " << i+1 << ":" << endl;
//    cout << "Ten thuoc: " << a[i].name << endl;
//    cout << "So luong: " << a[i].soLuong << endl;
//    cout << "Thoi gian het han: " << a[i].dat.ngay<<"/"<<a[i].dat.thang<<"/"<<a[i].dat.nam << endl << endl;
//   
//  }
//  
//  return 0;
//}

//bài 2
//
//struct doiBong{
//	string tenDoibong;
//	int banThang;
//	int banThua;
//	int theVang;
//	int theDo;
//};
//
//int main(){
////	int n;
////	cout<<"So luong doi bong la: "; cin>>n;
//	doiBong a[32];
//	char c;
//	for(int i=0; i<32;i++){
//		cout<<"Nhap ten doi bong thu "<<i+1<<":"; cin>>a[i].tenDoibong;
//		cout<<"Nhap so ban thang :"; cin>>a[i].banThang;
//		cout<<"Nhap so ban thua :"; cin>>a[i].banThua;
//		cout<<"Nhap so the vang :"; cin>>a[i].theVang;
//		cout<<"Nhap so the do : "; cin>>a[i].theDo;
//		 
//	}
//	cout<<endl<<"Danh sach doi la:";
//	for (int i = 0; i < 32; i++) {
//		if (!isdigit(c)){
//		
//    cout<<"Doi thu  " << i+1 << ":" << endl;
//    cout<<"Ten doi bong : " << a[i].tenDoibong<< endl;
//    cout<<"So ban thang : " << a[i].banThang<< endl;
//    cout<<"So ban thua : " << a[i].banThua<< endl;
//    cout<<"So the vang : " << a[i].theVang<<endl;
//    cout<<"So the do :"<<a[i].theDo<<endl; 
//}
//    }
//    
//    string team;
//    cout<<endl<<"Nhap ten doi bong can tim:";
//    cin>>team;
//    
//    for (int i=0;i<32;i++) {
//    if (a[i].tenDoibong == team) {
//      cout << "Thong tin doi bong " << a[i].tenDoibong << ":" << endl;
//      cout << "- So ban thang: " << a[i].banThang << endl;
//      cout << "- So ban thua: " << a[i].banThua << endl;
//      cout << "- So the do: " << a[i].theDo << endl;
//      cout << "- So the vang: " << a[i].theVang << endl;
//      
//      break;
//    }else {  
//        cout << "Khong tim thay doi bong " << a[i].tenDoibong << endl;
//        }
//    }
//    cout<<"\nDiem cua cac doi bong:" << endl;
//    for (int i=0; i<32; i++) {
//    int points = a[i].banThang * 10 - a[i].banThua * 5 - a[i].theVang * 2 - a[i].theDo * 5;
//    cout<< a[i].tenDoibong<< ": "<<points<< " diem" << endl;
//  }
//     return 0;
//}

//struct Date{
//	int ngay;
//	int thang;
//	int nam;
//};
//struct thiSinh{
//	int sbd;
//	string name;
//	Date dat;
//	string khoaThi;
//	float diem;
//	
//};
//
//
//int main(){
//	int n;
//	cout<<"So thi sinh la:"; cin>>n;
//	thiSinh d[n];
//    for( int i=0; i<n; i++){
//        cout<<"So bao danh thi sinh " <<i+1<< " la: "; cin>>d[i].sbd;
//		cout<<"Ten thi sinh "<<i+1<< " la: ";cin>>d[i].name;
//		cout<<"Ngay sinh thi sinh "<<i+1<< " la: ";cin>>d[i].dat.ngay;
//		cout<<"Thang sinh thi sinh "<<i+1<< " la: ";cin>>d[i].dat.thang;
//		cout<<"Nam sinh thi sinh "<<i+1<< " la: ";cin>>d[i].dat.nam;
//		cout<<"Khoa thi la la: "; cin>>d[i].khoaThi;
//		cout<<"Diem thi la: "; cin>>d[i].diem;
//    }
//    cout<<endl<<"Danh sach thi sinh la:"<<endl;
//	
//        cout<<"So bao danh "
//		<<"\tTen thi sinh "
//		<<"\tNgay sinh thi sinh "
//		<<"\tKhoa thi"
//		<<"\tDiem thi"
//		<<endl;
//	for( int i=0; i<n; i++){
//		cout<<d[i].sbd<<"\t\t\t"
//		<<d[i].name<<"\t"
//		<<d[i].dat.ngay<<"/"<<d[i].dat.thang<<"/"<<d[i].dat.nam<<"\t\t"
//		<<d[i].khoaThi<<"\t\t"
//		<<d[i].diem<<endl;
//}
//    
//	for(int i=0; i<n;i++){
//    	for(int j=0;j<i;j++){
//    		if(d[i].diem<d[j].diem){
//    			swap(d[i],d[j]);
//			}else{
//				swap(d[j],d[i]);
//			}
//		}
//	}
//	
//	cout<<endl<<"Danh sach thi sinh trung tuyen la"<<endl;
//	cout<<"So bao danh "
//		<<"\tTen thi sinh "
//		<<"\tNgay sinh thi sinh "
//		<<"\tKhoa thi"
//		<<"\tDiem thi"
//		<<endl;
//	for(int i=0; i<n;i++){
//		if(d[i].diem>=25){
//			cout<<d[i].sbd<<"\t\t\t"
//		<<d[i].name<<"\t"
//		<<d[i].dat.ngay<<"/"<<d[i].dat.thang<<"/"<<d[i].dat.nam<<"\t\t"
//		<<d[i].khoaThi<<"\t\t"
//		<<d[i].diem<<endl;
//		}
//	}
//    
//	
//	int sobaodanh;
//    cout<<endl<<"Nhap so bao danh can tim:";
//    cin>>sobaodanh;
//     cout<<"So bao danh "
//		<<"\tTen thi sinh "
//		<<"\tNgay sinh thi sinh "
//		<<"\tKhoa thi"
//		<<"\tDiem thi"
//		<<endl;
//    for (int i=0;i<n;i++) {
//    if (d[i].sbd == sobaodanh) {
//        cout<<d[i].sbd<<"\t\t\t"
//		<<d[i].name<<"\t"
//		<<d[i].dat.ngay<<"/"<<d[i].dat.thang<<"/"<<d[i].dat.nam<<"\t\t"
//		<<d[i].khoaThi<<"\t\t"
//		<<d[i].diem<<endl;
//        break;
//    }
//    }
//    return 0;
//}

struct date{
	int ngay;
	int thang;
	int nam;
};

struct thuoc{
	string tenthuoc;
	date hethan;
	int soluong;
	float dongia;
};

void input(thuoc &a){
    cout<<"Nhap ten thuoc: "; getline(cin, a.tenthuoc);
	cout<<"Nhap ngay het han: ";cin>>a.hethan.ngay;
	cout<<"Nhap thang het han: ";cin>>a.hethan.thang;
	cout<<"Nhap nam het han: "; cin>>a.hethan.nam;
	cout<<"Nhap so luong: "; cin>>a.soluong;
	cout<<"Nhap don gia: "; cin>>a.dongia;
}

void output(thuoc &a){
	cout<<endl<<"Danh sach thuoc"<<endl;
	cout<<"\nTen thuoc la:"<<a.tenthuoc<<endl;
	cout<<"Thoi diem het han: "<<a.hethan.ngay<<"/"<<a.hethan.thang<<"/"<<a.hethan.nam<<endl;
	cout<<"So luong thuoc: "<<a.soluong<<endl;
	cout<<"Thuoc co gia: "<<a.dongia<<endl;
}
/*cách 2
thuoc nhap(){
	thuoc a;
	cout<<"Nhap ten thuoc: "; cin>>a.tenthuoc;
	cout<<"Nhap ngay het han: "; cin>>a.hethan.ngay;
	cout<<"Nhap thang het han: "; cin>>a.hethan.thang;
	cout<<"Nhap nam het han: "; cin>>a.hethan.nam;
	cout<<"Nhap so luong thuoc: "; cin>>a.soluong;
	cout<<"Nhap don gia: "; cin>>a.dongia;
	return a;
}*/

void check(thuoc &a,int day, int month, int year){
	
    if(a.hethan.nam>=year){
    	cout<<"Thuoc con su dung duoc";
	}
	else if(a.hethan.nam<year || a.hethan.thang>=month){
		cout<<"Thuoc da het han";
		
	}
	else{
		cout<<"Thuoc con su dung duoc";
	}
}

int main(){
    //thuoc a = nhap();
//    int n;
//    cout<<"Nhap so thuoc: "; cin>>n;
    int day, month, year;
    thuoc a;
    
    input(a);
	output(a);
	check(a,day, month, year);
	
}

