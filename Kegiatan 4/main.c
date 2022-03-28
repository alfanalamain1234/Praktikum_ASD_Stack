#include <stdio.h>
#define MAXSTACK 40

typedef char ItemType;
typedef struct

{
    char Item[MAXSTACK];
    int Count;
    }
Stack;
void InisialisasiStack(Stack *S)
{
    S->Count = 0;
}
    int Kosong(Stack *S)
{
    return
    (S->Count == 0);
}
    int Penuh(Stack *S)
{
    return
    (S->Count == MAXSTACK);
}
void Push(ItemType x, Stack *S)
{
    if (Penuh(S))
        printf("Stack penuh!\n");
    else
{
        S->Item[S->Count] = x;
        ++(S->Count);
}
}
    char Pop(Stack *S)
{
    if (Kosong(S))
        printf("Stack kosong!\n");
    else { --(S->Count);
    return
        (S->Item[S->Count]);
    }
}
void main()
{
    int i, n = 0;
    int palindrome = 1;
    char input[MAXSTACK], temp;
    Stack tampung;
    InisialisasiStack(&tampung);

    printf("Masukkan kalimat : ");
    gets(input);
        fflush(stdin);
        for (i = 0; input[i] != '\0'; i++)
{
    Push(input[i], &tampung); n++;
}
    for (i = 0; i < n; i++)
{
    temp = Pop(&tampung);
    printf("%c", temp);
    if (input[i] != temp) palindrome = 0;
}
    if (palindrome)
        printf("\n\nKalimat di atas adalah palindrome");
    else
        printf("\n\nKalimat di atas bukan palindrome");
}
