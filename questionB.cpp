#include<iostream>
using namespace std;

int main(){
	int enter;
	cin>>enter;
	cout<<enter<<"\n";
	while(1){
		if(enter==1){
			break;
		}
		if((enter%2)==1){
			enter = (enter*3)+1;
		}
		else{
			enter = enter/2;
		}
		cout<<enter<<"\n";
	}
	return 0;
}
