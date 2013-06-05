#include<stdio.h>
int main(){
	FILE *fp;
	char fname[100];
	fp=freopen("f.txt","r",stdin);
	while(gets(fname)){
		system(fname);
	}
	fclose(fp);
	return 0;
}
