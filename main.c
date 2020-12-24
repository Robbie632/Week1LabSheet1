#include <stdio.h>


void printHelloWorld(void);
void printXTenTimes(void);
void convertMetricToImperialHeights(void);
void fibonacci(void);
void volumeOfACylinder(void);

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  printXTenTimes();

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights();

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
  printf("Hello World\n");

  //declaringing variables
  int mynumber;
  float ans;

  //ask for input
  printf("input a number");

  //check input stream for int
  scanf("%d", &mynumber);

  //calculate answer
  ans = ((((mynumber + 3)*2)-4)-2*(mynumber))+3;

  //print answer
  printf("answer is %f \n", ans);

}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(void){

  //ask for input
  int mysecondnumber;
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int h;
  int i;
  int j;
  

  printf("input a number to print x to x + 10\n");

  //check input stream for int
  scanf("%d", &mysecondnumber);
  a = mysecondnumber + 1;
  b = a +1;
  c = b + 1;
  d = c + 1;
  e = d + 1;
  f = e + 1;
  g = f + 1;
  h = g + 1;
  h = g + 1;
  i = h + 1;
  j = i + 1;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
  printf("%d\n", g);
  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);

}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(void){

  printf("what is your height in centimetres? \n");
  //[bug] below is 0

  float cm_to_inch = 101;
  cm_to_inch = cm_to_inch/254;
  const float inches_in_foot = 12; 
  float inches;
  float height;
  float feet;
  //check input stream for int
  //printf("cm_to_inch %f", cm_to_inch);
  scanf("%f", &height);
  inches = height*cm_to_inch;
  printf("inches are %f", inches);
  feet = inches/inches_in_foot;
  printf("your height in feet is %f", feet);

}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2   


 Call this function from the main to test your program.
 */

 void fibonacci(void){
    int current = 1;
    int previous =0;
    int next;
    int start = 0;

    for (int i=0; i< 10; ++i) {
      next = current + previous;
      printf("next is %d \n", next);
      previous = current;
      current = next;
    }
 





 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(void){

  float height;
  float radius;
  float vol;


  const float pi = 3.14;

  printf("what is the height ? \n");

  scanf("%f", &height);

  printf("what is the radius ? \n");
  
  scanf("%f", &radius);

  vol = pi*radius*radius*height;

  printf("volume is %f", vol);

}