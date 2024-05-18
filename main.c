#include "judgePointInTriangle.h"
#include <stdio.h>
#include <stdlib.h>

void test_judgePointInTriangle(){
     struct JPiT* JPITClass = (struct JPiT*)malloc(sizeof(struct JPiT));
     JPITClass -> func2 = &JudgePointInTriangle2;
     int a[2] = {0,0} ; int b[2] = {10,10} ; int c[2] ={-10,10} ;int p[2] = {12,9};
     int res = JPITClass -> func2( a, b , c , p);
     if(res==1) printf("point in Triangle");
     else printf("point not int Triangle");
}

int main(){
     test_judgePointInTriangle();
     return 0;
}
