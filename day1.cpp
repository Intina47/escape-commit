#include <iostream>
#include <string>

int main(int argc, char* argv[]){
	std::string name;
	if(argc < 2){
		std::cout<< "Hello there nice to meet you, what is your name? " <<std::endl;
		std::cin >> name;
		std::cout << "Nice meeting you " << name <<std::endl;
	} else {
		std::cout << "Nice to meet you " << argv[1] <<std::endl;
		std::cout << "My name is Ntina\n";
	}
	return 0;
}
