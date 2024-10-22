#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Student {
	int fac_num;
	struct Student* next; 
};

struct Student* head;  

int main() {

	head = (struct Student*) malloc(sizeof(struct Student));

	head->fac_num = 0;
	head->next = NULL;

	struct Student* p = head;
	for (int i = 1; i < 10; i++) {
		struct Student* new_element = (struct Student*) malloc(sizeof(struct Student));

		new_element->fac_num = i;
		new_element->next = NULL;

		p->next = new_element;
		p = p->next;
	}

	for (struct Student* p1 = head; p1 != NULL; p1 = p1->next) {
		printf("%d ", p1->fac_num);
	}



	return 0;
}
