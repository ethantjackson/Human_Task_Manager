#pragma once
#include <stack>
#include <utility>

#include "Component.h"

class Iterator
{
protected:
	struct base_iterator
	{
		base_iterator(Component* ptr);
		Component* ptr;
		int index;
		int num_children;
	};
	std::stack<base_iterator> node_stack;

public:
	Iterator(Component* ptr);

	void next();
	bool is_done();
	Component* current_node();
	int current_index();
};

