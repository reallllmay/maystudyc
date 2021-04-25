
struct maylist
{
	int maxsize;
	int currentsize;
	int* startaddr;
};

void initlist(maylist& L, int size);
void destroylist(maylist& L);
void clearlist(maylist& L);
int listlength(maylist L);
void getelem(maylist L, int i, int& e);
int locateelem(maylist L, int elem);
int priorelem(maylist L, int elem);
int nextelem(maylist L, int elem);
void ListInsert(maylist& L, int i, int elem);
void ListDelete(maylist& L, int i, int& elem);
void ListTraverse(maylist L);
#pragma once
#pragma once
