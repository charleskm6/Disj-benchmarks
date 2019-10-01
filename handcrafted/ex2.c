void main()
{
    int i=0;
    while (i<100)
    {
    	if (i<50)
            i++;
        else
            i+=50;
    }
    assert(i<=100);
}
