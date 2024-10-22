#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
void insert_element_at_the_end(int fac_num); 
void delete_element(int fac_num);
 
struct Student {
	int fac_num;
	struct Student* next; //shte sochi kum takuv element
};
 
struct Student* head;   //sochi kum purviq elemnt ot lista
 
int main() {
 
	head = (struct Student*) malloc(sizeof(struct Student));
 
	head->fac_num = 0;
	head->next = NULL;
 
	struct Student* p = head;
	for (int i = 1; i < 10; i++) {
		insert_element_at_the_end(i);
	}
 
	for (struct Student* p1 = head; p1 != NULL; p1 = p1->next) {
		printf("%d ", p1->fac_num);
	}
 
	printf("\n");
 
	delete_element(3);
	for (struct Student* p1 = head; p1 != NULL; p1 = p1->next) {
		printf("%d ", p1->fac_num);
	}
 
	return 0;
}
 
void insert_element_at_the_end(int fac_num) {
	struct Student* new_element = (struct Student*) malloc(sizeof(struct Student));
	new_element->fac_num = fac_num;
	new_element->next = NULL;
 
	struct Student* p;
	for (p = head; p->next != NULL; p = p->next){
 
	}
	p->next = new_element;
 
}
 
void delete_element(int fac_num) {
	if (head->fac_num == fac_num) {
		head = head->next;
	}
 
	for (struct Student* p = head; p->next != NULL; p = p->next) {
		if (p->next->fac_num == fac_num) {
			p->next = p->next->next;
		}
	}
}

