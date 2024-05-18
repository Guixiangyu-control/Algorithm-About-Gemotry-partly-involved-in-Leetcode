#include "judgePointInTriangle.h"
#include <stdio.h>
#include <math.h>

int crossProductatZ( int x[] , int y[]){
    return x[0]*y[1] - y[0]*x[1];
}

int JudgePointInTriangle1(int a[],int b[],int c[],int p[]){
    int ab[3] = { b[0] - a[0] , b[1] - a[1] , 0};
    int bc[3] = { c[0] - b[0] , c[1] - b[1] , 0};
    int ca[3] = { a[0] - c[0] , a[1] - c[1] , 0};
    int ap[3] = { p[0] - a[0] , p[1] - a[1] , 0};
    int bp[3] = { p[0] - b[0] , p[1] - b[1] , 0};
    int cp[3] = { p[0] - c[0] , p[1] - c[1] , 0};
    return (crossProductatZ( ab , ap) > 0) ^ (crossProductatZ( bc , bp) > 0) ^ (crossProductatZ( ca , cp) > 0);
}

double triangleArea(int x[],int y[],int z[]){
    double xy = sqrt( pow(x[0]-y[0],2) + pow(x[1]-y[1],2) );
    double yz = sqrt( pow(z[0]-y[0],2) + pow(z[1]-y[1],2) );
    double zx = sqrt( pow(x[0]-z[0],2) + pow(x[1]-z[1],2) );
    double S = (xy+yz+zx)/2;
    double area = sqrt(S*(S-xy)*(S-yz)*(S-zx));
    return area;
}

int JudgePointInTriangle2(int a[],int b[],int c[],int p[]){
    //TiangleArea
    double S1 = triangleArea( a,b,p );
    double S2 = triangleArea( a,c,p );
    double S3 = triangleArea( b,c,p );
    double S = triangleArea( a,b,c );
    if( S1 == 0 || S2 == 0 || S3 == 0 ){ 
       return 0;
    }

    if(  S - (S1+S2+S3) <= 0.001 && S - (S1+S2+S3) >= -0.001){
       return 1;
    } 
    return 0;
}
