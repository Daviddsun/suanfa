
#include "suanfa_h.h"
#include <iostream>

main()
{
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << " sizeof array: " << sizeof(array)/sizeof(array[0]) << std::endl;
    int i;
    i = binarysearch(array,  8);
    std::cout << i << " th equal to 8" << std::endl;
    printf("%d th equal to 8;", i);
}