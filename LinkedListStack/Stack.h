#pragma once

class Stack
{
public:
	void Push(int value);
	int Pop();
	int Size();
	bool Empty() const;

	Stack() = default;
	Stack(const Stack& old_obj);
	Stack& operator= (const Stack& other); 
	~Stack(); 





private:
	struct LinkedList
	{

		LinkedList(int val);
		LinkedList() = default;
		~LinkedList();
		LinkedList(const LinkedList& old_obj);
		LinkedList& operator= (const LinkedList&) = delete;

		int value2;
		LinkedList* node = nullptr;

	};

public:
	LinkedList* headpointer = nullptr;
	LinkedList* lastpointer = nullptr;
	LinkedList* pointer2 = nullptr;

	Stack(LinkedList* ptr);



};