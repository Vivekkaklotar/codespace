int main()
{
    int choice=2;
    switch (choice)
    {
        case 1:
            printf("\n sunday");
            break;
        case 2:
            printf("\n monday");
            break;
        case 3:
            printf("\n tuesday");
            break;
        case 4:
            printf("\n wednesday");
            break;
        case 5:
            printf("\n thursday");
            break;
        case 6:
            printf("\n friday");
            break;
        case 7:
            printf("\n saturday");
            break;
        default:
            printf("\n invalid choice");
    }
    
    int a=10,b=2;
    char op='+';

    switch (op)
    {
    case '+':
        printf("\n sum is %d",a+b);
        break;
    case '-':
        printf("\n sub is %d",a-b);
        break;
    case '*':
        printf("\n mul is %d",a*b);
        break;
    case '/':
        printf("\n div is %d",a/b);
        break;
    default:
        printf("\n invalid input");
       
    return 0;
    }
}