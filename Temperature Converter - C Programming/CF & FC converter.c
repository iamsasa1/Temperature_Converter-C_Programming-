/**
 * C program to convert temperature from degree celsius to fahrenheit &
fahrenheit to celsius.
 */

#include <stdio.h>

int main()
{
    char typeOfTemperature, c, f;
    float celsius, fahrenheit;


	printf("***If You enter the temperature in celsius >>> you should include its type as c ***\n***If You enter the temperature in fahrenheit >>> you should incluede its type as f ***\n\n");
    printf("Enter the typeOfTemperature: ");
    scanf("%s", &typeOfTemperature);


	if(typeOfTemperature == 'c'){

		/* Input temperature in celsius */
    	printf("Enter temperature in Celsius: ");
    	scanf("%f", &celsius);

    	/* celsius to fahrenheit conversion formula */
    	fahrenheit = (celsius * 9 / 5) + 32;

    	printf("%.2f Celsius = %.2f Fahrenheit \n", celsius, fahrenheit);
	}

	else if(typeOfTemperature == 'f'){

		/* Input temperature in fahrenheit */
    	printf("Enter temperature in Fahrenheit: ");
    	scanf("%f", &fahrenheit);

    	/* fahrenheit to celsius conversion formula */
    	celsius = ((fahrenheit-32)*5)/9;

    	printf("%.2f Fahrenheit = %.2f Celsius \n", fahrenheit, celsius);
	}

	else{
		printf("Warning >>> You entered invalid value!!! \n");
	}

    return 0;
}
