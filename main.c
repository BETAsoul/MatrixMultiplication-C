#include <stdio.h>

int main(){
    int arr1[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int matMulti(int arr1, int arr2){
        int result[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                result[i][j] = 0;
                for(int k=0; k<3; k++){
                    result[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
    }


    void showMatrix(int result){
        for(int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                printf("res[%d][%d]= %d\n",i,j,result[i][j]);
            }
        } 
    }

}
