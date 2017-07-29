//
// Created by HUNTER SMITH on 7/24/17.
//

//preprocessor
#include <stdio.h>
#define NUMMONTHS 12
#define NUMYEARS 5

//proto
void inputdata();
void printdata();
void sumdata();

//structs
struct weather_data{
    float rain_data;
    float wind_data;
} weather_data[NUMYEARS][NUMMONTHS];

// Global var
//struct Database weather_data[NUMYEARS][NUMMONTHS];
char years[NUMYEARS][5] = {"2011","2012","2013","2014","2015"};
char months[NUMMONTHS][4] ={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main(){
    char enterData = 'y';
    printf("Do you want to input weather data? (y for yes)\n");
    scanf("%c",&enterData);
    if (enterData == 'y') {
        // Call Function to Input data
        inputdata();
        // Call Function to display data
        printdata();
        // call Function to calculate Sum
        sumdata();
    }
    else {
        printf("No data was input at this time\n");
    }
    printf("Please try the Precipitation program again. \n"); return 0;
}

void inputdata(){
    float Rain=1.0;
    float Wind=1.0;

    for (int year=0;year < NUMYEARS; year++) {
        for (int month = 0; month < NUMMONTHS; month++) {
            printf("Enter rain for %d, %d:\n", year + 1, month + 1);
            scanf("%f", &Rain);
            weather_data[year][month].rain_data = Rain;
            printf("Enter wind speed for %d, %d:\n", year + 1, month + 1);
            scanf("%f", &Wind);
            weather_data[year][month].wind_data = Wind ;
        }
    }
}

void printdata(){
    // Print data
    printf ("year\t month\t rain\t wind(mph)\n");
    for (int year=0;year < NUMYEARS; year++) {
        for (int month=0; month< NUMMONTHS; month++) {
            printf("%s\t %s\t %5.2f\t %5.1f\n",
                   years[year],months[month],
                   weather_data[year][month].rain_data,
                   weather_data[year][month].wind_data);
        }
    }
}

void sumdata(){
    float sum;
    printf("---Yearly Rainfall---\n");
    printf("year\t rainfall\n");
    for (int year=0;year < NUMYEARS; year++) {
        sum = 0;
        for (int month=0; month< NUMMONTHS; month++){
            sum = sum + weather_data[year][month].rain_data;
        }
        printf("%s\t %.2f\n",years[year],sum);
    }
}