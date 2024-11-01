#include<stdio.h>
int main()
{
    char color_code;
    scanf(" %c", &color_code );
    switch(color_code)
    {
        case 'V':
        printf("Violet\n");
        break;
        case 'I':
        printf("Indigo\n");
        break;
        case 'G':
        printf("Green\n");
        break;
        case 'B':
        printf("Blue\n");
        break;
        case 'Y':
        printf("Yellow\n");
        break;
        case 'O':
        printf("Orange\n");
        break;
        case 'R':
        printf("Red\n");
        break;
        default:
        printf("-1\n");
        break;
    }
    return 0;
}

    

