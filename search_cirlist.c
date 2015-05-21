#include"clist.h"
int ds_search(node *pNode,int elem)
{
  node *target;
  int i=1;
  for(target=pNode;target->next!=pNode && target->data!=elem;++i)
  {
     target=target->next;
  }
  
  if(target->next==pNode)
    return 0;
  else
   return 1;
}
