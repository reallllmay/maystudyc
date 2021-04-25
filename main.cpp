//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>

//int main(void) {
    //求面积
    //float a,b,c,s,area;
    //scanf("%f%f%f",&a,&b,&c);
    //s = (a + b + c) / 2;
    //area = sqrt(s * (s - a) * (s - b) * (s - c));
    //printf("%f", area);

    //求根
    //float a, b, c, x1, x2, q, p;
    //scanf("%f%f%f", &a,&b,&c);
    //q = (sqrt(b * b - 4 * a * c)) / (2 * a);
    //p = (-b) / (2 * a);
    //x1 = p + q;
    //x2 = p - q;
    //printf("%f%f", x1, x2);
    //分数评级
    //int a;
    //scanf("%d",&a);
    //if (a < 60) printf("E");
    //else if (a < 70) printf("D");
    //else if (a < 80) printf("C");
    //else if (a<90) printf("B");
    //else printf("A");
    //a,b,c排序
    //int a, b, c, t;
    //scanf("%d%d%d", &a, &b, &c);
    //if (a > b)
    //{
    //    t = a;
    //    a = b;
    //    b = t;
    //}
    //printf("%d,%d,%d\n", a, b, c);
    //if (a > c)
    //{
    //    t = a;
    //    a = c;
    //    c = t;
    //}
    //printf("%d,%d,%d\n", a, b, c);
    //if (b > c)
    //{
    //    t = b;
    //    b = c;
    //    c = t;
    //}
    //printf("%d,%d,%d", a, b, c);
    //int a, b,max;
    //scanf("%d%d",&a,&b);
    //max = (a > b) ? a:b;
    //printf("%d", max);
    //int a;
    //scanf("%d", &a);
    //switch (a)
    //{
    //case 1:printf("myh");break;
    //case 2:printf("zgr");break;
    //default:
    //    printf("scl");
    //}
    //输入最大最小值
    //int a, b, c, max, min;
    //scanf("%d%d%d", &a,& b, &c);
    //if (a > b)
    //{
    //    max = a;
    //    min = b;
    //}
    //else
    //{
    //    max = b;
    //    min = a;
    //}
    //if (max < c) max = c;
    //if (min > c) min = c;
    //printf("max=%d,min=%d", max, min);
    //
    /*char a;
    float b, c;
    scanf("%f%c%f", &b, &a, &c);
    switch (a)
    {
    case '+':printf("%f", b + c);break;
    case '-':printf("%f", b - c);break;
    case '*':printf("%f", b * c);break;
    case '/':printf("%f", b / c);break;
    default:
        printf("error");
    }*/
    //闰年
    //int a;
    //scanf("%d", &a);
    //if (a % 400 == 0)
    //{
    //    printf("1");
    //    return 0;
    //}
    //   
    //if (a%100==0)
    //{
    //    printf("0");
    //    return 0;
    //}

    //if (a % 4 == 0) printf("1");
    //else printf("0");
    //运费
    //int p, w, s;
    //float f,d;
    //scanf("%d%d%d",&p,&w,&s);
    //if (s < 200) d = 0;
    //if (250 <= s && s < 500)  d = 0.02;
    //if (500 <= s&&s < 1000) d = 0.05;
    //if (1000 <= s && s < 2000) d = 0.08;
    //if (s>=3000)    d = 0.15;
    //f = p * w * s * (1 - d);
    //printf("%f", f);
    //int a = 0;
    //for (int i = 0; i < 100; i++)
    //{
    //    a += i;
    //}
    //printf("%d", a);
    
    /*int i, j;
    for (i = 0;i < 2;i++)
        for (j = 0;j < 2;j++)
            printf("%d,%d", i, j);*/
    //for (i = 0;i < 2;i++)
    //    printf("%d", i);
    //输出圣诞树
   /* for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    //互不相同的数
    /*int i, j, k;
    for (int i = 1; i < 5; i++)
        for (int j = 1; j < 5; j++)
            for (int k = 1; k < 5; k++)
                if (i!=j&&i!=k&&j!=k)
                {
                    printf("%d%d%d\n", i,j,k);
                }*/
    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 1)
            {
                continue;
            }
            printf("%d,%d\n", i,j);
        }

    }*/
    //被3整除
   /* for (int n = 100; n < 201; n++)
    {
        if (n % 3 == 0) continue;
        printf("%d\n", n);
    }*/
//求π
    /*float di,sum=0;
    for (int i = 0; i<100;i++)
    {
        di = 2 * i + 1;
        if (i%2==0)
        {
            sum = sum + 1 / di;
        }
        else
        {
            sum = sum - 1 / di;
        }
    }
    printf("%f", sum*4);*/
    //斐波那契数列
    //int qian1 = 1, qian2 = 1, sum = 0;
    //for (int i = 0; i < 40; i++)
    //{
    //    sum = qian1 + qian2;
    //    printf("%d\n", sum);
    //    qian2 = qian1;
    //    qian1 = sum;
    //}
//判断质数
    /*int m;
    scanf("%d", &m);
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            printf("0");
            break;
        }
        else
        {
            if (i == m - 1) printf("1");
        }
        
    }*/      
    /*char m, n;
    int x;
    scanf("%d%c", &x,&m);
    if (x == 1)
    {
        if ((m >= 65 && m <= 86) || (m >= 97 && m <= 118))
        {
            n = m + 4;
            printf("%c", n);
        }
        else
        {
            n = m - 22;
            printf("%c", n);
        }
    }
    else
    {
        if ((m>= 69 && m <= 90) || (m >= 101 && m <= 122))
        {
            n = m - 4;
            printf("%c", n);
        }
        else
        {
            n = m + 22;
            printf("%c", n);
        }
    }*/
//数组斐波那契数列
    /*int a[5] = { 1,1 },i;
    for ( i = 2; i < 5; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
        printf("%d\n", a[i]);
    }*/
//冒泡法 a[0]
   /* int a[10] = {6,1,7,2,8,4,5,9,13,33},i,t;
    for (int k = 9; k >0; k--)
    {
        for ( i = 0; i < k; i++)
            {
                if (a[i]>a[i+1])
                {
                    t = a[i];
                    a[i ] = a[i+1];
                    a[i + 1] = t;
                }
            }
    }
     for ( int j= 0; j < 10; j++)
        {
            printf("%d,", a[j]);
        }*/
    
   /* int i,j,a[3][5] = { { 80,61,59,85,76 }, { 75,65,63,87,77 }, {92,71,70,90,85} };
    float x;
    for (j = 0; j <3; j++)
    {
        x = 0;
        for (i = 0; i < 5; i++)
            {
                x += a[j][i];
            }
        printf("%f\n", x / i);   
    }*/
     
    // 3科目，2学生   （1）每科目平均分  （2）全部科目平均分
    //float a[3][2] = { {72,59},{66,81},{77,76} },sum=0;
    //float average1, average2,x=0;
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //        {
    //            sum += a[i][j];
    //        }
    //            
    //            average1 = sum / 2;
    //            printf("%2.2f,", average1);
    //            x += average1;
    //            sum = 0;
    //}
    //average2 = x / 3;
    //printf("\n%2.2f", average2);
    
//2行3列，最大值以及对应的行号列号
    //int a[2][3] = { {4,8,5},{6,2,3} },max=0,x,y,i,j;
    //for (i = 0; i < 2; i++)
    //{
    //    for (j = 0; j < 3; j++)
    //    {
    //        if (max < a[i][j])
    //        {
    //            max = a[i][j];
    //            x = i+1;
    //            y = j+1;
    //        
    //        } 
    //        
    //    
    //    }    
    //}
    //
    //printf("max=%d,%d,%d", max, x, y);
 //输出任意行 任意列所有数
   /* int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int row=3;
    int column=3;
    for (int i = 0; i < 3; i++)
    {
        printf("%d,", a[row-1][i]);
        
    }
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
        printf("%d,", a[j][column-1]);

    }*/
//行列互换
    //#define row 5
    //#define column 13
    //int a[row][column],k=1;
    //
    //for (int j = 0; j < row; j++)
    //{
    //    for (int i = 0; i < column; i++)
    //        {
    //            a[j][i] = k;
    //            k += 1;
    //        }
    //    
    //}    
    //for (int m = 0; m < column; m++)
    //{
    //    for (int n = 0; n < row; n++)
    //        {
    //            printf("%d ", a[n][m]);

    //        }
    //    printf("\n");
    //}
    //

    /*int a[10] = { 1,4,4,8,10,13,14,20,26,45 };*/
    /*int target = 8;
    for (int i = 0; i < 10; i++)
    {
        
        if (target==a[i])
        {
            printf("%d", i);
            return 0; 
        }

    }    
    printf("not exist");*/

//折半查找
    //int a[10] = { 1,4,4,8,10,13,14,20,26,45 },n=10,mid,target=26;
    //int low=0, high=n-1;
    //while (1)
    //{
    //    mid = (low + high) / 2;
    //    if (a[mid]==target)
    //    {
    //        printf("%d", mid);
    //        return 0;
    //    }
    //    else if (a[mid]>target)
    //    {
    //        high = mid;
    //    }
    //    else
    //    {
    //        low = mid;
    //    }
    //}
//}

//int main(void)
//{
//    int aaa(int a[], int target, int n);
//    int a[10] = { 1,4,4,8,10,13,14,20,26,45 }, n = 10, target = 26,Y;
//    int b[10] = { 1,4,4,8,10,13,14,20,28,45 }, n1 = 10, target1 = 28, Y1;
//    Y = aaa(a, target, n);
//    printf("%d\n", Y);
//
//    Y1 = aaa(b, target1, n1);
//    printf("%d\n", Y1);
//
//
//    return 0;
//}
//
//int aaa(int a[], int target, int n)
//{
//    int mid, low=0, high=n-1;
//    while (1)
//    {
//        mid = (low + high) / 2;
//        if (a[mid]==target)
//        {
//            return mid;
//        }
//        else if (a[mid]>target)
//        {
//            high = mid;
//        }
//        else
//        {
//            low = mid;
//        }
//    }
//}

//int main(void)
//{
//    float twlz(float x1, float x2);
//    float zgr = 12.1, myh = 8.1;
//    float zyq = twlz(zgr, myh);
//    printf("%f", zyq);
//    return 0;
//}
//
//float twlz(float x1, float x2)
//{
//    float sum = x1 + x2;
//    return sum;
//}
//  


//int main(void)
//{
//    float twlz();
//    float zhk = twlz();
//    printf("%f", zyq);
//    return 0;
//}
//
//float twlz()
//{
//    float zyq = 12.1;
//    return zyq;
//}
//
//int main(void)
//{
//    float qmj(float a, float b, float c);
//    float a1 = 3, b1 = 4, c1 = 5;
//    printf("a1 = %d\n", &a1);
//    float area = qmj(a1, b1, c1);
//    printf("%f", area);
//
//    float a = 6, b =8, c = 10;
//    float area1 = qmj(a, b, c);
//    printf("%f", area1);
//
//
//}
//float qmj(float a, float b, float c)
//{
//    float s = (a + b + c) / 2;
//    printf("a = %d\n", &a);
//    float area = sqrt(s * (s - a) * (s - b) * (s - c));
//    return area;
//}

//int main(void)
//{
//    int a[10] = { 36,1,7,2,8,4,5,9,13,3 };
//    int t;
//    for (int k =9; k >0; k--)
//    {
//        for (int i = 0; i < k; i++)
//            {
//                if (a[i] > a[i + 1])
//                {
//                    t = a[i];
//                    a[i] = a[i + 1];
//                    a[i + 1] = t;
//                }
//            }
//    }
//    
//    for (int j = 0; j < 10; j++)
//    {
//        printf("%d,", a[j]);
//    }
//    
//   
//    return 0;
// } 
//
//int main(void)
//{
//    void myh_bubble_sort(int a[]);
//    int a[10] = { 6,1,7,2,8,4,5,9,13,33 };
//    myh_bubble_sort(a);
//    for (int i = 0; i < sizeof(a)/4; i++)
//    {
//        printf("%d,", a[i]);
//    }
//   
//
//}
//void myh_bubble_sort(int a[])
//{
//    int i, t;
//    for (int k = 9; k > 0; k--)
//    {
//        for (i = 0; i < k; i++)
//        {
//            if (a[i] > a[i + 1])
//            {
//                t = a[i];
//                a[i] = a[i + 1];
//                a[i + 1] = t;
//            }
//        }
//    }
//}
//int main(void)
//{
//    int a[10] = { 6,1,7,2,8,4,5,9,13,33 };
//    printf("%d", sizeof(a));
//}
//    
//#define row 3
//#define column 3
//int main(void)
//{
//    int pp(int a[row][column], int x, int y);
//    int a[row][column] = { { 1,2,3 }, { 4,5,6 }, { 7,8,9 } };
//    
//    
//    printf("%d", pp(a, 1, 1));
//}
//
//int pp(int a[row][column], int x, int y)
//{
//    int result;
//    result = a[x - 1][y - 1];
//    return result;
//}
//    
    
//int main(void)
//{
//    int aa(int x, int y, char z);
//    int x = 2, y = 3;
//    char z = '+';
//    printf("%d", aa(x, y, z));
//}
//int aa(int x, int y, char z)
//{
//    int result;
//    if (z=='+')
//    {
//        result = x + y;
//    }
//    if (z == '-')
//    {
//        result = x - y;
//    }
//    if (z == '*')
//    {
//        result = x * y;
//    }
//    if (z == '/')
//    {
//        result = x / y;
//    }
//    return result;
//}
//int main(void)
//{
//    int aa(int x, int y, char z);
//    int x = 2, y = 3;
//    char z = '+';
//    printf("%d", aa(x, y, z));
//}
//int aa(int x, int y, char z)
//{
//    int result;
//    switch (z)
//    {
//        case '+': result = x + y; break;
//        case '-': result = x - y; break;
//        case '*': result = x * y; break;
//        case '/': result = x / y; break;
//    }
//
//    return result;
//}
//    
//    
//int main(void)
//{
//    void ss(int* p1, int* p2);
//    int a = 5, b = 2,c=3;
//    if (a > b)
//    {
//        ss(&a, &b);
//    }
//    if (a > c)
//    {
//        ss(&a, &c);
//    }
//    if (b > c)
//    {
//        ss(&b, &c);
//    }
//    
//    printf("a=%d b=%d c=%d", a,b,c);
//
//    return 0;
//}

/*void ss(int *p1,int *p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}
        
    */    

//int main(void)
//{
//    int a=1;
//    printf("%10d", a);
//    return 0;
//}
//        
    

//int main(void)
//{
//    void b(int a[]);
//    int a[2] = { 1,2 };
//    b(a);
//
//    return 0;
//}
//
//void b(int a[])
//{
//    printf("%d", a[0]);
//}
//#define max_name 5
//struct person
//{
//    float uu;
//    char name[max_name];
//    char number[12];
//
//};
//int main(void)
//{
//    struct person zgr = {
//    60,"zgr","15602401845"
//    };
//    printf("%f,%s,%s\n", zgr.uu, zgr.name,zgr.number);
//
//    struct person myh = { 70,"myh","17721506347" };
//    printf("%f,%s,%s", myh.uu, myh.name, myh.number);
//}

//#include "maylist.cpp"
//
//struct List {
//    int* start_addr;
//    int max_length;
//    int current_size;
//};
//
//void zgr_InitList(List& L);
//
//int main(void)
//{
//    struct List L1;
//    zgr_InitList(L1);
//    printf("%d,%p", L1.max_length,L1.start_addr);
//    free(L1.start_addr);
//    return 0;
//}
//
//void zgr_InitList(List &L)
//{
//    L.max_length = 20;
//    L.current_size = 0;
//    L.start_addr = (int*)malloc(L.max_length * sizeof(int));
//}
#include <stdio.h>
#include "maylist.h"

int main(void)
{
    struct maylist L1;
    initlist(L1,20);
    clearlist(L1);
    ListInsert(L1, 1, 1);
    ListInsert(L1, 2, 2);
    ListInsert(L1, 3, 3);
    ListInsert(L1, 4, 4);
    ListInsert(L1, 3, 10);
    ListTraverse(L1);
    printf("%d\n", locateelem(L1, 10));
    printf("%d", priorelem(L1, 10));
    destroylist(L1);
    return 0;
}