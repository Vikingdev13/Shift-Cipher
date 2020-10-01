#include <stdio.h>
#include <stdlib.h>

#define SIZE 500

int getChoice();
int getShift();
void getString(char buf[]);
void encrypt(char buf[], int shift);
void decrypt(char buf[], int shift);

// Global variable
int shift = 3;

int main()
{

    getChoice();

    return 0;
}

int getChoice()
{
    int choice;
    char buf[SIZE];

    // Create menu options
    printf("-------------------------------\n");
    printf("| 1) Change Shift (default 3) |\n");
    printf("| 2) Encrypt a message        |\n");
    printf("| 3) Decrypt a message        |\n");
    printf("| 4) Quit                     |\n");
    printf("-------------------------------\n");

    printf("Choose from above: ");
    scanf("%d", &choice);

    // choices for menu
    switch (choice)
    {
    case 1:
        printf("Option %d\n", choice);
        printf("Enter a new shift value: ");
        scanf("%d", &shift);
        getChoice();
        break;

    case 2:
        printf("Option %d\n", choice);
        fgets(buf, 500, stdin);
        getString(buf);
        encrypt(buf, shift);
        getChoice();
        break;

    case 3:
        printf("Option %d\n", choice);
        fgets(buf, 500, stdin);
        getString(buf);
        decrypt(buf, shift);
        getChoice();
        break;

    case 4:
        printf("Option %d\n", choice);
        printf("Good Bye!\n");
        exit(0);

    default:
        printf("Invalid selection, please enter an integer from 1-4\n");
        exit(0);
    }
    printf("\n");

    return 0;
}

int getShift()
{
    return shift;
}

void getString(char buf[])
{
    fgets(buf, 500, stdin);
    printf(" Input: %s", buf);
}

// Encrypt the message
void encrypt(char buf[], int shift)
{
    char ch;
    int k;

    shift = getShift();

    for (k = 0; buf[k] != '\0'; k++)
    {
        ch = buf[k];

        if ((ch >= 'a') && (ch <= 'z')) // for lowercase letters
        {
            ch -= shift;

            if (ch > 'z')
            {
                ch = ch + 'z' - 'a' + 1;
            }

            buf[k] = ch;
        }
        else if ((ch >= 'A') && (ch <= 'Z')) // for uppercase letters
        {
            ch -= shift;

            if (ch > 'Z')
            {
                ch = ch + 'Z' - 'A' + 1;
            }

            buf[k] = ch;
        }
        else if (ch >= '!' && ch <= '~') // for punctuation and symbols
        {
            ch -= shift;

            if (ch > '~')
            {
                ch = (ch + shift - 128) % 28 + 128;
            }
            buf[k] = ch;
        }
    }
    printf("Output: %s\n", buf);
}

// Decrypt the message
void decrypt(char buf[], int shift)
{
    int k;
    char ch;

    shift = getShift();

    for (k = 0; buf[k] != '\0'; k++)
    {
        ch = buf[k];

        if (ch >= 'a' && ch <= 'z') // for lowercase letters
        {
            ch += shift;

            if (ch < 'a')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            buf[k] = ch;
        }

        else if (ch >= 'A' && ch <= 'Z') // for uppercase letters
        {
            ch += shift;

            if (ch < 'A')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            buf[k] = ch;
        }
        else if (ch >= '!' && ch <= '~') // for punctuation and symbols
        {
            ch += shift;

            if (ch > '~')
            {
                ch = (ch - shift + 128) % 28 - 128;
            }
            buf[k] = ch;
        }
    }
    printf("Output: %s\n", buf);
}