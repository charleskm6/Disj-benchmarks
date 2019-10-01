int main()
{
    int x=0;
    int y=0;
    while (x<10)
    {
        if (x<5 && y<5)
        {
            x++;
            y++;
        }
        else if (x>=5)
        {
            x+=5;
        }
        else if (y>=5)
        {
            y+=5;
        }        
    }
    assert(y==5);
    return 0;
}