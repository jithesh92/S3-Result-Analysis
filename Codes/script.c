#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
	{
		char rollno[10];
		char grade1;
		char grade2;
		char grade3;
		char grade4;
		char grade5;
		char grade6;
		char grade7;
		char grade8;
		char sgpa;
		}id;
main()
	{
	char fname[50],content[300],output[150];
	int i=0,j,k,flag,p,q,r;
	FILE *lp,*ip,*op;
	lp=fopen("files.txt","r");
	op=fopen("result.txt","a");
	while(i<=1)
    	{
	i++;
	flag=0;
	strcpy(content,"trail");
       	fgets(fname,15,lp);
	puts(fname);
	if((ip=fopen("file(0).txt","r"))==NULL)
		         printf("%sOpening Failed\n",fname);
		        
		else {        
		while(strncmp(content,"REGISTER",8))
			{		
			fgets(content,300,ip);
			k=strlen(content);
			if(flag==0)
				{
		        	if(strncmp(content,"B.Tech",6)==0)
				{   
		   			for(p=0;p<4;p++)
						fgets(id.rollno,10,ip);
					flag=1;			        		
					}
				continue;
				}
			if(flag==1)
				{
		        	if(strncmp(content,"EN09 301",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade1,1,ip);
					flag=2;			        		
					}
				continue;
				}
			if(flag==2)
				{
		        	if(strncmp(content,"EN09 302",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade2,1,ip);
					flag=3;			        		
					}
				continue;
				}
			if(flag==3)
				{
		        	if(strncmp(content,"CS09 303",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade3,1,ip);
					flag=4;			        		
					}
				continue;
				}
			if(flag==4)
				{
		        	if(strncmp(content,"CS09 304",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade4,1,ip);
					flag=5;			        		
					}
				continue;
				}
			if(flag==5)
				{
		        	if(strncmp(content,"CS09 305",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade5,1,ip);
					flag=6;			        		
					}
				continue;
				}
			if(flag==6)
				{
		        	if(strncmp(content,"CS09 306",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade6,1,ip);
					flag=7;			        		
					}
				continue;
				}
			if(flag==7)
				{
		        	if(strncmp(content,"CS09 307",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade7,1,ip);
					flag=8;			        		
					}
				continue;
				}
			if(flag==8)
				{
		        	if(strncmp(content,"CS09 308",8)==0)
				{   
		   			for(p=0;p<6;p++)
						fgets(id.grade8,1,ip);
					flag=9;			        		
					}
				continue;
				}
			if(flag==8)
				{
		        	if(strncmp(content,"Semester Grade",14)==0)
				{   
		   									 						fgets(id.sgpa,1,ip);
					fgets(id.sgpa,6,ip);
					flag=9;			        		
					}
				continue;
				}
			if(flag==10)
				{
				q=0;
				r=strlen(id.rollno);
				for(p=0;p<r;p++)
					output[q++]=id.rollno[p];
				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade1;
				
				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade2;

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade3;
					

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade4;

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade5;

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade6;

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade7;

				output[q++]=" ";
				output[q++]=":";
				output[q++]=" ";
				output[q++]=id.grade8;

				strcpy(output,id.sgpa);
				
				output[q++]="\0";
				
		  	       	fputs(output,op);
				fclose(ip);
				}	
				
				
							
		}}
	fclose(lp);
	fclose(op);		
}}
