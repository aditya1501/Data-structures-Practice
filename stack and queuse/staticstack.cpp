#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
	int *data; //data array pointer
	int nextIndex;
	int capacity;
public:
	StackUsingArray(int totalsize){
		data=new int[totalsize];
		nextIndex=0;
		capacity=totalsize;
	}
	//return the number of elements present in stack
	int size(){
		return nextIndex;
	}
	bool isempty(){
		// if(nextIndex==0)return true;
		// else
		// 	return false;
		//short form
		return nextIndex==0;
	}
	//insert element
	void push(int element){
		//first check whether there is space or not
		if(nextIndex==capacity){
			cout<<"Stack-full"<<endl;
			return;
		}
		data[nextIndex]=element;
		nextIndex++;
	}
	int pop(){
		//check whether deletion is possible
		if(isempty()){
			cout<<"Stack is empty"<<endl;
			return INT_MIN;

		}
		nextIndex--;
		return data[nextIndex];
	}
	int top(){
		if(isempty()){
			cout<<"stack is empty"<<endl;
			return INT_MIN;
		}
		return data[nextIndex-1];
	}
};
int main(){
	StackUsingArray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isempty()<<endl;

}