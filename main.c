#include<stdio.h>
#include<string.h>
void main()
{
    //write into a file
    FILE *p;
    p = fopen("a.txt","w");
    int i,n,j;
    char name[100];
    printf("Enter n ");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        gets(name);
        fprintf(p,"%s\n",name);
    }
    fclose(p);

    //read from a file
    FILE *fp ;
    char data[50];
    fp = fopen("a2.txt", "r");
    if ( fp == NULL )
    {
        printf( "File failed to open." );
    }
    else
    {
        printf("The file is now opened.\n");
        while(fgets(data,50,fp)!=NULL)
        {
            printf("%s",data);
        }
        fclose(fp) ;
    }
}
