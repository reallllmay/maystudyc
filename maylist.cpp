#include <stdio.h>
#include <stdlib.h>
#include "maylist.h"

void initlist(maylist& L, int size)
{
	L.maxsize = size;
	L.currentsize = 0;
	L.startaddr = (int*)malloc(size * 4);
}

void destroylist(maylist& L)
{
	free(L.startaddr);
}

void clearlist(maylist& L)
{
	for (int i = 0; i < L.maxsize; i++)
	{
		*(L.startaddr + i) = 0;
	}
	L.currentsize = 0;
}

int listlength(maylist L)
{
	return L.currentsize;
}

void getelem(maylist L, int i, int& e)
{
	e = *(L.startaddr + i - 1);
}

int locateelem(maylist L, int elem)
{
	for (int i = 0; i < L.currentsize; i++)
	{
		if (*(L.startaddr + i) == elem)
		{
			return i + 1;
		}
	}
	return 0;
}

int priorelem(maylist L, int elem)
{
	int i;
	i = locateelem(L, elem);
	if (i != 1 && i != 0)
	{
		return *(L.startaddr + i - 1 - 1);
	}
}

int nextelem(maylist L, int elem)
{
	int i;
	i = locateelem(L, elem);
	if (i != L.currentsize && i != 0)
	{
		return *(L.startaddr + i);
	}
}

void ListInsert(maylist& L, int i, int elem)
{
	for (int j = L.currentsize; j >= i; j--)
	{
		*(L.startaddr + j) = *(L.startaddr + j - 1);
		*(L.startaddr + j - 1) = 0;
	}
	*(L.startaddr + i - 1) = elem;
	L.currentsize += 1;

}

void ListDelete(maylist& L, int i, int& elem)
{
	elem = *(L.startaddr + i - 1);
	*(L.startaddr + i - 1) = 0;
	for (int j = i + 1; j <= L.currentsize; j++)
	{
		*(L.startaddr + j - 2) = *(L.startaddr + j - 1);
		*(L.startaddr + j - 1) = 0;
	}
	L.currentsize -= 1;
}

void ListTraverse(maylist L)
{
	for (int i = 0; i < L.currentsize; i++)
	{
		printf("%d ", *(L.startaddr + i));
	}
	printf("\n");
}
