# Heart_Of_Star 
# 하트 만들기


This code is second week C code homework for MAZE 30th (freshman).  
MAZE 30기 2주차 C언어 과제입니다.  


If you type the number (which is the longest length of the horizontal way of heart), then automatically print stars, which shape of heart.  
하트의 가로로 가장 긴 부분의 길이를 숫자로 입력받아, 입력받은 숫자에 따라 하트를 구성합니다.  
Inpun number must be even, also more than 6. The value is stored in variable "input_number".  
입력받는 수는 6이상의 짝수입니다. 입력받은 수는 변수 "input_number"에 저장합니다.


In cas of upside part of Heart, we check first if the half of "input_number" if odd or even. Save 1 to variable "start_number" if it's odd, save 2 if it's evne.  
하트의 윗부분의 경우 입력받은 수 "input_number"의 절반이 홀수인지 짝수인지 판별합니다. 홀수인 경우 1을, 짝수인 경우 2를 변수 "start_number"에 저장합니다.  
"start_number" means count of stars, which are number of first line in one of tow upside triangles.  
이 수는 하트의 윗부분을 구성하는 두 작은 삼각형 중 하나의 맨 첫줄에 출력되는 별의 수를 의미합니다.  
After then, combine "input_number" and "start_number", save count of blanks to variable "upper_blank".  
이후 변수 "input_number"에 입력받은 숫자와 변수 "start_number"에 저장한 수를 이용해 첫번쨰 줄의 공백의 수를 변수 "upper_blank"에 저장합니다.  


By using "for", repeat code 0 to until if "start_number" under than half of "input_number" when increasing 2 for "start_number".  
for 문을 이용하여 "start_number"를 2씩 늘려가며 "input_number"의 절반 미만의 범위에서 반복합니다.  
Using "for" by use of variable  "count_check".  
변수 "count_check"를 이용하여 for문을 다시 사용합니다.  
In range of more than 0 and under "input_number", print star("*") and blank(" ") in condition , by adding 1 to "count_check".  
0이상 "input_number" 미만의 범위에서 "count_check"를 하나씩 늘려가며 작동하며 조건에 맞추어 별("*")과 공백(" ")을 출력합니다.  
The condition of star("*") and blank(" ") is to be spcified by "upper_black" and "start_number" in each line, as same as below.  
조건은 아래와 같고 각 줄에서 "upper_black"와 "start_number"를 통해 별("*")과 공백(" ")의 위치를 특정합니다.  


/*  
if(count_check < uppper_blank) printf(" ");  
else if(uppper_blank <= count_check && count_check <uppper_blank + start_number)printf("2");  
else if(uppper_blank + start_number <= count_check && count_check < uppper_blank*3 + start_number)printf(" ");  
else if(uppper_blank*3 + start_number <= count_check && count_check < uppper_blank*3 + start_number*2)printf("4");  
else if(uppper_blank*3 + start_number*2 <= count_check && count_check < input_number)printf("5");  
*/  


In case of down side part of Heart, execute the code in range of more than 0 and under "input_number", by removing 2 to "star_repeat".  
아래쪽 역 피라이드의 경우 변수 "star_repeat"에 "input_number"의 값을 대입하면서 해당 값이 0 초과의 범위내에서 2씩 줄여가며 동작합니다.  
In range of more than 0 and under add of "input_number" and half of "star_repeat", increase 1 for "under_blank" in each step.  
하트의 가장 긴 길이 "input_number"의 절반과, 해당하는 줄에서 출력될 별의 수 "star_repeat"의 절반을 더한 수 미만을 범위로 하여 변수 "under_blank"를 0부터 1씩 증가시킵니다.  
For "under_blank", print blank(" ") in range of under removing "star_repeat" from "input_number", or print star("*").  
"under_blank"가 전체 길이 "input_number"에서 해당하는 줄에서 출력될 별의 수 "star_repeat"를 뺸 수 미만의 경우에서만 공백(" ")을, 아니면 별(" * ")을 출력시킵니다.  
