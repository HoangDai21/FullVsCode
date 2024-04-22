#include <iostream>
#include <string.h>
using namespace std;

class HocSinh{
    private:
    string Ho_ten;
    string Lop;
    float DiemToan, DiemVan, DiemAnh;
    public:
    friend void nhap(HocSinh a[],int n){
        for(int i = 0; i < n; i++){
            cout << "nhap ho va ten: ";
            cin >> a[i].Ho_ten;
            cout << "nhap lop: ";
            cin >> a[i].Lop;
            cout << "nhap diem toan: ";
            cin >> a[i].DiemToan;
            cout << "nhap diem van: ";
            cin >> a[i].DiemVan;
            cout << "nhap diem anh: ";
            cin >> a[i].DiemAnh;
        }
    }
    friend void xuat(HocSinh a[],int n){
        for(int i = 0; i < n; i++){
            cout << "============================"<<endl;
            cout << "ho va ten hoc sinh la: "<< a[i].Ho_ten << endl;
            cout << "lop cua hoc sinh la: "<<a[i].Lop << endl;
            cout << "diem toan la: "<< a[i].DiemToan << endl;
            cout << "diem van la: "<< a[i].DiemVan << endl;
            cout << "diem anh la: "<< a[i].DiemAnh << endl;
            //cout << "diem trung binh la: "<<DiemTB(a) <<endl;
        }
    }
   /*friend float DiemTB(HocSinh a[],int n){
       	return (a->DiemAnh + a->DiemToan + a->DiemVan) / 3;
    }
    friend void Lop12A2(HocSinh a[], int n){
        for( int i = 0; i < n; i++){
            if(a[i].Lop == "12A2" || a[i].Lop == "12a2"){
                xuat(a,n);
                cout << endl;
            }
        }
    }
    void HSG(HocSinh a[],int n){
        for(int i = 0; i < n; i++){
            if(DiemTB(a) >= 8){
                xuat(a,n);
                cout << endl;
            }
        }
    }*/
   // void max(HocSinh a[],)
};
int main(){
    int n;
    cout << "nhap n: ";cin >> n;
    HocSinh a[n];
    nhap(a,n);
    xuat(a,n);
   // Lop12A2(a,n);
}