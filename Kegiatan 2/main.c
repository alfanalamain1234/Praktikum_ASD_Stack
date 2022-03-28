#include <stdio.h>
#define MAXSTACK 100

typedef int ItemType;
typedef struct
{
    int Item[MAXSTACK];
    int Count;
}Stack;

void InisialisasiStack(Stack *S)
{
    S->Count = 0;
}
int Kosong(Stack *S)
{
    return (S->Count == 0);
}
int Penuh(Stack *S)
{
    return (S->Count == MAXSTACK);
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

     if (S->Count==0)
        printf("Stack kosong!\n");
    else
{
        --(S->Count);
        return (S->Item[S->Count]);
    }
}

void cetak(int n, Stack *tampung, char tipe[])
{

    int temp;
    if(menu == 1){
        do{
            temp = desimal%2;
            push(temp, s);
            desimal /= 2;
        }while(desimal != 0);
    }else if(menu == 2){
        do{
            temp = desimal%16;
            push(temp, s);
            desimal /= 16;

        }while(desimal != 0);
    }else if(menu == 3){
        do{
            temp = desimal%8;
            push(temp, s);
            desimal /= 8;
        }while(desimal != 0);
    }
}

{
    int i, hitung, hasil;
    for (i=0; n>0; i++)
{
    hitung = i + 1;
    if (tipe == "Biner")
{
    hasil = n % 2;
    Push(hasil, &(*tampung));
    n = n / 2;
}
    if (tipe == "Oktal")
{
    hasil = n % 8;
    Push(hasil, &(*tampung));
    n = n / 8;
}
    if (tipe == "Heksadesimal")
{
    hasil = n % 16;
        Push(hasil, &(*tampung));
        n = n / 16;
    }
}
        printf("\n%s: ", tipe);
        for (i=0; i<hitung; i++)
{
    if (tipe == "Heksadesimal")
{
    hasil = Pop(&(*tampung));
    if (hasil <= 9)
        printf("%d", hasil);
    else
        printf("%c", hasil + 55);
}
    else
        printf("%d", Pop(&(*tampung)));
    }
}
void main()
{
    int input;
    Stack tumpukan;
    InisialisasiStack(&tumpukan);
        printf("Masukkan angka desimal :");
        scanf("%d", &input);
        fflush(stdin);
        cetak(input, &tumpukan, "Biner");
        cetak(input, &tumpukan, "Oktal");
        cetak(input, &tumpukan, "Heksadesimal");
}
