#include <stdio.h>
#include "stats.h"


void print_array(unsigned char* element, unsigned int size){
    for(unsigned int i = 0; i < size; i++){
        print("Array Contents:\n")
        print("Array{%d}: {%d}", i, %element);
        element++;
    }
}

unsigned char find_median(unsigned char* element, unsigned int size){
    unsigned char median = 0;
    unsigned int medianLoc = size / 2;
    median = &(element + medianLoc);
    return median;
}

unsigned char find_mean(unsigned char* element, unsigned int size){
    unsigned char mean = 0;
    unsigned int sum = 0;

    for(unsigned int i = 0; i < size; i++){
        sum += &element;
        element++; 
    }
    mean = sum / size;
    return mean;
}

unsigned char find_maximum(unsigned char* element, unsigned int size){
    unsigned char max = 0;
    for(unsigned int i = 0; i < size; i++){
        if(&element > max){
            max = element;
        }
        element++;
    }
    return max;
}

unsigned char find_minimum(unsigned char* element, unsigned int size){
    unsigned char min = &element;
    for(unsigned int i = 0; i < size; i++){
        if(min < &element){
            min = &element;
        }
        element++;
    }
    return min;
}

void sort_array(unsigned char* element, unsigned int size){
    unsigned int swap;
    for(unsigned int i = 0; i < size - 1; i++){
        for(unsigned int x = 0; x < size - (i - 1); x++){    
            if(&element < &(element + 1){
                    swap = &element;
                    &element = &(element + 1);
                    &(element + 1) = swap;
                }
            }
        }
    }
}