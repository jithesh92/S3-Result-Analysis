#include<stdio.h>
#include<string.h>
int main()
{
    char fname[50],content[300],name[50],reg[50],m[12],c,sgpa[5];
    FILE *tp,*fp,*op;
    int i,j,k,l=1;
    tp=freopen("log.txt","r",stdin);
    op=freopen("data.txt","a",stdout);
    while((l++)<=61)
    {
        scanf("%s",fname);
        strcpy(content,"hello");
        i=0;
        if((fp=fopen(fname,"r"))==NULL)
        {
            printf("%sfile not opened\n",fname);
            continue;
        }
        //printf("opended %s\n",fname);
        while(strncmp(content,"Semester",8))
        {
        fgets(content,300,fp);
        j=strlen(content);
        //printf("%s\n\n\n\n\n",content);
        if(i==0)
        {
                if(strncmp(content,"NAME",4)==0)
                {
                    for(k=0,j=19;content[j]!='\n';++k,++j)
                        name[k]=content[j];
                    name[k]='\0';
                    ++i;
                    //printf("%dname searching\n",i);
                }
        }
        if(i==1)
        {
                if(strncmp(content,"REGISTER",8)==0)
                {
                    for(k=0,j=15;content[j]!='\n';++k,++j)
                        reg[k]=content[j];
                    reg[k]='\0';
                    ++i;
          //          printf("%dname searching\n",i);
                }
        }
        //printf("\n%c%c\n",content[j-3],content[j-2]);
        if(content[j-3]=='R'&&content[j-2]=='g'&&i>1)
        {
            m[i-2]=content[j-14];
            ++i;
            //printf("%dmark searching\n",i);
        }
        //printf("\n%d",i);
        if(i==15)
        {
            for(k=0;content[j-k]!='.';++k)
            {
                sgpa[0]=content[j-k-2];
                sgpa[1]='.';
                sgpa[2]=content[j-k];
                sgpa[3]=content[j-k+1];
            }
        }
        }
        printf("\n%s",name);
        printf("\t%s",reg);
        for(i=0;i<=12;++i)
        printf("\t%c",m[i]);
        printf("\t");
        for(i=0;i<4;++i)
        {
            if(sgpa[i]!='\0')printf("%c",sgpa[i]);
        }
    }
    fclose(op);
    fclose(tp);
    fclose(fp);
    return 0;
}
