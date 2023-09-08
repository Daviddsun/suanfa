
#include "suanfa_h.h"
#include <iostream>

main(int argc, char * argv[])
{
    // 1st target, 2nd array
    std::cout << "argv[1]: " << argv[1] << std::endl;
    int array[9] = {atoi(argv[2]) ,2, 3, atoi(argv[3]), 5, 6, 7, 8, 9};
    std::cout << "array[0]: " << array[0] <<"; array[3]: " << array[3] << std::endl;
    int lenth = sizeof(array)/sizeof(array[0]);
    std::cout << " sizeof array: " << lenth << std::endl;
    int i;
    i = binarysearch(array, atoi(argv[1]), lenth);
    std::cout << i << " th equal to " << atoi(argv[1]) << std::endl;
    // printf("%d th equal to 8;", i);
}