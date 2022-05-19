#include <stdio.h>

int main() {
        int month;
        scanf("%d", &month);

        char *season;

        switch(month) {
        case 1:
        case 2:
        case 12:
                season = "Winter";
                break;
        case 3:
        case 4:
        case 5:
                season = "Spring";
                break;
        case 6:
        case 7:
        case 8:
                season = "Summer";
                break;
        case 9:
        case 10:
        case 11:
                season = "Fall";
                break;
        default:
                season = "Invalid month number";
                break;
        }

/*
        if (month == 1  month == 2  month == 12) {
                season = "Winter";
        } else if (month == 3  month == 4  month == 5) {
                season = "Spring";
        } else if (month == 6  month == 7  month == 8) {
                season = "Summer";
        } else if (month == 9  month == 10  month == 11) {
		season = "Fall";
        } else {
                season = "Invalid month number.";
        }
*/
        puts(season);
        return 0;
}
