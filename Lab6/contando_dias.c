#include <stdio.h>

int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { 
        return 1; 
    } else {
        return 0;
    }
}

int daysSinceLimit(int day, int month, int year) {
    int countYear = year;
    int sumDays = daysPerMonth[month] - day;
    int countMonth = month + 1;
    
    for(;countYear < 2020; countYear++) {
        while(countMonth <= 12) {
            if (countMonth == 2) {
                if (isLeapYear(countYear)) {
                    sumDays += daysPerMonth[2] + 1 ;
                    countMonth++;
                    continue;        
                }  
            }
            
            sumDays += daysPerMonth[countMonth];
            countMonth++;
        }
        
        countMonth = 1;
    }

    if (year == 2020 && month == 9) {
        return 17 - day;
    } else {
        while(countMonth < 9) {
            if (countMonth == 2) {
                if (isLeapYear(2020)) {
                    sumDays += daysPerMonth[2] + 1 ;
                    countMonth++;
                    continue;
                }
            }
    
            sumDays += daysPerMonth[countMonth];
            countMonth++;
        }
        sumDays += 17; 
    }

    
    
    return sumDays + 1;
}

int main() {
    int day, month, year;

    while (scanf("%d %d %d", &day, &month, &year) != EOF) {
        printf("%d \n", daysSinceLimit(day, month, year));
    }
    
    return 0;
}