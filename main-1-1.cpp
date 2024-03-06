#include <iostream>
extern int sum_diagonal(int array[4][4]);
int main(){
int array[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
std::cout<< "The sum of the elements along the main diagonal (top left bottom right): "<<sum_diagonal(array) << std::endl;







    return 0;
}