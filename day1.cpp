#include <iostream>
#include <string>
void greetings(std::string name){
	std::printf("Nice to meet you %s.\nWelcome to my daily dairy! ", name.c_str());
	std::cout << "My name is Ntina\n";
}
int main(int argc, char* argv[]){
	std::string name;
	if(argc == 1){
		std::cout<< "Hello there nice to meet you, what is your name? " <<std::endl;
		std::cin >> name;
		greetings(name);
	} else {
		greetings(argv[1]);
	}
	return 0;
}
