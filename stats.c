/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Calcul of statistics >
 *
 * <Add Extended Description Here>
 *
 * @author <MIntoua Toupkandi>
 * @date <05-07-2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char l = SIZE;
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
print_statistics(test,&l);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char tab[], unsigned char*l)
{
unsigned char c;
c=find_median(tab,l);
   printf("the median: %c",c);
unsigned char t;
t=find_mean(tab,l);
   printf("the mean: %c",t);
unsigned char d;
d=find_maximum(tab,l);
   printf("the median: %c",d);
unsigned char max;
max=find_minimum(tab,l);
   printf("the median: %c",max);

print_array(tab,l);
}
void print_array(unsigned char tab[], unsigned char* l)
{int i;
	for (i=0;i<(*l);i++)
		{
		   printf("Array [%d]= %c",i,*l);

		}
}
unsigned char find_median(unsigned char tab[], unsigned char* l)
{
    // First we sort the array 
     
  	sort_array(tab,l);
    // check for even case 
    if (*l % 2 != 0) 
       return tab[*l/2]; 
      
    return (tab[(*l-1)/2] + tab[*l/2])/2.0;
}
unsigned char find_mean(unsigned char tab[], unsigned char* l)
{
 unsigned char sum = 0; 
    for (int i = 0; i < *l; i++)  
        sum += tab[i]; 
      
    return sum/(*l);
}
unsigned char find_maximum(unsigned char tab[], unsigned char* l)
{
unsigned char maximum = tab[0];
int c;
  for (c = 1; c < (*l); c++)
  {
    if (tab[c] > maximum)
    {
       maximum  = tab[c];
    }
  }

return maximum;
}
unsigned char find_minimum(unsigned char tab[], unsigned char* l)
{
unsigned char minimum = tab[0];
 int c;
    for ( c = 1 ; c < (*l) ; c++ ) 
    {
        if ( tab[c] < minimum ) 
        {
           minimum = tab[c];
        }
    }

return minimum; 
}
void  sort_array(unsigned char tab[], unsigned char* l)
{
int i,j;
unsigned char a;
      for (i = 0; i < (*l); ++i) 
        {
            for (j = i + 1; j < (*l) ; ++j) 
            {
                if (tab[i] < tab[j]) 
                {
                    a = tab[i];
                    tab[i] = tab[j];
                    tab[j] = a;
                }
            }
        }

}























