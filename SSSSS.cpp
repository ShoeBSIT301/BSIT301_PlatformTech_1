#include <iostream>
#include <thread>
#include <string>

using namespace std;

void bars1(int x){
	int i = 0;
	for(i = 0; i < x; i++) {
		cout << "This is thread 1 \n";
	}
}

void bars2(int x){
	int i = 0;
	for(i = 0; i <x; i++){
		cout << "This is thread 2 \n";
	}
}

void bars3(int x){
	int i = 0;
	for(i = 0; i <x; i++){
		cout << "This is thread 3 \n";
	}
}

void bars4(int x){
	int i = 0;
	for(i = 0; i <x; i++){
		cout << "This is thread 4 \n";
	}
}

int main() {

	int i = 0;
	thread th1(bars1, 4);
	thread th2(bars2, 4);
	thread th3(bars3, 4);
	thread th4(bars4, 4);
	
	
	for(i = 0; i < 10; i++) {
		cout << "This print is from Main Method \n";
		
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	return 0;
	
}
