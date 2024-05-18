typedef struct JPiT{
    int (*func1)(int a[],int b[],int c[],int p[]);
    int (*func2)(int a[],int b[],int c[],int p[]);
}JPiT;

int crossProductatZ( int x[] , int y[]);
int JudgePointInTriangle1(int a[],int b[],int c[],int p[]);
int JudgePointInTriangle2(int a[],int b[],int c[],int p[]);
double triangleArea(int x[],int y[],int z[]);
