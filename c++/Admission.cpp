#include<iostream>
using namespace std;

double eligibility_ForAdmission(int a,int b,int c){
	if(a<60 || b<60 || c<60){
		throw "Not eligible for Admission";
	}
	return (double)a+b+c;	
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	try{
		cout<<"Total score is "<<eligibility_ForAdmission(a,b,c)<<endl;
	}catch(const char *msg){
		cerr<<msg<<endl;
	}
	return 0;
}