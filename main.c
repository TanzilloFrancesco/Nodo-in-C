#include <stdio.h>
#include "nodo.h"

void stampa(Nodo *head);

int main()
{
    Nodo *head = NULL;

    stampa(head);/*stampa della lista vuota: head-->NULL*/

    Nodo n1;
    n1.val = 1;
    n1.next = NULL;

    head = &n1;

    stampa(head);/*stampa della lista: head-->n1-->NULL*/

    Nodo n2;
    n2.val = 2;
    n2.next = NULL;

    n1.next = &n2;

    stampa(head);/*stampa della lista mettendo n2 in coda: head-->n1-->n2-->NULL*/

    Nodo n3;
    n3.val = 3;
    n3.next = NULL;

    n3.next = head;
    head = &n3;

    stampa(head);/*stampa della lista mettendo n3 in testa: head-->n3-->n1-->n2-->NULL*/
    
    return 0;
}


void stampa(Nodo *head)
{
    Nodo *temp;

    temp = head;
    while (temp != NULL) {
        printf("%d ---> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}