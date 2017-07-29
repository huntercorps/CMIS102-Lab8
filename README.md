# CMIS102-Lab8
CMIS 102 Hands-On Lab
This hands-on lab allows you to follow and experiment with the critical steps of developing a program including the program description, analysis, test plan, and implementation with C code. The example provided uses sequential, repetition, selection statements, functions, strings and arrays.
Program Description
This program will input and store meteorological data into an array. The program will prompt the user to enter the average monthly rainfall for a specific region and then use a loop to cycle through the array and print out each value. The program should store up 5 years of meteorological data. Data is collected once per month. The program should provide the option to the user of not entering any data.
Analysis
I will use sequential, selection, and repetition programming statements and an array to store data.
I will define a 2-D array of Float number: Raindata[][] to store the Float values input by the user. To store up to 5 years of monthly data, the array size should be at least 5*12 = 60 elements. In a 2D array this will be RainData[5][12]. We can use #defines to set the number of years and months to eliminate hard- coding values.
A float number (rain) will also be needed to input the individual rain data.
A nested for loop can be used to iterate through the array to enter Raindata. A nested for loop can also be used to print the data in the array.
A array of strings can be used to store year and month names. This will allow a tabular display with labels for the printout.
Functions will be used to separate functionality into smaller work units. Functions for displaying the data and inputting the data will be used.
A selection statement will be used to determine if data should be entered
C Code
The following is the C Code that will compile in execute in the online compilers.
// C code
// This program will input and store meteorological data into an array. // Developer: Faculty CMIS102
// Date: Jan 31, XXXX
#define NUMMONTHS 12
#define NUMYEARS 5
#include <stdio.h>
// function prototypes
void inputdata();
void printdata();
// Global variables
// These are available to all functions
float Raindata[NUMYEARS][NUMMONTHS];
char years[NUMYEARS][5] = {"2011","2012","2013","2014","2015"};
char months[NUMMONTHS][12] ={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"}; int main ()
{
char enterData = 'y';
printf("Do you want to input Precipatation data? (y for yes)\n"); scanf("%c",&enterData);
if (enterData == 'y') {
    // Call Function to Input data
    inputdata();
     // Call Function to display data
     printdata();
   }
else {
printf("No data was input at this time\n");
}
printf("Please try the Precipitation program again. \n"); return 0;
}
// function to inputdata
void inputdata() {
  /* variable definition: */
  float Rain=1.0;
   // Input Data
   for (int year=0;year < NUMYEARS; year++) {
for (int month=0; month< NUMMONTHS; month++) { printf("Enter rain for %d, %d:\n", year+1, month+1); scanf("%f",&Rain);
Raindata[year][month]=Rain;
3
} }
}
// Function to printdata
void printdata(){
// Print data
   printf ("year\t month\t rain\n");
   for (int year=0;year < NUMYEARS; year++) {
for (int month=0; month< NUMMONTHS; month++) { printf("%s\t %s\t %5.2f\n",
years[year],months[month],Raindata[year][month]); }
} }
1. Demonstrate you successfully followed the steps in this lab by preparing screen captures of you running the lab as specified in the Instructions above.
2. Modify the program to add a function to sum the rainfall for each year. (Hint: you need to sum for each year. You can do this using a looping structure). Support your experimentation with screen captures of executing the new code.
3. Enhance the program to allow the user to enter another meteorological element such as windspeed (e.g. 2.4 mph). Note, the user should be able to enter both rainfall and windspeed in your new implementation. Support your experimentation with screen captures of executing the new code.
4. Prepare a new test table with at least 2 distinct test cases listing input and expected output for the code you created after step 2.
5. What happens if you change the NUMMONTHS and NUMYEARS definitions to other values? Be sure to use both lower and higher values. Describe and implement fixes for any issues if errors results. Support your experimentation with screen captures of executing the new code.
