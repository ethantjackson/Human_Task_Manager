#include "Iterator.h"

Iterator::Iterator(Component* ptr)
{
	node_stack.push(base_iterator(ptr));
}

void Iterator::next()
{
	base_iterator& it = node_stack.top();
	int old_index = it.index++;
	if (old_index < it.num_children) {
		Component* child = it.ptr->get_child(old_index);
		node_stack.push(base_iterator(child));
	}
	else {
		node_stack.pop();
	}
	while (!is_done() && it.index > it.num_children) {
		node_stack.pop();
		it = node_stack.top();
	}
}

bool Iterator::is_done()
{
	return node_stack.empty();
}

Component* Iterator::current_node()
{
	return node_stack.top().ptr;
}

int Iterator::current_index()
{
	return node_stack.top().index;
}

Iterator::base_iterator::base_iterator(Component* ptr)
	:ptr(ptr), index(0), num_children(ptr->num_children())
{
}
