#include <iostream>
#include <cstdio>
#include <ctime>
#include <string.h>

int main()
{
    std::clock_t start;
    double duration;
//
int dish;           //для выбора блюда
float cooking_time; //для выбора блюда
std::string dish_name = "обед";     //для наименования блюда

    start = std::clock(); // определение текущего времени

//ввести тип блюда
printf("Выберете типа блюда по номеру:");
printf("\n");
printf("1-первое, 2-салат, 3-второе");
std::cin >> dish;
if (dish==1)
{dish_name = "первое";}
else if (dish==2){
    dish_name = "салат";
}
else if (dish==3){
    dish_name = "второе";
}
switch (dish){
case 1:

cooking_time = 40;
break;
case 2:
cooking_time = 30;
break;
case 3:
cooking_time = 60;
break;
}
    
   // duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    duration = (start+cooking_time);

std::cout<< dish_name << " будет готов через " << duration << " секунд" << std::endl;
   // std::cout << "Operation took "<< duration << "seconds" << std::endl;

    return 0;
}
