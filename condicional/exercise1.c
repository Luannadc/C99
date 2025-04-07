#include <stdio.h>
#include <math.h>
//This program calculates the distance between two points in a 2d space.
//It uses the formula d = sqrt((x2-x1)^2 + (y2-y1)^2) to calculate the distance.
int main(){
    int x1, y1, x2, y2;
    float distance;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("Distance from (%d %d) to (%d %d) is %.2f\n", x1, y1, x2, y2, distance);
}