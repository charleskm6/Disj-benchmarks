void main()
{
  int x=1000000;
  while (x>30||x<-30)
  {
    if (x<0)
      x=-x-1;
    else
      x=-x+1;
  }
  assert(x!=0);
}
