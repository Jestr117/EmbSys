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
 * @brief <Prints the statistics of an array>
 *         
 *          Median, Mean, Maximum, Minimum
 *          as well as sorts an array in descending order
 * 
 * @author <Johnny Estrada>
 * @date <December 16, 2019>
 *
 */

#ifndef STATS_H
#define STATS_H

/**
    @brief Prints the statistics of an array
    statistics: Median, Mean, Max, Min

    @param element  --  The first element  being passed
    @param  size  --  The size of the array

    @return Prints to screen the statistics
*/
void print_statistics(unsigned char* element, unsigned int size);

/**
    @brief Prints the contents of an array

    @param  element   --  The first element  being passed
    @param  size  --  The size of the array

    @return Prints the contents of array to the screen

*/
void print_array(unsigned char* element, unsigned int size);

/**
    @brief  Finds the median of an Array

    @param  element   --  The first element  being passed
    @param  size  --  The size of the array

    @return The median of the array
*/
unsigned char find_median(unsigned char* element, unsigned int size);

/**
    @brief  Finds the Mean of an Array

    @param  element   --  The first element  being passed
    @param  size  --  The size of the array

    @return The Mean of the array
*/
unsigned char find_mean(unsigned char* element, unsigned int size);

/**
    @brief  Finds the Maximum of an Array

    @param  element --  The first element  being passed
    @param  size  --  The size of the array

    @return The maximum of the array
*/
unsigned char find_maximum(unsigned char* element, unsigned int size);

/**
    @brief  Finds the Minimum of an Array

    @param  element   --  The first element  being passed
    @param  size  --  The size of the array

    @return The minimum of the array
*/
unsigned char find_minimum(unsigned char* element, unsigned int size);

/**
    @brief  Sorts an array from largest to smallest
    
    @param  element  ---  The first element  being passed
    @param  size  --  The size of the array

    @return None
*/
void sort_array(unsigned char* element, unsigned int size);

#endif /* STATS_H */