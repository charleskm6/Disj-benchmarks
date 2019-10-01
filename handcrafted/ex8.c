int main()
{
    int y=5;
    int x=nondet_int();
    if (x>y)
        x=y;
    while (x<=10)
    {
        if (x>=5)
            y++;
        x++;
    }

    assert(y==11);
}