#include<stdio.h>
#include "subString.h"


int strlength(char str[2000]){ //function to count the length of a string.

	int i,counter=0;

	for(i=0;i<2000;i++){ // loop that counts the number of chars until it hits a null terminator.

		if(str[i] != '\0'){

			counter++;
		
		}else{
			break;
		}
	}


	return counter;


}



int strstrm(char needle[2000],char haystack[2000]){



	int l1 = strlength(needle), l2 = strlength(haystack);
	
	int counter=0,c,sub=0,i,a,g=0;



	if(l1>l2){

		sub=0;
	}else{
	

		for(i=0;i<=l2-l1;i++){

			c=0;
			g=0;


			for(a=i; a<l1+i;a++){

				if(haystack[a] == needle[c]){

					g++;
				}
				c++;

			}

			if(g == l1){

				sub++;
			}
		}
	}



	return sub;
}