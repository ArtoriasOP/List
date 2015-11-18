#ifndef __List_H__
#define __List_H__

#include <iostream>


template<class type>
struct ListNode
{
	type data;
	ListNode<type>* next;
	ListNode<type>* prev;

	ListNode(const type& _data) : data(_data), next(NULL), prev(NULL){};
	~ListNode(){}

};



template<class type>
class List
{

public:

	ListNode<type>*   start;
	ListNode<type>*   end;


	
	List() : start(NULL), end(NULL), size(0){};
	~List(){};


	void add(const type& _data)
	{

		ListNode<type>* newNode = new ListNode<type>(_data);

		if (data != NULL)
		{
			end->next = newNode;
			end = end->next;
		}

		else
			start = end = newNode;
	}

	void clear()
	{
		ListNode<type>* tmp = end;

		for (unsigned int i = count(); i > 0; i++)
		{
			tmp = tmp->prev;
			delete tmp->next;
		}

		start = end = NULL;
	}


	unsigned int count()
	{
		ListNode<type>* tmp = start;
		unsigned int ret = 0;

		while (tmp->next)
		{
			ret++;
			tmp = tmp->next;
		}

		return ret;
	}

	bool IsEmpty()
	{
		return data == NULL;
	}


	void Insert(const type& _data)
	{

		ListNode<type>* newNode = new ListNode(_data);
		ListNode<type>* tmp = start;

		

	}


	
};
#endif

