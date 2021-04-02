
void TOH (int a, char beg, char aux, char end)
{
    if(a>0)
    {
        TOH(a-1, beg, end, aux);
        printf("%c to %c\n",beg,end);
        TOH(a-1, aux, beg, end);
    }
}

int main()
{
    int a;
    char beg='p', aux='q', end='r';
    printf("Enter a no.\n");
    scanf("%d",&a);
    TOH(a, beg, aux, end);

    return 0;
}
