#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
		int condition;
		cout << "How many time you want generate the numbers : ";
		cin >> condition;
		
		for(int i = 1; i <= condition ; i++){
		
			cout << i << " >>> " <<  rand() << endl;
			
		}
	
}
