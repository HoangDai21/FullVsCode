#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class People{
    private:
    char Hoten[30];
    int Tuoi;
    char Nn[30];
    char Qt[30];
    public:
        People(){
        }
        People(char &ten, int &tuoi, char &Nghe, char &Qtich){
            Hoten[30] = ten;
            Tuoi = tuoi;
            Nn[30] = Nghe;
            Qt[30] = Qtich;
        }
        ~People(){};
        void Nhap(){
               cout << "Nhap ho va ten: ";
               cin >> Hoten;
               cout << "Nhap tuoi: ";
               cin >> Tuoi;
               cout << "Nhap nghe nghiep: ";
               cin >> Nn;
               cout << "Nhap quoc tich: ";
               cin >> Qt;
        }
        void Xuat(){
            cout << "=================="<< endl;
            cout << "Ten la: "<< Hoten << endl;
            cout << "Tuoi la: "<< Tuoi << endl;
            cout << "Nghe nghiep la: "<< Nn << endl;
            cout << "Quoc tich la: "<< Qt << endl;
        }
        char* get_hoten(){
            return Hoten;
        }
        char* get_nghe_nghiep(){
            return Nn;
        }
};
void nhap_tt(People a[], int &n){
    for(int i = 0; i < n; i++){
        a[i].Nhap();
    }
}
void xuat_tt(People a[], int n){
    for(int i = 0; i < n; i++){
         a[i].Xuat();
     }
}
void Sapxep(People a[], int n){
    for ( int i = 0; i < n; i++){
        for ( int j = i + 1; j < n ;j++ ){
            if (a[i].get_hoten() > a[j].get_hoten())
                swap (a[i],a[j]);
        }
        a[i].Xuat();
    }
}
void Bac_si(People a[], int &n){
    for (int i = 0; i < n; i++){
        if(strcmp(a[i].get_nghe_nghiep(), "bac si") ){
            cout << "danh sach bac si la: "<<endl;
            a[i].Xuat();
        }else cout << "sai roi ";
    }
}
int main(){
    int n;
    cout << "nhap thu n: ";cin >>n;
    People a[n];
    nhap_tt(a,n);
  //  xuat_tt(a,n);
   // Sapxep(a,n);
    Bac_si(a,n);
    return 0;
}