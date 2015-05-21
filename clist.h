#ifndef _STR_H
#define _STR_H

#include<stdio.h>
#include<stdlib.h>

typedef struct CLinkList
{
  int data;
  struct CLinkList *next;
}node;

void ds_init(node **pNode);
void ds_insert(node **pNode,int i);
void ds_delete(node **pNode,int i);
int ds_search(node *pNode,int elem);
#endif



