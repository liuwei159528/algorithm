#define MAXSIZE 1000

typedef int ElemType;
typedef struct 
{
  ElemType data;  //shuju
  int cur;   //youbiao(Cursor)
}Component, StaticLinkList[MAXSIZE];


int InitList(StaticLinkList space)
{
  int i;
  for(i=0;i<MAXSIZE-1;i++)
    space[i].cur=i+1;

  space[MAXSIZE-1].cur=0;
  return 1;
}

int Malloc_SLL(StaticLinkList space)
{
  int i=space[0].cur;
  if(space[0].cur)
    space[0].cur=space[i].cur;
  return i;
}

int ListInsert(StaticLinkList L, int i, ElemType e)
{
  int j,k,l;
  k=MAXSIZE-1;
  if(i<1 || i>ListLength(L)+1)
  {
    return 0;
  }
  j=Malloc_SLL(L);
  if(j)
  {
    L[j].data=e;
    for(l=1;l<i-1;l++)
    {
      k=L[k].cur;
    }
    L[j].cur=L[k].cur;
    L[k].cur=j;
    return 1;
  }
  return 0;
}

