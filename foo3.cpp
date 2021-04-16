void sdvig(int* n, unsigned int size, int s)
{
    int a[5];
    int c; 
    for (int i = 0; i < size; i++)
    {
        a[i] = n[i];
    } 
    for (int j = 0; j < size; j++)
    {
        c = j + s;
        n[j] = a[c];
    }
}