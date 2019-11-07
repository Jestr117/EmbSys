#ifndef STATS_H
#define STATS_H

/*
    @brief Prints the statistics of an array
    statistics: Median, Mean, Max, Min

    @param None

    @return Prints to screen the statistics
*/
void print_statistics(unigned char median, unsigned char mean, unsigned char max, unsigned char min);

/*
    @brief Prints the contents of an array

    @param  array   --  The array being passed
            size  --  The size of the array

    @return Prints the contents of array to the screen

*/
void print_array(unsigned char* element, unsigned int size);

/*
    @brief  Finds the median of an Array

    @param  array   --  The array being passed
            size  --  The size of the array

    @return The median of the array
*/
unsigned char find_median(unsigned char* element, unsigned int size);

/*
    @brief  Finds the Mean of an Array

    @param  array   --  The array being passed
            size  --  The size of the array

    @return The Mean of the array
*/
unsigned char find_mean(unsigned char* element, unsigned int size);

/*
    @brief  Finds the Maximum of an Array

    @param  array   --  The array being passed
            size  --  The size of the array

    @return The maximum of the array
*/
unsigned char find_maximum(unsigned char* element, unsigned int size);

/*
    @brief  Finds the Minimum of an Array

    @param  array   --  The array being passed
            size  --  The size of the array

    @return The minimum of the array
*/
unsigned char find_minimum(unsigned char* element, unsigned int size);

/*
    @brief  Sorts an array from largest to smallest
    
    @param  array   --  The array being passed
            size  --  The size of the array

    @return None
*/
void sort_array(unsigned char* element, unsigned int size);

#endif /* STATS_H */