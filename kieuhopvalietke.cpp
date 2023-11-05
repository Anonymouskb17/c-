#include<bits/stdc++.h>
using namespace std;


//enum hanhkiem( Kem,float Yeu,float TB= 5.5,float Kha=7,float Gioi=8,float Xuatsac= 9);
enum hanhkiem{
	Kem ,
	Yeu,
    Tb ,
	Kha ,
	Gioi,
	Xuatsac
};
enum hocluc{
	KEM ,
	YEU,
    TB ,
	KHA ,
	GIOI,
	XUATSAC
};

struct date{
	int ngay, thang,nam;
};
struct hs{
	string hoten;
	date ngaysinh;
	float DTB;
	string gioitinh;
	hanhkiem HK;
	hocluc HL;
	
void setHocLuc() {
    if (DTB > 9)
		HL = XUATSAC;
	else if (DTB >= 8)
		HL = GIOI;
	else if (DTB >=7)
		HL = KHA;
	else if (DTB>=5)
		HL = TB;
	else if (DTB >4)
		HL = KEM;
	else
		HL = YEU;
		
}


string gethocLuc(){
	switch (HL){
	
		case XUATSAC:
			return "XUATSAC";
		case GIOI:
			return "GIOI";
		case KHA:
			return "KHA"; 
		case TB:
			return "TB";
		case KEM:
			return "KEM";
		case YEU:
			return "YEU";
	}  
	   
}
};




//void dieukien(hs DTB){
//	    if(DTB>9)
//	       HL= XUATSAC;
//	    else if(DTB>9)
//		   HL= GIOI;
//		else if(DTB>7)
//		   HL= KHA;
//		else if(DTB>5)
//		   HL =TB;
//		else if(DTB>4)
//		   HL= Kem;
//		else if(DTB<4)
//		   HL =Yeu;
//}
//void dieukien(hs.DTB){
//	int hs.DTB= luachon;
//	switch(luachon){
//		case luachon<4:
//			cout<<
//	}
//}
void input(hs &a){
//	cin.ignore();
	cout<<"Nhap ten hoc sinh: "; getline(cin,a.hoten);
	cout<<"Nhap ngay: "; cin>>a.ngaysinh.ngay;
	cout<<"Nhap thang: "; cin>>a.ngaysinh.thang;
	cout<<"Nhap nam: "; cin>>a.ngaysinh.nam;
	cin.ignore();
	cout<<"Gioi tinh hoc sinh: "; getline(cin,a.gioitinh);
	cout<<"Nhap diem trung binh: "; cin>>a.DTB;
}
    
void output(hs &a){
	cout<<"Danh sach hoc sinh la: "<<endl;
    cout<<"Ten hoc sinh la: "<<a.hoten<<endl;
	cout<<"Ngay sinh hoc sinh: "<<a.ngaysinh.ngay<<"/"<<a.ngaysinh.thang<<"/"<<a.ngaysinh.nam<<endl;
	cout<<"Gioi tinh hoc sinh: "<<a.gioitinh<<endl;
	cout<<"Diem hoc sinh: "<<a.DTB<<endl;
	cout<<"Loai "<<a.gethocLuc();
	}

int main(){
//    int n;
//    cout<<"Nhap so hoc sinh: "; cin>>n;
	hs a;
input(a);
	a.setHocLuc();
	a.gethocLuc();
    
    output(a);
    return 0;
    
}







