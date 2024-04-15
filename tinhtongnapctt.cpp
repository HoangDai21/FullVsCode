#include <iostream>
using namespace std;

class tinhtong

{
private:
   int a,b;
   public:
    friend istream &operator >>( istream &in, tinhtong &a){
        cout << "nhap a: ";in >> a.a;
        cout << "nhap b: ";in >> a.b;
    }
    friend ostream &operator << (ostream &out , tinhtong a){
        cout << "a = "<<a.a<<endl;
        cout << "b = "<<a.b<<endl;
    }
    friend ostream &operator << (ostream &out, tinhtong a){
        tinhtong &operator +(tinhtong a){
            return a.a + a.b;
        }
    }
};
