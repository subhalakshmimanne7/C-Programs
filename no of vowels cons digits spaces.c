//write a c program to find the no of vowels,consonants,digits,spaces
#include<stdio.h>
int main(){
	char sen[20],v=0,c=0,d=0,s=0,i;
	printf("enter the sentence");
	scanf("%[^\n]",sen);
	for(i=0;sen[i]!='\0';i++){
		if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
		v++;
		else if(sen[i]>='a' && sen[i]<='z')
		c++;
		else if(sen[i]>='0' && sen[i]<='9')
		d++;
		else if(sen[i]==' ')
		s++;
	}
	printf("vowels=%d,consonants=%d,digits=%d,spaces=%d",v,c,d,s);
}
