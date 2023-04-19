#include<Tree_vector/Tree_v.h>

int main() {
	Tree_v f_;
	//std::cout << f_.append_node(1) << std::endl; //код 0 == ok
	//std::cout << f_.append_node(1) << std::endl; //код 2 == already_exists
	//std::cout << f_.find_key(1) << std::endl; //код 3 == yes
	//std::cout << f_.find_key(2) << std::endl; // код 4 == no
	//std::cout << f_.delete_node(1) << std::endl; //код 0 == ok
	//std::cout << f_.delete_node(2) << std::endl; //код 1 == not_exists
	
	f_.append_node(10);
	f_.append_node(20);
	f_.append_node(17);
	f_.append_node(16);
	f_.append_node(13);
	f_.append_node(15);
	f_.append_node(14);
	f_.delete_node(13);
	int el = 1;
	int el1 = 2;
}