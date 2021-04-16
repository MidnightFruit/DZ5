void zapoln(int* n, unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        n[i] = n[i] + 3 * (i) +1;
    }
}