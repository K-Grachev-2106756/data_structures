#include<iostream>
#include<vector>
#include<queue>
enum Status {ok, not_exists, already_exists, yes, no };

class Tree_v {
public:
	Tree_v() = default;
	Tree_v(Tree_v& copy);
	Status find_key(int val_) const;
	Status append_node(int val_);
	Status delete_node(int val_);
	~Tree_v() = default;
private:
	std::vector<int> tree_;
};