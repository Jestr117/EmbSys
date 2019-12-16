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
 * @brief <Implementation of a few stats for an array>
 *
 * @author <Johnny Estrada>
 * @date <December 16, 2019>
 *
 */
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main(){
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    unsigned char* p = test;

    print_statistics(p, SIZE);
    sort_array(p, SIZE);
    print_array(p, SIZE);
    print_statistics(p, SIZE);
    printf("\n");
}

void print_statistics(unsigned char* element, unsigned int size){
    unsigned char median = find_median(element, size);
    unsigned char mean = find_mean(element, size);
    unsigned char max = find_maximum(element, size);
    unsigned char min = find_minimum(element, size);
    printf("Array stats:\n");
    printf("Median: %d, Mean: %d, Max: %d, Min: %d", median, mean, max, min);

}

void print_array(unsigned char* element, unsigned int size){
    printf("Array Contents:\n");
    for(unsigned int i = 0; i < size; i++){
        printf("[%d]: %d", i, *element);
        printf("\n");
        element++;

    }
}

unsigned char find_median(unsigned char* element, unsigned int size){
    unsigned char* medLoc;
    unsigned char median;
    // Determine if array is Even or Odd
    if(size % 2 == 0){
        medLoc = element + (size / 2);
        unsigned char num1 = *medLoc;
        medLoc--;
        median = (num1 + *medLoc) / 2; 
    }
    else{ // median is the number in middle 
        median = *(element + (size / 2));
    }
    return median;
}

unsigned char find_mean(unsigned char* element, unsigned int size){
    unsigned char mean = 0;
    unsigned int sum = 0;
    for(unsigned int i = 0; i < size; i++){
        sum = sum + *(element + i);
    }
    mean = sum / size;
    return mean;
}

unsigned char find_maximum(unsigned char* element, unsigned int size){
    unsigned char max = 0;
    for(unsigned int i = 0; i < size; i++){
        if(*element > max){
            max = *element;
        }
        element++;
    }
    return max;
}

unsigned char find_minimum(unsigned char* element, unsigned int size){
    unsigned char min = *element;
    for(unsigned int i = 0; i < size; i++){
        if(min > *(element + i)){
            min = *(element + i);
        }
    }
    return min;
}

void sort_array(unsigned char* element, unsigned int size){
    unsigned char* maxAdd = NULL;
    for(unsigned int i = 0; i < size - 1; i++){
        unsigned char* otherEle = element + 1;
        unsigned char max = *element;
        for(unsigned int x = i + 1; x < size; x++){    
            if(*otherEle > max){
                    max = *otherEle;
                    //save the address
                    maxAdd = otherEle;
                }
            otherEle++; 
        }
        // swapping data
        unsigned char swap = *element;
        *element = max;
        *maxAdd = swap;   
        
        // move pointer of sorted array
        element++;
    }
}