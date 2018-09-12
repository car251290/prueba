#include <stdio.h>
#include <string.h>

struct Book
{
char title[50];
char author[50];
int isbn;

};
struct Point
{
    int x;
    int y;

};
struct Point add(struck Point p1, struck Point p2)
{
    struck Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;

}
int main()
{
    struct Point p1 ={
        1,1
    };
    struct Point p2 = {
        2,2
    };
    struct Point res = add(p1,p2);
    printf("result (x,y) : %d\n",res.x,res.y);
    struct Book book1
    book1.isbn = 12345;
    strcpy(book1.title = "C programming");
    strcpy(book1.author = "Javier Jesus");
    

    printf("isbn": "%d\n",book1.isbn);
    printf("title": "%d\n",book1.title);
    printf("author": "%d\n",book1.author);

    return 0;
}

