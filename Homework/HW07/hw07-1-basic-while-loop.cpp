/*
    ผู้ใช้กรอกจำนวนตัวเลข เพื่อพิมพ์คำว่า "Hello World" ตามจำนวนบรรทัดที่ผู้ใช้กรอก
    หากผู้ใช้กรอกเลขคี่ ให้แสดงเลขบรรทัดโดยใช้ []
    หากผู้ใช้กรอกเลขคู่ ให้แสดงเลขบรรทัดโดยใช้ ()
    (โจทย์ข้อนี้ให้ใช้ While Loop เท่านั้น)

    Test case:
        10
    Output:
        (1) Hello World
        (2) Hello World
        (3) Hello World
        (4) Hello World
        (5) Hello World
        (6) Hello World
        (7) Hello World
        (8) Hello World
        (9) Hello World
        (10) Hello World

    Test case:
        7
    Output:
        [1] Hello World
        [2] Hello World
        [3] Hello World
        [4] Hello World
        [5] Hello World
        [6] Hello World
        [7] Hello World

*/

#include <stdio.h> //The program calculates that If the user enters an odd number Display line numbers using [].
    //If the user enters an even number Display line numbers by using ().

int main() {
    int num ;
    
    printf( "Enter number:\n") ;
    scanf( "%d", &num) ;

    int i = 0;
        if (num % 2 == 0) {
    		while (i <= num) {
            	printf( "(%d) Hello World\n", i) ;
            	i++ ;
    		}//end while
        } else {
    		while (i <= num) {
            	printf( "[%d] Hello World\n", i) ;
            	i++ ;
    		}//end while
        }//end else
        

    return 0 ;
}//end main fuction