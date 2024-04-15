
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
                return out; 
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