#include<iostream>
using namespace std;

string collatz_conjecture(int number){
	string out;

	out += to_string(number);
	out += " ";

	while(number != 1){
	  if (number % 2 != 0){
		  number = 3 * number + 1;
		  out += to_string(number);
		  out += " ";
		}


	  if (number % 2 == 0){
	      number = number/2;
		  out += to_string(number);
	      out += " ";
		}
	}

	return out;
}

int main(){
	cout << collatz_conjecture(7);
	return 0;
}
