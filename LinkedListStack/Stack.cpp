#include "Stack.h"

void Stack::Push(int value)
{

	if (headpointer == nullptr) {


		headpointer = new LinkedList(value);
		lastpointer = headpointer;


	}

	else
	{
		pointer2 = new LinkedList(value);
		lastpointer->node = pointer2;
		lastpointer = pointer2;





	}
}

int Stack::Pop()
{
	if (Stack::Empty()) {
		return -1;
	}

	if (Size() == 1) {
		int y = headpointer->value2;
		delete headpointer;
		headpointer = nullptr;
		lastpointer = nullptr;
		return y;
	}

	LinkedList* ptr = headpointer;
	LinkedList* ptr2 = nullptr;

	while (ptr->node != nullptr) {
		ptr2 = ptr;
		ptr = ptr->node;
	}

	int x = ptr->value2;

	lastpointer = ptr2;
	lastpointer->node = nullptr;

	delete ptr;
	ptr = nullptr;
	ptr2 = nullptr;

	return x;
}

int Stack::Size()
{
	LinkedList* ptr = headpointer;
	int count = 0;
	while (ptr != nullptr) {
		count++;
		ptr = ptr->node;
	}

	ptr = nullptr;

	return count;
}

bool Stack::Empty() const
{
	if (headpointer == nullptr) {
		return true;
	}
	return false;
}



Stack::Stack(const Stack& old_obj) 
{
	int newVal = -1;
	if (old_obj.headpointer != nullptr) {

		newVal = old_obj.headpointer->value2;

	}



	LinkedList* ptr = old_obj.headpointer;




	while (ptr != nullptr) {

		Push(newVal);

		ptr = ptr->node;

		if (ptr != nullptr) {

			newVal = ptr->value2;
		}
	}
}

Stack& Stack::operator=(const Stack& other)
{
	int newVal = -1;
	if (other.headpointer != nullptr) {

		newVal = other.headpointer->value2;

	}



	LinkedList* ptr = other.headpointer;




	while (ptr != nullptr) {

		Push(newVal);

		ptr = ptr->node;

		if (ptr != nullptr) {

			newVal = ptr->value2;
		}
	}

	return *this; 
}

Stack::~Stack()
{
	/*delete headpointer; 
	delete lastpointer; 
	delete pointer2;

	headpointer = nullptr; 
	lastpointer = nullptr; 
	pointer2 = nullptr; */
}



Stack::LinkedList::LinkedList(int val)
	: value2(val)
{


}

Stack::LinkedList::~LinkedList()
{
	
	
}

Stack::Stack(LinkedList* ptr)
	:headpointer(ptr)
{


}

