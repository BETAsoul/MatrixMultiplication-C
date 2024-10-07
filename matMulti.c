#include<stdio.h>
#include<stdlib.h>
#include "matMulti.h"


int **allocArr(int rows,int cols){
  int** ptr;
  ptr = (int**)malloc(sizeof(int*)*rows);

  for(int i=0; i<cols; i++){
    ptr[i] = malloc(sizeof(int*)*cols);
  }

  return ptr;
}

inputVals(arr){}

matMulti(arr1,arr2){}

printResult(arr){}