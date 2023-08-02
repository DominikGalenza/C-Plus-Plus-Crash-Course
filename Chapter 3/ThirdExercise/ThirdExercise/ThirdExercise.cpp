#include <cstdio>

struct Element
{
	Element* next{};
	Element* previous{};
	
	void insert_after(Element* new_element)
	{
		new_element->next = this->next;
		this->next = new_element;
		new_element->previous = this;
	}

	void insert_before(Element* new_element)
	{
		new_element->next = this;
		new_element->previous = this->previous;
		this->previous = new_element;
	}

	char prefix[2];
	short operating_number;
};

int main()
{
	Element element1, element2, element3;

	element1.prefix[0] = 'E';
	element1.prefix[1] = '1';
	element1.operating_number = 100;
	element2.prefix[0] = 'E';
	element2.prefix[1] = '2';
	element2.operating_number = 200;
	element2.insert_before(&element1);
	element2.insert_after(&element3);
	element3.prefix[0] = 'E';
	element3.prefix[1] = '3';
	element3.operating_number = 300;

	printf("List traversal from front to back:\n");
	for (Element* i = &element1; i; i = i->next)
	{
		printf("Element %c%c %d\n", i->prefix[0], i->prefix[1], i->operating_number);
	}

	printf("\nList traversal from back to front:\n");
	for (Element* i = &element3; i; i = i->previous)
	{
		printf("Element %c%c %d\n", i->prefix[0], i->prefix[1], i->operating_number);
	}
}