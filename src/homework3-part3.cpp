// Практическое задание
//* Описать трёхмерный целочисленный массив, размером 3х3х3, указатель на значения внутри массива и при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1] 
#include <iostream>
int main(int argc, char ** argv) {
   int cube[3][3][3]={1,2,3,
	              4,5,6,
		      7,8,9,
                      10,11,12,
		      13,14,15,
		      16,17,18,
		      19,20,21,
		      22,23,24,
		      25,26,27
                     },
       *cubePtr=&cube[0][0][0];
   printf("cube[1][1][1] = %d\n",cube[1][1][1]);
   printf("via pointer *(cubePtr + 1*3 + 1*3*3 + 1) = %d\n",*(cubePtr + 1*3 + 1*3*3 + 1));
}
