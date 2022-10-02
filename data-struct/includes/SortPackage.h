#ifndef SORTPACKAGE_H
#define SORTPACKAGE_H 

// extern int Partition(int A[],int low,int high);
#ifdef _cplusplus
extern "C"{
#endif
int Partition(int A[],int low,int high);
#ifdef _cplusplus
}
#endif
void QuickSort(int A[],int low , int high);

#endif