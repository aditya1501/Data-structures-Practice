#include<bits/stdc++.h>
using namespace std;
class StackUsingArray{
	int *data; //data array pointer
	int nextIndex;
	int capacity;
public:
	StackUsingArray(){ //we will not get any argument from user because there is no constraint on user
		data=new int[4];
		nextIndex=0;
		capacity=4;
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
			// cout<<"Stack-full"<<endl;
			// return;
			//As soon as the stack is full we will double the size of our array
			int *nedata=new int[2*capacity];
			//copy the previous elements form previous stack.
			for(int i=0;i<capacity;i++)
			{
				nedata[i]=data[i];
			}
			capacity=2*capacity;
			delete [] data;
			data=nedata;


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
	StackUsingArray s;
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