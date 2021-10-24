#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArr(int a[], int l){
	int newArr[l];
	for(int i=0; i<l; i++){
		newArr[i]=a[l-1-i];
	}
	for(int i=0; i<l; i++){
		a[i]=newArr[i];
	}
}
int MxinArr(int arr[], int n){
	int Mx=INT_MIN;
	for(int i=0;i<n; i++){
		if(arr[i]>Mx)Mx=arr[i];
	}
	return Mx;
}
int MninArr(int arr[], int n){
	int Mn=INT_MAX;
	for(int i=0;i<n; i++){
		if(arr[i]<Mn)Mn=arr[i];
	}
	return Mn;
}
int main(){
	//Final 450 questions
	int arr[]={1,3,4,5,8,3};
	//Q1
	reverseArr(arr,6);
	for(int i=0; i<6; i++)cout<<arr[i]<<" ";
	cout<<endl;
	//Q2
	cout<<MxinArr(arr,6)<<endl;
	cout<<MninArr(arr,6)<<endl;
	//Q3
	sort(arr,arr+(sizeof(arr)/sizeof(int)));
	int k=3;
	cout<<arr[k-1];
	//Q5
	cout<<endl;
	int a[]={-1,-5,-8,2,1,-2,3,5};
	int n=sizeof(a)/sizeof(int);
	int b[n];
	int j=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]>0){
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0; i<n; i++)a[i]=b[i];
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	cout<<endl;
	//Q7
	int temp=a[0];
	for(int i=0 ;i<n-1; i++)a[i]=a[i+1];
	a[n-1]=temp;
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	cout<<endl;
	//Q8
	int arr[]={-4,-2,1,4,5,-8,-1};
	n=sizeof(arr)/sizeof(int);
	int sum=0,mxSum=INT_MIN;
	for(int i=0; i<n; i++){
		sum+=arr[i];
		if(mxSum<sum)mxSum=sum;
		if(sum<0){
			sum=0;
		}
	}
	//Q9
	return 0;
}
