#include <stdio.h>

int main(void)
{
    int start_number = 0;
    int count_check = 0;
    int uppper_blank = 0;
    int under_blank = 0;
    int input_number = 0;
    int line_repeat = 0;

    do 
    {
        printf("4이상의 짝수를 입력하시오 :");
        scanf_s("%d", &input_number);
        printf("\r\n");
    } while (input_number < 4 || input_number % 2 == 1);

    (input_number / 2) % 2 == 1 ? start_number = 1 : start_number = 2;

    uppper_blank = ((input_number / 2 - start_number) / 2);

    for (start_number; start_number < (input_number / 2); start_number += 2)
    {
        for (count_check = 0; count_check < input_number; count_check++)
     // { 
            (uppper_blank <= count_check && count_check < uppper_blank + start_number) || (uppper_blank * 3 + start_number <= count_check && count_check < uppper_blank * 3 + start_number * 2) ? printf("*") : printf(" ");
        /*
        if(count_check < uppper_blank) printf(" ");
        else if(uppper_blank <= count_check && count_check <uppper_blank + start_number)printf("2");
        else if(uppper_blank + start_number <= count_check && count_check < uppper_blank*3 + start_number)printf(" ");
        else if(uppper_blank*3 + start_number <= count_check && count_check < uppper_blank*3 + start_number*2)printf("4");
        else if(uppper_blank*3 + start_number*2 <= count_check && count_check < input_number)printf("5");
        */
    //  }

        uppper_blank--;

        printf("\r\n");
    }


    for (line_repeat = input_number; line_repeat > 0; line_repeat -= 2)
    {
        for (under_blank = 0; under_blank < (input_number + line_repeat)/2; under_blank++)
            under_blank < (input_number - line_repeat) / 2 ? printf(" ") : printf("*");

        printf("\r\n");
    }

    return 0;
}