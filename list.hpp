#include <iostream>

using namespace std; 

typedef struct no {

    int dado;
    struct no *prox;
    
    
}No;

void initList(No **list){

    *list = NULL;
}

/// inserts at the beginning of the list

bool insert(No **list, int value){

    No *novo = new No(); // allocate memory
    if(!novo)
    return false;
    novo->dado = value;
    novo->prox= *list;
    *list = novo;
    return true;
}

void showList(No *list){

    No *n = list;
    cout<<"\nlist values:\n";
    while(n != NULL){ // while n =! NULL stay in the loop
        cout<<n->dado <<"\t";
        n = n->prox;
    }
    cout<<endl;
}

// removes a specific value from the list
bool remove(No **list, int value){
    No *previous = NULL;
    No *current = *list;
    // stay in the loop as long as there are elements in the list
    // adn not to find the appreciated value 
    while(current && current->dado != value){
        previous = current;
        current = current->prox;
    }
    // can go out of the loop and not to find the the value | current = NULL
    // if to find >> current have the adress of element to exclude 
    // NULL == false >> !false == true
    if(!current) // if current is NULL >> not find
        return false;
    if(!previous) // if previous is = NULL
    { // the element to be excluded is on begin on the list
        *list = current->prox;
    }else // element is in the between or in the end
    previous->prox = current->prox;


//release the memory of the element
delete(current); 
return true;

}

// No* search(No *list, int value){

//     No *n = list;

//     return n;
// }