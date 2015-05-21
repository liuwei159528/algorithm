#include"clist.h"
void ds_delete(node **pNode,int i)
{
  node *target;
  node *temp;
  int j=i;

  if(i==1)
  {
    for(target=*pNode;target->next!=*pNode;target=target->next)
      ;

    temp=*pNode;
    *pNode=(*pNode)->next;
    target->next=*pNode;
    free(temp);
  }
  else
  {
    target=*pNode;
    for(;j<i-1;++j)
    {
      target=target->next;
    }
    temp=target->next;
    target->next=temp->next;
    free(temp);
  }
}
