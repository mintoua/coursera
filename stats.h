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
 * @file <stats.h> 
 * @brief <Header file for prototypes of stats.c>
 *
 * <Add Extended Description Here>
 *
 * @author <Mintoua Toupkandi>
 * @date <Add date >
 *
 */	
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char tab[], unsigned char*l);
/**
 *@brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 * @param <unsigned char tab[]> <array of data>
 *@return <void nothing to return>
*/

void print_array(unsigned char tab[], unsigned char* l);
/**
 * @brief <name print_array>
 *
 * <Given an array of data and a length, prints the array to the screen>
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return <void nothing to return >
 */

unsigned char find_median(unsigned char tab[], unsigned char* l);
/**
 * @brief <name find_median>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return < return unsigned char the median>
 */
unsigned char find_mean(unsigned char tab[], unsigned char* l);
/**
 * @brief <name find_mean>
 *
 * <Given an array of data and a length, returns the mean >
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return < return unsigned char the mean>
 */
unsigned char find_maximum(unsigned char tab[], unsigned char* l);
/**
 * @brief <name find_maximum>
 *
 * <Given an array of data and a length, returns the maximum>
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return < return unsigned char the maximum>
 */
unsigned char find_minimum(unsigned char tab[], unsigned char* l);
/**
 * @brief <name find_minimum>
 *
 * <Given an array of data and a length, returns the minimum>
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return < return unsigned char the minimum>
 */
void sort_array(unsigned char tab[], unsigned char* l);
/**
 * @brief <name sort_array>
 *
 * <Given an array of data and a length, sorts the array largest to smallest>
 *
 * @param <unsigned char tab[]> <data of array>
 * @param <unisgned int l> <length of the array>

 *
 * @return < return nothing : void>
 */



#endif /* __STATS_H__ */
