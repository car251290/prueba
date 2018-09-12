#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



typedef struct sllist
{
int val;
struct sllist *next;
} sllnode;

 sllnode * create (int vale)
{
    sllnode *node;
    // check to make sure we didnt run out of memmory.
    node = malloc(sizeof(int));
    if(node == NULL)
    {
        printf("Error: memory allocation.\n");

        return NULL;
    }
    // Initialize the node's val field
       node-> val = vale;
       //initialize the node's next field
        node->next = NULL;
        // return a pointer to the newly created sllnode

     return node;

}
bool find(sllnode *head, int vale){
    // CREATE A TRAVERSAL pointer to the list head (we dont head)
   

    sllnode *current= head;

    while(current != NULL)
    {
      
        if(current-> val == vale)
        {

            return true;
        } 
        current = current-> next;
         
         
         return false;

    }
}
   


    sllnode *insert(sllnode *head, int vale)
    {
        sllnode *new_node;

        new_node = malloc(sizeof(sllnode));
        if(new_node== NULL)
        {
           printf("Error: memory allocation.\n");

            return NULL;
        }

        new_node -> val=vale;
        new_node-> next = head;
        head = new_node;

        return head;

    }

    void destroy(sllnode *head)
    {
        // if you reached a null pointer, stop.
        if(head == NULL)
        {
            return;
            // delete the rest of the list
            destroy(head->next);
            //free the current node
            free(head);
      

        }
        void delate_node(sllnode *head, int n)
        {
              sllnode *current= head;
              //0 index node
            if(n== 0)
            {
                current = current->next;
                free(removed);

            }
            //other node 
            //last index node

            free(*head) 
        }
      
    
    



int main()
{
    sllnode *first;
     first = create(10);
    return 0;




}