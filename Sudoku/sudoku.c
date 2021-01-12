#include<stdio.h>
void main()
{
int a[9][9];
int i,j;
printf("*******************VIRTUAL SUDOKU*******************\n");
printf("Fill up the sudoku Table\n");
for(i=0;i<9;i++)
{
    for(j=0;j<9;j++)
    {
     scanf("%d",&a[i][j]);
    }
    printf("\n");
}
printf("********************INPUT SUDOKU TABLE TAKEN************************:\n\n");
for(i=0;i<9;i++)
{
    for(j=0;j<9;j++)
    {
     printf("_%d_|",a[i][j]);
    }
    printf("__");
    printf("\n");
}
for(i=0;i<9;i++)
{
    printf("   |");
}
printf("\n\n");
row(a);
col(a);
    if(row(a)==1&&col(a)==1)
    {
        printf("VALID SUDOKU TABLE!!\n\n");
    }
    else
    {
        printf("Try again\n");
    }
int n;
while(1)
{
printf("Enter the grid you want to solve\n");
printf("**NOTE**\nDigits should be ranging from 1-9!!\n");
scanf("%d",&n);
switch(n)
{
case 1:
{
    showgrid(a,n);
    int u,x;
    u=subgrid(a,n);
    printf("Empty boxes in the %dst grid is %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
}
case 2:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dnd grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 3:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %drd grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 4:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 5:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 6:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 7:
    {
    int u;
    showgrid(a,n);
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 8:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
case 9:
    {
    showgrid(a,n);
    int u;
    u=subgrid(a,n);
    printf("Empty boxes in the %dth grid are %d\n",n,u);
    printf("\n\n");
    calc_grid(a,n,u);
    break;
    }
}
if(n<1||n>9)
    {
        printf("Digits Insertion is either completed or canceled!!\n");
        break;
    }
}
row(a);
col(a);
if(row(a)==1&&col(a)==1)
{
    printf("SUDOKU SOLVED SUCCESSFULLY!!\n");
}
else
{
    printf("BETTER LUCK NEXT TIME\n");
}
}


int row(int a[9][9])
{
 int c[10]={0};
 for(int i=0;i<9;i++)
 {
  for(int j=0;j<9;j++)
  {
      if(a[i][j]==0)
      {
        c[a[i][j]]+=2;
      }
      else
      {
        c[a[i][j]]++;
      }
  }
  for(int k=1;k<=9;k++)
  {

    if(c[k]==0)
    {
        continue;
    }
    if(c[k]!=0)
    {
        if(c[k]!=1)
        {
            return 0;
        }
    }
  }
    for(int k=0;k<9;k++)
    {
      c[k]=0;
    }
    return 1;
 }
}

int col(int a[9][9])
{
 int c[10]={0};
 for(int i=0;i<9;i++)
 {
   for(int j=0;j<9;j++)
   {
       if(a[j][i]==0)
       {
           c[a[j][i]]+=2;
       }
       else
       {
         c[a[j][i]]++;
       }
   }
   for(int k=1;k<=9;k++)
   {
     if(c[k]==0)
     {
        continue;
     }
     if(c[k]!=0)
     {
         if(c[k]!=1)
        {
            return 0;
        }
     }
   }
     for(int k=0;k<9;k++)
     {
       c[k]=0;
     }
     return 1;
  }
}


int subgrid(int a[9][9],int n)
{
    if(n==1)
    {
        int t=0;
        for(int i=0;i<=2;i++)
        {
           for(int j=0;j<=2;j++)
           {
               if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==2)
    {
        int t=0;
        for(int i=0;i<=2;i++)
        {
           for(int j=3;j<=5;j++)
           {
               if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==3)
    {
        int t=0;
        for(int i=0;i<=2;i++)
        {
           for(int j=6;j<=8;j++)
           {
              if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==4)
    {
        int t=0;
        for(int i=3;i<=5;i++)
        {
           for(int j=0;j<=2;j++)
           {
               if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==5)
    {
        int t=0;
        for(int i=3;i<=5;i++)
        {
           for(int j=3;j<=5;j++)
           {
                if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==6)
    {
        int t=0;
        for(int i=3;i<=5;i++)
        {
           for(int j=6;j<=8;j++)
           {
               if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==7)
    {
        int t=0;
        for(int i=6;i<=8;i++)
        {
           for(int j=0;j<=2;j++)
           {
                if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else if(n==8)
    {
        int t=0;
         for(int i=6;i<=8;i++)
        {
           for(int j=3;j<=5;j++)
           {
              if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
    else
    {
        int t=0;
         for(int i=6;i<=8;i++)
        {
           for(int j=6;j<=8;j++)
           {
               if(a[i][j]==0)
               {
                   t++;
               }
           }
        }
        return t;
    }
}
int showgrid(int a[9][9],int n)
{
    if(n==1)
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==2)
    {
         for(int i=0;i<=2;i++)
        {
            for(int j=3;j<=5;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==3)
    {
         for(int i=0;i<=2;i++)
        {
            for(int j=6;j<=8;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==4)
    {
         for(int i=3;i<=5;i++)
        {
            for(int j=0;j<=2;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==5)
    {
         for(int i=3;i<=5;i++)
        {
            for(int j=3;j<=5;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==6)
    {
         for(int i=3;i<=5;i++)
        {
            for(int j=6;j<=8;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==7)
    {
         for(int i=6;i<=8;i++)
        {
            for(int j=0;j<=2;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else if(n==8)
    {
         for(int i=6;i<=8;i++)
        {
            for(int j=3;j<=5;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
         for(int i=6;i<=8;i++)
        {
            for(int j=6;j<=8;j++)
            {
                printf("_%d_|",a[i][j]);
            }
            printf("\n");
        }
    }
}

int calc_grid(int a[9][9],int n,int y)
{
    if(n==1)
    {

           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=0;i<=2;i++)
                {
                    for(int j=0;j<=2;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=0;i<=2;i++)
                                {
                                    for(int j=0;j<=2;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                        y--;
                    }
                }
    else if(n==2)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=0;i<=2;i++)
                {
                    for(int j=3;j<=5;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=0;i<=2;i++)
                                {
                                    for(int j=3;j<=5;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==3)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=0;i<=2;i++)
                {
                    for(int j=6;j<=8;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=0;i<=2;i++)
                                {
                                    for(int j=6;j<=8;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==4)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=3;i<=5;i++)
                {
                    for(int j=0;j<=2;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=3;i<=5;i++)
                                {
                                    for(int j=0;j<=2;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==5)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=3;i<=5;i++)
                {
                    for(int j=3;j<=5;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=3;i<=5;i++)
                                {
                                    for(int j=3;j<=5;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==6)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=3;i<=5;i++)
                {
                    for(int j=6;j<=8;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=3;i<=5;i++)
                                {
                                    for(int j=6;j<=8;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==7)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=6;i<=8;i++)
                {
                    for(int j=0;j<=2;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=6;i<=8;i++)
                                {
                                    for(int j=0;j<=2;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                             y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else if(n==8)
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=6;i<=8;i++)
                {
                    for(int j=3;j<=5;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=6;i<=8;i++)
                                {
                                    for(int j=3;j<=5;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
    else
    {
           while(y!=0)
              {
                int c[10]={0};
                int m,t=0;
                printf("Enter any digit to insert in the grid\n");
                scanf("%d",&m);
                for(int i=6;i<=8;i++)
                {
                    for(int j=6;j<=8;j++)
                        {
                         c[a[i][j]]++;
                        }
                }
                    c[m]++;
                    int x=1;
                    for(int k=1;k<=9;k++)
                        {
                            if(c[k]==0)
                            {
                                continue;
                            }
                            if(c[k]>1)
                                {
                                x=0;
                                }
                        }
                            if(x)
                            {
                                printf("digit inserted is %d\n",m);
                                for(int i=6;i<=8;i++)
                                {
                                    for(int j=6;j<=8;j++)
                                    {
                                        if(a[i][j]==0)
                                        {
                                            t=m;
                                            m=a[i][j];
                                            a[i][j]=t;
                                        }
                                    }
                                }
                                y--;
                            }
                            else
                            {
                                printf("Insertion not possible\n");
                            }
                        for(int k=0;k<9;k++)
                        {
                            c[k]=0;
                        }
                    }
    }
            }

