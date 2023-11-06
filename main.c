
#include <stdio.h>
#include <stdlib.h>

struct time{
	int hour ;
	int min ;
	int sec ;
}t[2];

int main() {

	struct time tf;
	for(int i=0;i<2;i++){
scanf("%d" , &t[i].hour) ;
scanf ("%d" , &t[i].min) ;
scanf ("%d" , &t[i].sec) ;}

	if (t[0].sec< t[1].sec){
	 tf.sec=(t[0].sec+60)-t[1].sec ;
        t[0].min--;}

	else {

	 	tf.sec = t[0].sec- t[1].sec ;
	}


	if (t[0].min < t[1].min){

	 tf.min=(t[0].min+60)-t[1].min ;
	 t[0].hour--;}

	else{


	tf.min= t[0].min- t[1].min ;}
	   tf.hour=(t[0].hour)-(t[1].hour) ;

printf("%d:" , tf.hour) ;
printf ("%d:" , tf.min) ;
printf("%d" , tf.sec) ;



	return 0;
}
