bool checkBalance(int* n, unsigned int size)
{
    int right = 0;
    int sum = 0;
    bool balans = 0;
    for (int j = 0; j < size; j++)
        {
            sum += n[j];
        }
    for (int i = 0; i < size; i++)
    {
        right += n[i];
    
    if (right == sum - right)
    {
        balans = 1;
    }
    }
    return balans;
}