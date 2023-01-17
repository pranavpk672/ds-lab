
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10],b[10],c[20],n,j,temp,m,sum;
    printf("enter the size of the first array:");
    scanf("%d",&n);
    printf("enter the elements into the first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are:");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);}
     printf("\n the sorted array :");
            for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            for(i=0;i<n;i++)
                printf("%d\n",a[i]);

    printf("enter the size of the second array:");
    scanf("%d",&m);
    printf("enter the elements into the second array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("the array elements are:");
    for(i=0;i<m;i++){
    printf("%d\n",b[i]);}
     printf("\n the sorted array :");
            for(i=0;i<m;i++){
                for(j=i+1;j<m;j++){
                    if(b[i]>b[j]){
                        temp=b[i];
                        b[i]=b[j];
                        b[j]=temp;
                    }
                }
            }
            for(i=0;i<m;i++)
                printf("%d\n",b[i]);
    sum=n+m;
    for(i=0;i<n;i++){
        c[i]=a[i];}
        for(i=0;i<m;i++){
            c[i+n]=b[i];}
            printf("the merged array is:");
            for(i=0;i<sum;i++){
                printf("%d\n",c[i]);
            }
printf("\n the merged  sorted array :");
            for(i=0;i<sum;i++){
                for(j=i+1;j<sum;j++){
                    if(c[i]>c[j]){
                        temp=c[i];
                        c[i]=c[j];
                        c[j]=temp;
                    }
                }
            }
            for(i=0;i<sum;i++)
                printf("%d\n",c[i]);


            return 0;

        }
