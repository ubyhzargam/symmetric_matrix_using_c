//
//  main.cpp
//  symmetric_matrix_using_c
//
//  Created by Uby H on 01/07/23.
//

#include <iostream>
using namespace std;
struct Mat
{
    int n;
    int *A;
};
void set(struct Mat *m,int i,int j, int x);
int get(struct Mat m,int i, int j);
void Display(struct Mat m);
void set(struct Mat *m,int i,int j, int x)
{
    if(i>=j)
        m->A[(m->n)*(j-1)-((j-2)*(j-1)/2)+(i-j)]=x;
}
int get(struct Mat m,int i,int j)
{
    if(i>=j)
        return m.A[(m.n)*(j-1)-((j-2)*(j-1)/2)+(i-j)];
    else
        return m.A[(m.n)*(i-1)-((i-2)*(i-1)/2)+(j-i)];
}
void Display(struct Mat m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
                cout<<m.A[(m.n)*(j-1)-((j-2)*(j-1)/2)+(i-j)]<<"  ";
            else
                cout<<m.A[(m.n)*(i-1)-((i-2)*(i-1)/2)+(j-i)]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    struct Mat m;
    m.n=5;
    m.A=(int*)malloc(((m.n)*((m.n)+1)/2)*sizeof(int));
    set(&m,1,1,1);
    set(&m,2,1,2);
    set(&m,2,2,3);
    set(&m,3,1,4);
    set(&m,3,2,5);
    set(&m,3,3,6);
    set(&m,4,1,7);
    set(&m,4,2,8);
    set(&m,4,3,9);
    set(&m,4,4,8);
    set(&m,5,1,7);
    set(&m,5,2,6);
    set(&m,5,3,5);
    set(&m,5,4,4);
    set(&m,5,5,3);
    Display(m);
    return 0;
}

