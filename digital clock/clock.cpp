#include<iostream>
using namespace std;
#include<windows.h>
int main(){
	int hr,min,sec;
	cout<<"Enter the current time in format hh mm ss ";
	cin >> hr >> min >> sec;
	system("cls");
	while(hr<24){
		while(min<60){
			while(sec<60){
				Sleep(1000);
				system("cls");
				cout<<"hh  mm   ss"<<endl;
				sec++;
				cout<<hr<<" : "<<min<<" : "<<sec<<endl;
				}
			min++;
			sec=0;
		}
		hr++;
		min=1;
	}

	
}
