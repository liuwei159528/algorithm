#include"clist.h"

void ds_traverse(node *pNode)
{
  node *temp;
  temp=pNode;

  printf("*************the data in cirlinklist*************\n");

  do
  {
    printf("%4d",temp->data);
  }while((temp=temp->next)!=pNode);

  printf("\n");

}

int main()
{  
  node *pHead;
  pHead=NULL;
  char opp;
  int find;
  printf("\n------------------------------\n\n");
  printf("1.init_cirlist\n2.insert_cirlist\n3.delete_cirlist\n4.search_cirlist\n5.traverse_cirlist\n0:end\n\n");
  while(opp!='0')
  {
    scanf("%c",&opp);
    switch(opp)
    {
      case '1':
         ds_init(&pHead);
         printf("\n");
         ds_traverse(pHead);
         break;
     case '2':
 	 printf("input the order you want to insert:\n");
         scanf("%d",&find);
         ds_insert(&pHead,find);
         printf("the new list is:");
    	 ds_traverse(pHead);
         printf("\n");
 	 break;
    case '3':
         printf("input the order you want to delete:\n");
         scanf("%d",&find);
    	 ds_delete(&pHead,find);
	 printf("the new list is:");
 	 ds_traverse(pHead);
	 printf("\n");
	 break;
    case '4':
 	 printf("input the order of node you want to search?\n");
         scanf("%d",&find);
         printf("the %d node: %d\n",find,ds_search(pHead,find));
	 printf("\n");
	 break;
    case '5':
	 ds_traverse(pHead);
 	 printf("\n");
	 break;
    case '0':
 	 exit(0);

    }
  }
return 0;
}
