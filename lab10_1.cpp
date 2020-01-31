#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
	
	string x,y,z="";
	
	cout<<"Press Enter 3 time to reveal your future.";
	getline(cin,x);
	getline(cin,y);
	getline(cin,z);
	srand(time(0));
	int a=rand()%9;
	if(a==0) cout<<"You will get A in this 261102";
	else if(a==1)cout<<"You will get B+ in this 261102";
	else if(a==2)cout<<"You will get B in this 261102";
	else if(a==3)cout<<"You will get C+ in this 261102";
	else if(a==4)cout<<"You will get C in this 261102";
	else if(a==5)cout<<"You will get D+ in this 261102";
	else if(a==6)cout<<"You will get D in this 261102";
	else if(a==7)cout<<"You will get F in this 261102";
	else if(a==8)cout<<"You will get W in this 261102";
	return 0;
}