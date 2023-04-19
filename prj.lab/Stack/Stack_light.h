#include<iostream>
#include<vector>

template<typename T>
class Stack_light {
public:
	Stack_light() = default;

	Stack_light(Stack_light& copy) {
		for (size_t i = 0; i < copy.stack_.size(); i++) {
			this->stack_.push_back(copy.stack_[i]);
		}
	}

	void push(T val_) {
		this->stack_.push_back(val_);
	}

	void pop() {
		if (this->stack_.size()) {
			this->stack_.pop_back();
		}
		else {
			std::cout << "request error\n";
		}
	}

	T back() {
		if (this->stack_.size()) {
			return this->stack_.back();
		}
		else {
			std::cout << "request error\n";
		}
	}

	size_t size() {
		return this->stack_.size();
	}

	void clear() {
		this->stack_.clear();
	}

	~Stack_light() = default;

private:
	std::vector<T> stack_;
};