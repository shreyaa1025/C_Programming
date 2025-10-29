//1 .  caluclate the area of a rectangle using hard coded input and using input supplied by the user
#include <stdio.h>

int main() {
//    int length =3; (this is the hard coded input)
//    int breadth =6;(this is the hard coded input)


    int length , breadth;
    printf("enter the length:");
    scanf("%d",&length);
    
    printf("enter the breadth:");
    scanf("%d",&breadth);
    
    printf("Tthe are of the rectangle is %d",length*breadth);

    return 0;
}
