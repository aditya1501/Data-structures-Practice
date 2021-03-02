#include<bits/stdc++.h>
using namespace std;
template <typename T>
class stackUsingTemplate{
	T *data;
	int nextIndex;
	int capacity;
public:
			stackUsingTemplate(){
			data=new T[4];
			nextIndex=0;
			capacity=4;
		}
		int size(){
			return nextIndex;
		}
		bool isempty(){
			return nextIndex==0;
		}
		void push(T element){
		//first check whether there is space or not
		if(nextIndex==capacity){
			// cout<<"Stack-full"<<endl;
			// return;
			//As soon as the stack is full we will double the size of our array
			T *newdata=new T[2*capacity];
			//copy the previous elements form previous stack.
			for(int i=0;i<capacity;i++)
			{
				newdata[i]=data[i];
			}
			capacity=2*capacity;
			delete [] data;
			data=newdata;


		}
		data[nextIndex]=element;
		nextIndex++;
	}
	T pop(){
		//check whether deletion is possible
		if(isempty()){
			cout<<"Stack is empty"<<endl;
			return 0;

		}
		nextIndex--;
		return data[nextIndex];
	}
	T top(){
		if(isempty()){
			cout<<"stack is empty"<<endl;
			return 0;
		}
		return data[nextIndex-1];
	}


};
int main(){
	stackUsingTemplate<char> s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);

	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isempty()<<endl;

}