#include <stdio.h>
#include "stats.h"

#define ARRAY_SIZE 10

void main(){
    unsigned char arr[ARRAY_SIZE] = {21, 32, 45, 17, 29, 74, 90, 102, 7, 13};
    unsigned char* p;
    unsigned char max;
    p = arr;

    // 
    print_array(p, ARRAY_SIZE);
    sort_array(p, ARRAY_SIZE);
    print_array(p, ARRAY_SIZE);
    print_statistics(p, ARRAY_SIZE);
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
    unsigned char median = 0;
    unsigned char medianLoc = size / 2;
    median = (element + medianLoc);
    return median;
}

unsigned char find_mean(unsigned char* element, unsigned int size){
    unsigned char mean = 0;
    unsigned char sum = 0;

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
        if(min < *element){
            min = *element;
        }
        element++;
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