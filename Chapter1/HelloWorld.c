#include <stdio.h>
#include <math.h>

// These Symbolic Constants Names below aren't variables 
#define LOWER 0
#define UPPER 300
#define STEP 20
#define BRK 48 // Press 0 to char 48

main() {
	countBlanksTabsAndNewLines();
	lineCounting();
	helloWorld();
	fahrenheitToSelsius();
	fahrenheitToSelsiusWithForLoop();
	countCharacters();
	inputToOutput();
	lineCounting();
}

helloWorld() {
	printf("Batman is awesome!\n\n");
}

float fahrenheitToSelsius() {
	float fahr;
	float celsius;
	
	fahr = LOWER;

	printf("Fahrenheit to Celsius Measurement\n");

	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("Fahrenheit: %3.0f  =  Celsius: %6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	printf("\n\n");
}

float fahrenheitToSelsiusWithForLoop() {
	int fahr;

	printf("Fahrenheit to Celsius Measurement with For Loop\n");

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("Fahrenheit: %3d  =  Celsius: %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
}

inputToOutput() {
	int c;

	printf("Other function, The value of EOF is: %d", BRK);

	while ((c = getchar()) != BRK) {
		putchar(c);
		printf("c real value is: %d", c);
	}

	printf("Exiting while\n");
}

countCharacters() {
	printf("Write a number please:");
	double nc;

	for (nc = 0; getchar() != BRK; ++nc) {
		;
	}
	printf("%.0f\n", nc);
}

lineCounting() {
	int c, newLine;

	newLine = 0;

	while ((c = getchar()) != BRK) {
		if (c == '\n') {
			++newLine;
		}
	}
	printf("Are in total %d lines\n", newLine);
}

countBlanksTabsAndNewLines() {
	int chr, blank = 0, newLine = 0, tab = 0;

	while ((chr = getchar()) != BRK) {
		if (chr == '\t') {
			++tab;
		} 
		else if (chr == '\n') {
			++newLine;
		}
		else if (chr == ' ') {
			++blank;
		}
	}

	printf("The value of lines are: %d\n", newLine);
	printf("Which its lines contain value of blank lines: %d\n", blank);
	printf("And the value of tab lines are: %d\n", tab);
}

// TODO: Contine in page: 22 exercise 1-9
