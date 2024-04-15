
#include <iostream>
using namespace std;

class tinhtong{
private:
   int a,b;
   public:
    friend istream &operator >>( istream &in, tinhtong &a){
        cout << "nhap a: ";in >> a.a;
        cout << "nhap b: ";in >> a.b;
        return in;
    }
    friend ostream &operator << (ostream &out , tinhtong a){
        if(a.b>0){
				out<<a.a<<"+"<<a.b<<"i"<<endl;
			} 
			else 
				out<<a.a<<"-"<<a.b<<"i"<<endl; 
    }
    tinhtong &operator + (tinhtong a){
 			tinhtong sum;
			sum.a=this->a+a.a;
			sum.a=this->b+a.b; 
			return sum;      
        }
};
int main(){
	tinhtong m,n;
	cin >> m;
	cin >> n;
	cout << "tong 2 so phuc: "<< m+n;
	return 0;
}
*/
#include<iostream>
using namespace std;
class so_phuc{
	private: 
		int a,b;
	public: 	
		friend istream &operator >> (istream &in , so_phuc &k){
			cout<<"Nhap a: ";
			in>>k.a;
			cout<<"Nhap b: ";
			in>>k.b;
			return in; 
		}
		friend ostream &operator << (ostream &out, so_phuc k){
			if(k.b>0){
				out<<k.a<<"+"<<k.b<<"i"<<endl;
			} 
			else 
				out<<k.a<<"-"<<k.b<<"i"<<endl; 
		}
		so_phuc operator +(so_phuc k){
			so_phuc tong;
			tong.a=this->a+k.a;
			tong.b=this->b+k.b; 
			return tong; 
		}  
};
int main(){
	so_phuc m,n;
	cin>>m;
	cin>>n; 
	cout<<"Tong 2 so phuc: "<<m+n;
	return 0; 
	
	 
}