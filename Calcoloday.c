#include <stdio.h>

int main() {

    int G, M, A;
    char scelta;


    do
    {
    
    
    
    puts("Inserisci giorno/mese/anno: ");
    scanf("%d%d%d", &G, &M, &A);
    
    
    if(M > 12 || M < 1)
        puts("\nIl mese mi dispiace inserito non è valido");
    if (M == 2)
    {
        if(G > 29)
            puts("\nIl giorno mi dispiace è fuori da questo mese questo mese");
        if(A % 400 == 0 || A % 4 == 0 && A % 100 > 0){
            if(G <= 28)
                printf("\n%d/%d/%d\n", (G + 1), M, A );
            else if (G == 29)
                printf("\n1/%d/%d\n",(M + 1), A );
        }else if(G <= 29){
            if(G > 28)
                puts("\nIl giorno mi dispiace è fuori da questo mese questo mese");
            if(G == 28)
                printf("\n1/%d/%d\n",(M + 1), A );
            if(G < 28)
                printf("\n%d/%d/%d\n", (G + 1), M, A );
        }
    }else if (M == 4 || M == 6 || M == 9 || M ==  11)
    {
        if(G > 30)
            puts("\nIl giorno mi dispiace è fuori da questo mese questo mese");
        else if (G == 30)
            printf("\n1/%d/%d\n",(M + 1), A );
        else    
            printf("\n%d/%d/%d\n", (G + 1), M, A );
    }else if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
    {
        if(G > 31)
            puts("\nIl giorno mi dispiace è fuori da questo mese questo mese");
        else if(G == 31 && M == 12)
            printf("\n1/1/%d\n", (A + 1));
        else if (G == 31)
            printf("\n1/%d/%d\n",(M + 1), A );
        else    
            printf("\n%d/%d/%d\n", (G + 1), M, A );
    }
    

    puts("\nVuoi continuare? (Y/n)  ");
    scanf("%s", &scelta);
    puts("\n");
    
    } while (scelta == 'Y' || scelta == 'y');

}




