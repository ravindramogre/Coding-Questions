#include <stdio.h>
#include <iostream>
using namespace std;
#define N 1e5+7
#define Pi 3.14
//basic recursion
int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}
class Student{
    string name;
    int age;
public:
    Student(string name="xyz",int age=1){
        this->name=name;
        this->age=age;
    }
    Student(Student &s){
        name=s.name;
        age=s.age;
    }
    string getName(){return name;}
    int getAge(){return age;}
};
class Ram: public 
//linked list concept
struct Node{
    int data;
    Node* next;
}*first=NULL;

int main()
{
    //printf("Hello World");
    //Student s1("ram",23);
    //Student s2(s1);
    //cout<<s2.getName();
    //cout<<factorial(5);
    //cout<<N;
    /*for(int i=0; i<20; i++){
        for(int j=0; j<=i; j++)cout<<"*";
        cout<<endl;
    }*/
    /*for(int i=0; i<20; i++){
    	for(int j=0; j<20-i; j++)cout<<" ";
    	for(int k=0; k<=i; k++)cout<<" *";
    	cout<<endl;
	}*/
	//n should be odd
	int n=9;
	/*for(int i=0; i<n/2+1; i++){
		for(int j=0; j<n/2; j++)cout<<" ";
		cout<<"*"<<endl;
	}
	for(int i=0; i<n; i++){
		cout<<"*";
	}
	cout<<endl;
		for(int i=0; i<n/2+1; i++){
		for(int j=0; j<n/2; j++)cout<<" ";
		cout<<"*"<<endl;
	}*/
    return 0;
}

