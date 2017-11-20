#include <iostream>
using namespace std;

inline int operation();
inline int numbers();
inline int calculator(int, int, int);

int main(){
	while(1 ==1){
	int operatorID;
	operatorID = operation();
	if(operatorID ==0){
	break;
	}
	int num1, num2;
	num1 = numbers();
	num2 = numbers();
	cout<<endl;

	calculator(num1, num2, operatorID);
	}

	return 0;
}

int operation(){
  string giris;
  giris =
  "-toplama islemi icin 1'e \n"
  "-cikarma islemi icin 2'e |n"
  "-carpma islemi icin 3'e \n"
  "-bolme islemi icin 4'e \n"
  "-cikmak icin 0'a basiniz \n";
  cout<<giris;
  
	int a;
	cin>>a;
	return a;
}
int numbers(){
	cout<<"İslem yapmak istediginiz sayiyi giriniz";
	int b;
	cin>>b;
	return b;
}
int calculator(int number1, int number2, int  opID){
	int k;
	if(opID ==1){
		k = number1+number2;
		cout<<number1<<" + "<<number2<<"= "<<k<<endl;
		return k;
	}
	if(opID ==2){
		k = number1 - number2;
		cout<<number1<<" - "<<number2<<" = "<<k<<endl;
		return k;
	}
	if(opID ==3){
		k = number1*number2;
		cout<<number1<<" * "<<number2<<" = "<<k<<endl;
		return k;
	}
	if(opID ==4){
		k = number1/number2;
		cout<<number1<<" / "<<number2<<" = "<<k<<endl;
		return k;
	}
	if(opID ==0){
		k = 123456789;
}
}
