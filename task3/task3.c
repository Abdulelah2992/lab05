#include <stdio.h>

        int sum(int a , int b){
        return a+b; }
        float add(float c, float d){
        return c+d;}
        float areaC(float e){
        return 3.14*e*e;}
        float areaT(float f, float g){
        return f*g;}
        int fac(int k){
            int m=1 ;
            for (int i=0 ;i<k ; i++){
            
             m *= k;
             k -= 1;
             
            }
        return m ;
            
        }
        

        int main() {
                int addInt = sum(10,30);
                printf("Sum of 10+30= %d \n",addInt);
                float addfloat = add(12.2,7.8);
                printf("Sum of 12.2 + 7.8 = %f \n",addfloat);
                float AC= areaC(3);
                printf("the area of Circle with radius 3 is : %f \n",AC);
                float AT= areaT(3,2);
                printf("the area of rectangle with width 3 and length 2 is : %f \n",AT);
                int fact= fac(3);
                printf("the factorial of 3 = %d \n", fact);
                
        return 0;
        }
