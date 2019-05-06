#include <stdio.h>
#include <stdlib.h>
#define size 10
struct queue{
int rear;
int front;
int data[size];
};
int i;
int main()
{
void push( struct queue *s,int n);
 void pop(struct queue *s);
 void show(struct queue *s);
     struct  queue s;
     s.rear=0;
     s.front=0;
         push(&s,12);
         push(&s,2);
         push(&s,122);
         push(&s,128);
    show(&s);
     printf("\n-----------------------------------------------------\n");
             pop(&s);
             pop(&s);
             pop(&s);
             pop(&s);

    show(&s);

    return 0;
}
void push( struct queue *s,int n){
     if(s->rear==size){
            printf("stack is full \n");

     }
else{
s->data[(s->rear)++]=n;

}
 }
 void pop(struct queue *s){
      if(s->front==s->rear){
            printf("stack is empty \n");


     }
     else{

      printf("deleted number is : %d \n",(s->data[s->front++])) ;
     }
 }
 void show(struct queue *s){
     if(s->rear==s->front){
            printf("stack is empty \n");
     }
     else{
for(i=s->front;i<s->rear;i++){
        printf("%d   ",s->data[i]);
}
 }
 }
