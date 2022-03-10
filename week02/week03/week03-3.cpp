#include<stdio.h>
#include<string.h>
char line[2000];
char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char table2[]="A   3F HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(char c)
{
    for(int i=0;table1[i]!=0;i++){
        if(c==table1[i]) return table2[i];
    }
    return' ';
}
int mirror()
{
	int n=strlen(line);
 	for(int i=0;i<n;i++){
 		if(mirror_char(line[i])!=line[n-1-i])return 0;
 	}
 	return 1;
}
int palindrome()
{
 	int n=strlen(line);
 	for(int i=0;i<n;i++){
 		if(line[i]!=line[n-1-i])return 0;
 	}
 	return 1;
}
int main()
{
 	while(scanf("%s",line)==1){
 		int p=palindrome();
 		int m=mirror();
 		if(p==1 && m==1)printf("%s -- is a mirrored palindrome.\n\n",line);
 		if(p==1 && m==0)printf("%s -- is a regular palindrome.\n\n",line);
 		if(p==0 && m==1)printf("%s -- is a mirrored string.\n\n",line);
 		if(p==0 && m==0)printf("%s -- is not a palindrome.\n\n",line);
 	}
 	return 0;
}
