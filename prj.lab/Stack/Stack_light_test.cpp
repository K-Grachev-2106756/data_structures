#include<iostream>
#include<Stack/Stack_light.h>

int main() {
	Stack_light<int> s_;
	s_.push(1);
	std::cout << s_.back() << std::endl;
	s_.pop();
	s_.pop();
	std::cout << s_.size() << std::endl;
}