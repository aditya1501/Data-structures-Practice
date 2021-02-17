#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*1print the number entered by user
	int n;
	cin>>n;
	cout<<n;
	*/
	//2 add two numbers
	// int num1,num2;
	// cin>>num1>>num2;
	// cout<<"sum::"<<num1+num2;

	//program 3:compute quotient and remainder
	// int divisor,dividend,quotient,remainder;
	// cin>>dividend>>divisor;
	// quotient=dividend/divisor;
	// remainder=dividend%divisor;
	// cout<<"quotient="<<quotient<<endl;
	// cout<<"remainder="<<remainder<<endl;

	//4. program to find the size of a variable
	// cout<<"Sizeof char--->"<<sizeof(char)<<"\n";
	// cout<<"Sizeof int--->"<<sizeof(int)<<"\n";
	// cout<<"Sizeof float--->"<<sizeof(float)<<"\n";
	// cout<<"Sizeof double--->"<<sizeof(double)<<"\n";

	//5. program to swap two variables
	// int a=5;
	// int b=6;
	// int temp;
	// temp=a;
	// a=b;
	// b=temp;
	// cout<<a<<" "<<b;

	// 6. to find out the ascii value of character
	// char c;
	// cin>>c;
	// cout<<"ASCII value of c="<<int(c);

	//7.multiplication of two numbers
	// int a,b;
	// cin>>a>>b;
	// cout<<a*b<<endl;

	//8.check whether even or odd
	// int a;
	// cin>>a;
	// if(a%2==0)cout<<"even";
	// else
	// 	cout<<"odd";

	// 9.program to check whether vowel or constant
	// char c;
	// cin>>c;
	// if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
	// 	cout<<"small vowel"<<endl;
	// else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	// 	cout<<"large vowel"<<endl;
	// else
	// 	cout<<"consonants"<<endl;
	
	//10 largest amongest 3
	// int a,b,c;
	// cin>>a>>b>>c;
	// if(a>=b and a>=c)
	// 	//a 
	// 	cout<<a<<endl;
	// if(b>=a and b>=c)
	// 	cout<<b<<endl;
	// if(c>=a and c>=b)
	// 	cout<<c<<endl;

	//11 find all the roots of quadratic equation
	// int a;//coeficient of x2
	// int b;//coeficient of x
	// int c;//constant term of quadratic equation
	// cin>>a>>b>>c;
	// int d=(b*b)-(4*a*c);
	// if(d>=0)
	// {
	// 	d=sqrt(d);
	// 	cout<<"Real roots are possibel"<<endl;
	// 	cout<<"root1-->"<<((-1*b)+d)/2*a<<endl;
	// 	cout<<"root2-->"<<((-1*b)-d)/2*a<<endl;
	// }
	// else{
	// 	cout<<"real roots are not possible"<<endl;
	// }

	//12 sum of natural numbers
	// int n;
	// cin>>n;
	// int sum=0;
	// for(int i=1;i<=n;i++)
	// {
	// 	sum+=i;
	// }
	// cout<<sum;

	//13 to check whther leap year or not
	// int n;
	// cin>>n;
	// if(n%4==0)
	// 	cout<<"leap year"<<endl;
	// else
	// 	cout<<"Not leap year"<<endl;
	
	//14 finding the factorial
	// int n;
	// cin>>n;
	// int ans=1;
	// for(int i=n;i>=1;i--)
	// {
	// 	ans*=i;
	// }
	// cout<<ans;

	//15 Generate multiplication table
	// int n;
	// cin>>n;
	// for(int i=1;i<=10;i++)
	// {
	// 	cout<<n*i<<endl;
	// }

	//16 displaying the fibonacci series
	// int n;
	// cout<<"enter the number  of terms to be printed in fibonacci: ";
	// cin>>n;
	// int first=0;
	// int second=1;
	// int next;
	// for(int i=1;i<=n;i++)
	// {
	// 	if(i==1){
	// 		cout<<first<<" ";
	// 		continue;
	// 	}
	// 	if(i==2){
	// 		cout<<second<<" ";
	// 		continue;
	// 	}
	// 	next=first+second;
	// 	first=second;
	// 	second=next;
	// 	cout<<next<<" ";
	// }
	

	// 17 to find gcd of numbers;
	// int a;
	// int b;
	// cin>>a>>b;
	// *first way to solve the problem
	// // while(a!=b){
	// // 	if(a>b){
	// // 		a=a-b;

	// // 	}
	// // 	else{
	// // 		b=b-a;
	// // 	}
	// // }
	// // cout<<a<<endl;
	

	// //second way to find gcd
	// int hcf;
	// int k=min(a,b);
	// for(int i=1;i<=k;i++){
	// 	if(a%i==0 and b%i==0){
	// 		hcf=i;
	// 	}
	// }
	// cout<<hcf<<endl;

	// //18 lcm of two numbers
	// int a;
	// int b;
	// cin>>a>>b;
	// int ans;
	// int m=max(a,b);
	// do{
	// 	if(m%a==0 and m%b==0){
	// 		cout<<m;
	// 		break;
	// 	}
	// 	else
	// 		m++;
	// }while(true);	
	// cout<<m;

	// 19 

	return 0;
}