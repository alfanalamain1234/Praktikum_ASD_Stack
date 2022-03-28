#include <stdio.h>
#include <string.h>
#define MAX 40

typedef char ItemType;
typedef struct{
    ItemType Item[MAX];
    int Count;
}Stack;

void inisialisasiStack(Stack *S)
{
    S->Count = 0;
}
int Kosong(Stack *S)
{
    return (S->Count == 0);
}
int Penuh(Stack *S)
{
    return (S->Count == MAX);
}
void Push(ItemType x, Stack *S)
{
    if (Penuh(S))
        printf("Stack penuh\n");
    else {
        S->Item[S->Count] = x;
        S->Count++;
    }
}

ItemType Pop(Stack *S)
{
    if (Kosong(S))
        printf("Stack kosong\n");
    else
    {
        S->Count--;
        return S->Item[S->Count];
    }
}

int main()
{
    char input[50];
    Stack tampung;
    inisialisasiStack(&tampung);

    printf("Masukkan Karakter : ");
    gets(input);

    for(int a=0; a<=strlen(input); a++){
        if(input[a] >= 'A' && input[a] <= 'Z') {
        Push(input[a], &tampung);
        }
        else if(input[a] >= 'a' && input[a] <= 'z'){
            Push(input[a], &tampung);
        }
        else if(input[a] == '*'){
            printf("%c", Pop(&tampung));
        }
    }
    return 0;
}
