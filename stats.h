#ifndef STATS_H
#define STATS_H

/*
    @brief Prints the statistics of an array
    statistics: Median, Mean, Max, Min

    @param None

    @return Prints to screen the statistics
*/
void print_statistics();

/*
    @brief Prints the contents of an array

    @param  array   --  The array being passed
            length  --  The length of the array

    @return Prints the contents of array to the screen

*/
void print_array(int array[], int length);

/*
    @brief  Finds the median of an Array

    @param  array   --  The array being passed
            length  --  The length of the array

    @return The median of the array
*/
int find_median(int array[], int length);

/*
    @brief  Finds the Mean of an Array

    @param  array   --  The array being passed
            length  --  The length of the array

    @return The Mean of the array
*/
int find_mean(int array[], int length);

/*
    @brief  Finds the Maximum of an Array

    @param  array   --  The array being passed
            length  --  The length of the array

    @return The maximum of the array
*/
int find_maximum(int array[], int length);

/*
    @brief  Finds the Minimum of an Array

    @param  array   --  The array being passed
            length  --  The length of the array

    @return The minimum of the array
*/
int find_minimum(int array[], int length);

/*
    @brief  Sorts an array from largest to smallest
    
    @param  array   --  The array being passed
            length  --  The length of the array

    @return None
*/
void sort_array(int array[], int length);

#endif /* !FILE_FOO_SEEN */