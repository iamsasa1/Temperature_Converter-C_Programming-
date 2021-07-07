# Temperature_Converter-C_Programming-
Temperature Converter in C_Programming (I created that question with answer)

# Challenge Name: Temperature Measure Converter

Description: Check knowledge for data types, user input, math operators, nested if-else. 

Problem Statement:
**Objective**

The fundamental of data types, user input, math operators, nested if-else. The data types that you use for relavent thing to use and how to get user input in C programming. So using math operators that are use to calculation in programming. How to use if-else and nested if-else condition for programming. This all types are very usefull things for learnin basics.

**Task** 

1. User input for typeOfTemperature
2. user can enter value and if it typeOfTemperature == 'c' you will have answer in fahrenheit, otherwise means else if typeOfTemperature == 'f',  you will have answer in celcius, or else you enterd invalid input, you will get warning like "Warning >>> You entered invalid value!!! \n"

/* celsius to fahrenheit conversion formula */

    	fahrenheit = (celsius * 9 / 5) + 32;
        
/* fahrenheit to celsius conversion formula */

    	celsius = ((fahrenheit-32)*5)/9;

Input Format: 
First line enter your type of temperature, it contains one character.

Second line you enter your temperature value, it contains one integer or floating value.

Constraints: 
First line entered character must be **simple** c or f. if not you have to show you warning message in your code.

0 <= float variables <= 1000000

Set the resulting values to approximately two decimal places.

Output Format: 
Print the value of temperature as like,

	**value** type of temperature value that you entered = **value** converted type of temperature
