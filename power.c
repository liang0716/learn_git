//int base的pow次方，用recursive
int pow_int(int base, int pow)
{
    int data;
    if(pow == 0)
    {
        data = 1;
    }
    else
    {
        data = base * pow_int(base, (pow - 1));
    }

    return data;
}
