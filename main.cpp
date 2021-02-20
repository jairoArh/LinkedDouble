#include <iostream>
#include "Book.h"
#include "LinkedDouble.cpp"

using namespace std;

int main() {
    LinkedDouble<Book>* linked = new LinkedDouble<Book>();
    linked->addNodeFirst( Book("654234","Juego de Tronos","George R.R. Martin",894,1996));
    linked->addNodeLast( Book("8374","Choque de Reyes","George R.R. Martin",932,2000));
    linked->addNodeFirst( Book("82744","El Caballero de los Siete Reinos","George R.R. Martin",243,2015));
    linked->addNodeLast( Book("25354","Tormenta de Espadas","George R.R. Martin",892,2004));

    for (Book book : linked->getList( false ) ){
        cout<<book<<endl;
    }

    return 0;

}
