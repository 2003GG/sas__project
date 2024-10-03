#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
const char arr[[]];
int size = sizeof(arr) / sizeof(char);
char nom[200];
char prenom[200];
char statu[200];
int age[200];
int date[200];
int telephone[200];
int i, pos, u, j, length;
int modifier, supprime;
// int count_unique;

struct informations
{
    char ajoute()
    {

        printf("nom : ");
        scanf("%s", &nom);
        printf("prénom : ");
        scanf("%s", &prenom);
        printf("age : ");
        scanf("%d", &age);
        printf("numéro du telephone : ");
        scanf("%d", &telephone);
        printf("la date de réservation : ");
        scanf("%d", &date);

        printf("\n______________________________________\n");
        // printf("-----choise un statut----\n");
        printf("Statu\n");
        printf("pour valide--->1\n");
        printf("pour reporte--->2\n");
        printf("pour annule--->3\n");
        printf("pour traite--->4\n");
        printf("choise un statu: ");
        scanf("%d", &statu);
        switch (status)
        {
        case 1:
            printf("votre reservation est valide");
            break;

        case 2:
            printf("votre reservation est report");
            break;
        case 3:
            printf("votre reservation est annule");
            break;
        case 4:
            printf("votre reservation est traite");
            break;
        default:
        }
    }
} struct count_unique
{
    int reference_unique()
    {
        srand(reference - unique(0));
        int id = rand() % 200;
        printf("votr id est : ");
        scanf("%d", &id);
    }
}

struct change
{

    void modifier()
    {
        char nouveu_nom;
        char nouveu_prénom;
        int nouveu_age;
        char nouveu_date;
        int nouveu_telephone;
        int nouveu_statu;

        printf("_________modification_______");
        printf("pour modifier le nom---->1\n");
        printf("pour modifier le prénom---->2\n");
        printf("pour modifier le numero de telephone---->3\n");
        printf("pour modifier l'age---->4\n");
        printf("pour modifier la date---->5\n");
        printf("pour modifier statu---->6\n");
        scanf("%d", &modifier);
    case 1:
    {
        printf("entre  nouveau nom : \n");
        scanf("%s", change.modifier.nouveu_nom);
        strcpy(information.nom[200], change.modifier.nouveu_nom);
        break;
    }
    case 2:
    {
        printf("entre nouveau prénom : \n");
        scanf("%s", change.modifier.nouveu_prénom);
        strcpy(information.prénom[200], change.modifier.nouveu_prénom);
        break;
    }
    case 3:
    {
        printf("entre nouveau numero de telephone : \n");
        scanf("%s", change.modifier.nouveu_telephone);
        strcpy(information.telephone[200], change.modifier.nouveu_telephone);
        break;
    }
    case 4:
    {
        printf("entre nouveau l'age : \n");
        scanf("%d", change.modifier.nouveu_prénom);
        strcpy(information.age[200], change.modifier.nouveu_age);
        break;
    }
    case 5:
    {
        printf("entre nouveau date : \n");
        scanf("%s", change.modifier.nouveu_date);
        strcpy(information.date[200], change.modifier.nouveu_date);
        break;
    }

    case 6:
    {
        printf("entre nouveau statu:  : \n");
        scanf("%s", change.modifier.nouveu_statu);
        strcpy(information.statu[200], change.modifier.nouveu_statu);
        break;
    }
        // case 2 :
        // printf("entre le numero de réservation : ");
        // scanf("%d",&pos);
        // for(i=pos-1; i<size-1;i++)
        // arr[[i]]==arr[[i+1]];
        // size--;
        void supprime()
        {
            printf("_________supprime_______");
            printf("pour supprime le nom---->1\n");
            printf("pour supprime le prénom---->2\n");
            printf("pour supprime le numero de telephone---->3\n");
            printf("pour supprime l'age---->4\n");
            printf("pour supprime la date---->5\n");
            printf("pour supprime statu")
                scanf("%d", &modifier);
        }
    }
}
// tri declaration //
struct triselection
{

    triselection(char dates[], int size);
    printf("tableau des dates \n");
    affichage(date, size);

    int tri()
    {
        for (i = 0; i < size; i++)
        {
            int min_idx == i;
            for (j = i + 1; j < size; j++)
                if (dates[j] < nom[min_idx])

                    min_idx == j:
        }
        echanger(&nom[min_idx], &nom[i]);
    }

    void echanger(int *a; int *b)
    {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }

    void afficher()
    {
        printf("la liste de details");
        printf("nom : %s", information.ajoute.nom);
        printf("prénom : %s", information.ajoute.prenom);
        printf("age : %d", information.ajoute.age);
        printf("status : %s", informaion.ajoute.status);
        printf("dates : %s", information.ajoute.dates);
        printf("number de telephone : %d", information.ajoute.telephone);
        printf("reference unique : %s", count_unique.reference_unique.id);
    }

    int main()
    {

        int choise;
        printf("bien vune a la cabine\n");
        printf("pour ajoute votre informations-->1\n");
        printf("pour modifier ou supprime un réservation--->2\n ");
        printf("pour afficher les details d'un réservation--->3\n");
        printf("pour tri des réservations--->4\n");
        printf("pour recherch des reservations--->5\n");
        printf("pour statistique--->6\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            ajoute();
            break;
        case 2:
            modifier_ou_supprime();
            break;
        case 3:
            afficher();
            break;
        case 4:
            tri();
            break;
        case 5:
            recherch();
            break;
        case 6:
            statstiques();
        }

        return 0;
    }