// class Pair{
// 	int x;
// 	int y;
// public:
// 	void setX(int x){
// 		this->x=x;
// 	}
// 	int getX(){
// 		return x;
// 	}
// 	void setY(int y){
// 		this->y=y;
// 	}
// 	int getY()
// 	{
// 		return y;
// 	}
// };
//agar pair double class banani padegi to sare jageh pe change karna padega int ki jageh double likhna padega
//to avoid this confusion we can use templates
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Pair{
	T x;
	T y;
public:
	void setX(T x){
		this->x=x;
	}
	T getX(){
		return x;
	}
	void setY(T y){
		this->y=y;
	}
	T getY(){
		return y;
	}

};
int main(){
	Pair<int> p1;
	Pair<double>p2;
	p1.setX(10);
	p1.setY(20);

	p2.setX(100.34);
	p2.setY(34.21);
	cout<<p1.getX()<<" "<<p1.getY()<<endl;
	cout<<p2.getX()<<" "<<p2.getY()<<endl;
}
