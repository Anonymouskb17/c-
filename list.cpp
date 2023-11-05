                                               #include<iostream>
#include<string>
using namespace std;

struct Employee {
    string id;
    string name;
    double salary;
};
//định nghĩa nút
struct Node {
    Employee data;
    Node *pNext;
};
//tạo nút mới
Node *createNode(Employee emp) {
    Node *node = new Node;
    node->data = emp;
    node->pNext = NULL;
    return node;
}
//tạo dslk rỗng
void createEmptyList(Node *&lk) {
    lk = NULL;
}
//chèn vào đầu danh sách
void insertFirst(Node *&lk, Employee emp) {
    Node *newNode;
    newNode = createNode(emp);
    if(lk==NULL) lk = newNode;
    else {
        newNode->pNext = lk;
        lk = newNode;
    }
}
//thêm vào cuối danh sách
//runNode: nút duyệt
void insertLast(Node *&lk, Employee emp) {
    Node *newNode, *runNode;
    newNode = createNode(emp);
    if(lk==NULL) lk=newNode;
    else {
        runNode=lk;
        while(runNode->pNext!=NULL) {
            runNode=runNode->pNext;
        }
        runNode->pNext=newNode;
    }
}
//nhập vào 1 ds employee
Node *inputEmployee(Node *&lk, int &n, Employee emp){
    cout << "Nhap so node cua ds n = ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Id: ";cin.ignore(); getline(cin, emp.id);
        cout << "Name: "; getline(cin, emp.name);
        cout << "Salary: "; cin >> emp.salary;
        insertFirst(lk, emp);
        //insertLast(lk, emp);
    }
    return lk;
}
Node *insertPositionLast(Node *&lk, Employee emp) {
    cout << "id: "; cin.ignore(); getline(cin, emp.id);
    cout << "name: "; getline(cin, emp.name);
    cout << "salary: "; cin >> emp.salary;
    insertLast(lk, emp);
    return lk;
}
void displayEmployee(Node *lk) {
    Node *node = lk;
    while(node!=NULL) {
        cout << node->data.id << "\t" << node->data.name << "\t" << node->data.salary << endl;
        node = node->pNext;
    }
}
//viết hàm để nhập 1 nhân viên mới và thêm vào đầu ds
//xóa nút đầu dss
Node *delFirst(Node *&lk) {
    Node *p = lk;
    if(lk==NULL) return 0;
    else {
        lk=p->pNext;
        delete p;
    }
    return lk;
}
//xóa nút cuối ds
Node *delLast(Node *&lk) {
    Node *runNode, *node;
    if(lk==NULL) return 0;
    else if(lk->pNext==NULL) {
        delete lk;
        lk=NULL;
    } 
    else {
        node = lk;
        runNode = lk->pNext;
        while(runNode->pNext!=NULL) {
            node = runNode;
            runNode = runNode->pNext;
        }
        node->pNext = NULL;
        delete runNode;
    }
    return lk;
}
//viết chương trình đưa ra ds các nhân viên có lương cao nhất
//nhập vào 1 id đưa ra thông tin của nhân viên có id vừa nhập
void inputById(Node *lk, string &id) {
    cout << "Nhap id can tim kiem: ";cin.ignore(); getline(cin, id);
    Node *node = lk;
    while(node!=NULL) {
        if(node->data.id==id) {
            cout << node->data.id << "\t" << node->data.name << "\t" << node->data.salary << endl;
        }
        node = node->pNext;
    }
}
void g1(Node *lk, string &ten, double &luong) {
    cout << "Nhap ten: "; getline(cin, ten);
    cout << "Nhap luong: "; cin >> luong;
    Node *node = lk;
    while(node!=NULL) {
        if(node->data.name==ten && node->data.salary>luong) {
            cout << node->data.id << "\t" << node->data.name << "\t" << node->data.salary << endl;
        }
        node = node->pNext;
    }
}
double max(Node *lk) {
    Node *node = lk;
    double max = 0;
    while(node!=NULL) {
        if(node->data.salary>max) {
            max = node->data.salary;
        }
        node=node->pNext;
    }
    return max;
}
int main() {
    int n;
    Node *lk;
    Employee emp;
    createEmptyList(lk);
    cout << "Tao ds lk: " << endl;
    lk = inputEmployee(lk, n, emp);
    cout << "Ds vua nhap: " << endl;
    displayEmployee(lk);
    // Employee emp1;
    // cout << "Nhap vao 1 nhan vien: " << endl;
    // insertPositionLast(lk,emp1);
    // cout << "Ds sau khi chen vao cuoi: " << endl;
    // displayEmployee(lk);
    // delLast(lk);
    // cout << "Ds sau khi xoa cuoi: " << endl;
    //displayEmployee(lk);
    // string id;
    // inputById(lk, id);
    // string ten;
    // double luong;
    // g1(lk, ten, luong);
    cout << "Luong max: " << max(lk);
    return 0;
}

//      ÔN TẬP DANH SÁCH LIÊN KẾT

/*
            I. Cấu trúc tự trỏ(Định nghĩa node)
struct ten_Struct {
    kiểu ten_thuoc_tinh;
    ten_Struct *contro;
};
        II. Khái niệm
- Single linked list(danh sách liên kết đơn): một cấu trúc dữ liệu động, nó là 1 danh sách 
    mà mỗi phần tử đều được liên kết với phần tử đứng sau nó trong danh sách
- Mỗi phần tử (được gọi là một node(nút)) trongdslk đơn là 1 cấu trúc có 2 thành phần :
    + Thành phần dữ liệu(data):lưu thông tin bản thân phần tử đó(các thuộc tính)
    + Thành phần liên kết: lưu địa chỉ phần tử đứng sau trong danh sách,, nếu phần tử đó là phần
        tử cuối cùng thì thành phần này bằng NULL
- Khi trỏ đến cấu trúc thì sd: -> , khi trỏ đến thuộc tính sử dụng: ".";
        III. Các bước
1. Tạo node
    - Định nghĩa Struct
    - Định nghĩa node
    - Tạo node mới
2. Tạo dslk đơn
    - Tạo ds rỗng
    - Thêm các phần tử vào dslk(thêm vào đầu, thêm vào cuối)
3. Duyệt dslk đơn
4. Xóa
5. Tìm kiếm    
            III. Code mẫu
1. Tạo nút
    *Định nghĩa struct:
            Struct ten_Struct {
                kiểu_dữ_liệu ten_thuoc_tinh1;
                kiểu_dữ_liệu ten_thuoc_tinh2;
                ...
            };
    *Định nghĩa node; 1 node gồm 2 phần: phần dữ liệu, phần địa chỉ node tiếp(con trỏ tiếp)
            Struct Node(ten_node) {
                Kiểu_dữ_liệu data(dữ_liệu);
                Node(ten_node) *pNext(con_tro_tiep);
            };
    *Tạo nút mới
            Node *createNode(ten_Struct ten_data) {
                Node *node = new Node;(tạo 1 node mới có kiểu Node)
                node->data = ten_data;
                node->pNext = NULL;
                return node;
            }
        
2. Tạo dslk đơn
    *Tạo dslk rỗng
            //sử dụng & vì hàm này sẽ thay đổi dslk
            void createEmptyList(Node *&lk) {
                lk = NULL;
            }
    *Thêm phần tử vào đầu danh sách
            void insertFirst(Node *&lk, ten_Struct gia_tri) {
                Node *newNode;
                newNode = createNode(gia_tri);
                if(lk==NULL) lk=newNode;
                else {
                    newNode->pNext = lk;
                    lk = newNode;
                }
            }
    *Thêm phần tử vào cuối danh sách
            void insertLast(Node *&lk, ten_Struct gia_tri) {
                Node *newNode, *runNode;
                newNode = createNode(gia_tri);
                if(lk==NULL) lk=newNode;
                else {
                    runNode = lk;
                    while(runNode->pNext!=NULL) {
                        runNode=runNode->pNext;
                    }
                    runNode->pNext = newNode;
                }
            }
3. Duyệt danh sách lk đơn
            void displayDSLK(Node *lk) {
                Node *node = lk;
                while(node!=NULL) {
                    cout << node->data.thuoc_tinh1 << "\t" << node->data.thuoc_tinh2 << endl;
                    node = node->pNext;
                }
            }
4. nhập dslk
Node *InputEmployee(Node *&lk, int &n, Employee emp) {
    cout << "Nhap n = "; cin >> n;
    for(int i=0; i<n; i++) {
        cout << "id: "; getline(cin, emp.id);
        insertLast||insertFirst
    }
    return lk;
}
5.in dslk
void displayEmployee(Node *lk) {
    Node *node =  lk;
    while(node!=NULL) {
        cout << node->data.thuoctinh;
        node = node->pNext;
    }
}
*/


// #include<iostream>
// using namespace std;


// //1. tao node
// //cau truc struct
// Struct SinhVien {
//     string id;
//     string name;
//     float grade;
// };
// //cau truc nut
// Struct Node {
//     SinhVien data;
//     SinhVien *pNext;
// };
// //tao nut moi
// Node *createNode(SinhVien sv) {
//     Node *node = new Node;
//     node->data = sv;
//     node->pNext = NULL;
//     return node;
// }

// //2. tao dslk
// //tao ds rong
// void createEmptyList(Node *&lk) {
//     lk = NULL;
// }
// //them ptu vao dau ds
// void insertFirst(Node *&lk, SinhVien sv) {
//     Node *newNode;
//     newNode = createNode(sv);
//     if(lk==NULL) {
//         lk=newNode;
//     }
//     else {
//         newNode->pNext = lk;
//         lk=newNode;
//     }
// }
// //them ptu vao cuoi ds
// void insertLast(Node *&lk, SinhVien sv) {
//     Node *newNode, *runNode;
//     newNode = createNode(sv);
//     if(lk==NULL) {
//         lk=newNode;
//     }
//     else {
//         runNode=lk;
//         while(runNode->pNext!=NULL) {
//             runNode = runNode->pNext;
//         }
//         runNode->pNext = newNode;
//     }
// }
// Node *delFirst(Node *&lk) {
//     Node *a = lk;
//     if(lk==NULL) return;
//     else {
//         lk = a->pNext;
//         delete a;
//     }
    
// }
