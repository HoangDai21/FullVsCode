//ham ban+ nap chong toan tu in\out
#include <iostream>
using namespace std;

class Connguoi{
    private:
        char ten[30];
        int namsinh;
    public:
        char ten[30];
        int namsinh;
    friend istream & operator>> (istream &in, Connguoi &a){
        cout << "nhap ten: ";
        fflush(stdin);
        cin.getline(a.ten,30);;
        cout << "nhap nam sinh: ";
        cin >>a.namsinh;
        return in;
    }
    friend ostream &operator << ( ostream &out, Connguoi a){
        cout << "ho ten la: "<<a.ten<<endl;
        cout << "nam sinh la: "<<a.namsinh<<endl;
        return out;
    }
};
int main(){
    Connguoi a;
}