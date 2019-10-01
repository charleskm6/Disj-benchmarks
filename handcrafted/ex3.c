int main()
{
    int j=nondet_int();
    int i=0;
    while(i<100)
    {
        if(i==25)
        {
            j=1;
        }
        i++;
    }
    assert(j==1);
    return 0;
}
