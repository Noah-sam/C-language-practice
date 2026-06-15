#include<stdio.h>
#include<math.h>

 int main()
 {
    //area of circle
    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("enter radius: ");
    scanf("%lf" , &radius);

     area = PI * pow(radius, 2);
     surfacearea = 4 * PI * pow(radius, 2);
     volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("area is : %.2lf\n", area); 
    

    printf("surface area is : %.2lf\n", surfacearea);

   

    printf("volume is : %.2lf\n", volume);

    


    return 0;

 }
