
#include <stdio.h>
#include <math.h>
#include <conio.h>
int functisyachi(chislo)
{
    int tisyachi = chislo / 1000;
    switch (tisyachi)
    {
    case 1:
        puts("Odna tisyacha");
        break;
    case 2:
        puts("Dve tisyachi");
        break;
    case 3:
        puts("Tri tisyachi");
        break;
    case 4:
        puts("Chetire tisyachi");
        break;
    case 5:
        puts("Piat tisyach");
        break;
    case 6:
        puts("Shest tisyach");
        break;
    case 7:
        puts("Sem tisyach");
        break;
    case 8:
        puts("Vosem tisyach");
        break;
    case 9:
        puts("Deviat tisyach");
        break;
    }
}
int funcsotni(chislo)
{
    int sotni = chislo / 100;
    switch (sotni)
    {
    case 1:
    case 11:
    case 21:
    case 31:
    case 41:
    case 51:
    case 61:
    case 71:
    case 81:
    case 91:
        puts("Sto");
        break;

    case 2:
    case 12:
    case 22:
    case 32:
    case 42:
    case 52:
    case 62:
    case 72:
    case 82:
    case 92:
        puts("Dvesti");
        break;
    case 3:
    case 13:
    case 23:
    case 33:
    case 43:
    case 53:
    case 63:
    case 73:
    case 83:
    case 93:
        puts("Trista");
        break;
    case 4:
    case 14:
    case 24:
    case 34:
    case 44:
    case 54:
    case 64:
    case 74:
    case 84:
    case 94:
        puts("Chetiresta");
        break;
    case 5:
    case 15:
    case 25:
    case 35:
    case 45:
    case 55:
    case 65:
    case 75:
    case 85:
    case 95:
        puts("Piatsot");
        break;
    case 6:
    case 16:
    case 26:
    case 36:
    case 46:
    case 56:
    case 66:
    case 76:
    case 86:
    case 96:
        puts("Shestsot");
        break;
    case 7:
    case 17:
    case 27:
    case 37:
    case 47:
    case 57:
    case 67:
    case 77:
    case 87:
    case 97:
        puts("Semsot");
        break;
    case 8:
    case 18:
    case 28:
    case 38:
    case 48:
    case 58:
    case 68:
    case 78:
    case 88:
    case 98:
        puts("Vosemsot");
        break;
    case 9:
    case 19:
    case 29:
    case 39:
    case 49:
    case 59:
    case 69:
    case 79:
    case 89:
    case 99:
        puts("Deviatsot");
        break;
    }
}
int funcdesiatki(chislo)
{
    int desiatki = (chislo % 100) / 10;
    switch (desiatki)
    {
    case 1:
        puts("Desiat");
        break;
    case 2:
        puts("Dvadcat");
        break;
    case 3:
        puts("Tridcat");
        break;
    case 4:
        puts("Sorok");
        break;
    case 5:
        puts("Piatdesiat");
        break;
    case 6:
        puts("Shestdesiat");
        break;
    case 7:
        puts("Semdesiat");
        break;
    case 8:
        puts("Vosemdesiat");
        break;
    case 9:
        puts("Devianosto");
        break;
    }
}
int funcchisla(chislo)
{
    int chisla = (chislo % 100) % 10;
    switch (chisla)
    {
    case 1:
        puts("Odin");
        break;
    case 2:
        puts("Dva");
        break;
    case 3:
        puts("Tri");
        break;
    case 4:
        puts("Chetire");
        break;
    case 5:
        puts("Piat");
        break;
    case 6:
        puts("Shest");
        break;
    case 7:
        puts("Sem");
        break;
    case 8:
        puts("Vosem");
        break;
    case 9:
        puts("Deviat");
        break;
    }
}

int main()
{
    int chislo, res;
    chislo = rand() % 9000 + 1000;
    res = functisyachi(chislo), funcsotni(chislo), funcdesiatki(chislo), funcchisla(chislo);
    printf("%d, %d", res, chislo);
}