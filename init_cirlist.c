#include"clist.h"
void ds_init(node **pNode)
{
  int item;
  node *temp;
  node *target;
  
  printf("input the value of node, stop with 0\n");
  
  while(1)
  {
    scanf("%d",&item);
    fflush(stdin);
    if(0==item)
     return;

    if((*pNode)==NULL)
    {
      *pNode=(node *)malloc(sizeof(struct CLinkList));
      if(!(*pNode))
         exit(0);
      (*pNode)->data=item;
      (*pNode)->next=*pNode;
    }
    else
    {
      for(target=(*pNode);target->next!=(*pNode);target=target->next)
      ;   //find the last node;
        temp=(node *)malloc(sizeof(struct CLinkList));
        if(!temp)
          exit(0);
        temp->data=item;
        temp->next=pNode;
	target->next=temp;
      
    }
  }
}
