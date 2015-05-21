#include"clist.h"
void ds_insert(node **pNode,int i)
{
  node *temp;
  node *target;
  node *p;
  int item;
  int j=1;

  printf("input the data you want to insert:\n");
  scanf("%d",&item);

  if(i==1)
  {
    temp=(node *)malloc(sizeof(struct CLinkList));
    if(!temp)
      exit(0);
   
    temp->data=item;

    for(target=(*pNode);target->next!=(*pNode);target=target->next)
     ;
   
    temp->next=(*pNode);
    target->next=temp;
    *pNode=temp;
  }
  else
  { 
    target=*pNode;
    for(;j<(i-1);++j)
    { 
      target=target->next;
    }
    temp=(node *)malloc(sizeof(struct CLinkList));

    if(!temp)
      exit(0);

    temp->data=item;
    p=target->next;
    target->next=temp;
    temp->next=p;
  }
}
