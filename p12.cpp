#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Please enter your age:";
	cin>>age;
	if(age >17)
		cout<<"You are eligble to vote. your age is"<<age<<" years old.\n";
	else 
		cout<<"sorry you are not eligible to vote!";
}
