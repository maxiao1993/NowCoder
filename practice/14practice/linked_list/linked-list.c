#include<stdio.h>
#include"node.h"
#include<stdlib.h>

// typedef struct _node{
//     int value;
//     struct _node *next;
// }Node;

// typedef struct _list{
//     Node * head;

// }List;
void add (List * plist, int number);
void traverse(List *plist);
void search(List list,int number);
void delete(List *plist,int number);
void delete_All(List *plist);

int main(int argc,char const *argv[]){
    int number;  
    List list;
    list.head = NULL;
    //Node *head = NULL;
  
    do
    {
        scanf("%d",&number);
        if (number != -1){
           add(&list,number);
        }
    } while (number != -1);

    traverse(&list);

    scanf("%d",&number);
    
    search(list,number);
    delete(&list,number);
    traverse(&list);
    delete_All(&list);

    return 0;
}

void add (List * plist, int number){
//  add to linked-list
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;

//  find the last
    Node *last = plist->head;
    if (last)
    {
        while (last->next){
            last = last->next;
        }

        //  attach
        last->next = p;
    }else{
        plist->head = p;
    }
}


void traverse (List *plist){
    Node *p;
    for(p = plist->head ; p ; p = p->next){
        printf("%d\t", p->value);
    }
    printf("\n");
}

void search(List list,int number){
    Node *p;
    int isFound = 0;
    for (p = list.head; p ; p=p->next)
    {
        if(p->value == number){
            printf("找到了\n");
            isFound = 1;
            break;
        }
    }
    if (!isFound){

        printf("没找到\n");
    }
}

void delete(List *plist,int number){
 Node *p;
 Node *q;
    for (q = NULL,p = plist->head; p ;q = p, p=p->next)
    {
        if(p->value == number){     //Any pointer at the left of -> 
            if(q){
                q->next = p->next;   //must be checked
            }else{
                plist->head = p->next;
            }
            free(p);
            break;
        }
    }
}

void delete_All(List *plist){
Node *p;
Node *q;
 for(p = plist->head;p; p=q){
        q = p->next;
        free(p);
    }
}