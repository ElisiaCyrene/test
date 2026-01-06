#pragma once
#ifndef DATA_H
#define DATA_H

typedef struct student{
	char id[10];
	char name[20];
	int score;
}Student;

typedef struct llist{
	void *data;
	struct llist *next;
	struct llist *prve;
}LList;

#endif
