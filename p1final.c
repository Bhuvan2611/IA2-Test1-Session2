#include <stdio.h>
void input(float *base,float *height){
  printf("enter the base and height of the triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area){
  *area=(0.5)*base*height;
}
void output(float base,float height,float area){
  printf("the area of triangle is %f",area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;
}
