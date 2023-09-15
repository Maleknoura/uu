#include<stdio.h>
#include<stdlib.h>
void signe(int a,int b ){
	if(a*b<0){
		printf("%d et %d n ont pas le meme signe",a,b);
			}
	else{
		printf("%d et %d ont le meme signe",a , b);
	}
int max(int a,int b){
	int m;
	if(a<b)
	 m = b;
	
	else
    	m=a;

	return m;
	

}
int main(){
	int k,l ;
	printf ("saisir k et l : ");
	scanf("%d""%d",&k,&l);
	signe(k,l);
	printf("%d",max (k,l));
	return 0;
	}