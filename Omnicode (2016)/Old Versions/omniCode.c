#include <stdio.h>
#include <math.h>

//Task 1: "Hello World!"
void task1()
{
	printf("Hello World!\n");
}

//Task 2: Personal Info
void task2()
{
	char fName[5]={"Dima"}; //My first name as a string of characters
	char lNameLet='I'; //The first letter of my last name
	int age=16; //My age as an integer in years
	float favNum=3.141593; //My favourite number to 6 decimal places
	
	printf("Hello, my name is %s %c. I am %i years old and my favourite number is %f.\n",fName,lNameLet,age,favNum);
}

//Task 3: Basic Math in C
void task3()
{
	int num1;
	int num2;
	int result;
	float accResult;
	
	printf("Please input two integers separately (e.g. 37 and 8):\n\n");
	scanf("%i",&num1);
	scanf("%i",&num2);
	
	result=num1+num2;
	printf("\n%i + %i = %i\n",num1,num2,result);
	result=num1-num2;
	printf("%i - %i = %i\n",num1,num2,result);
	result=num1*num2;
	printf("%i x %i = %i\n",num1,num2,result);
	result=num1/num2;
	printf("%i / %i = %i  (Floored)\n",num1,num2,result);
	accResult=(float)num1/(float)num2;
	printf("%i / %i = %f  (Accurate)\n",num1,num2,accResult);
	result=num1%num2;
	printf("%i %% %i = %i\n",num1,num2,result);
	
}

//Task 4: Data manipulations
void task4()
{
	float num1;
	float num2;
	float num3;
	float result1=1;
	float result2;
	
	printf("Please input 3 integers separately (e.g. 15, 32, 59):\n\n");
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);
	
	printf("\n4 x %1.0f + 3 = ",num1);
	num1*=4;num1+=3;
	printf("%1.0f (num1)\n%1.0f / 2 + 80 = ",num1,num2);
	num2/=2;num2+=80;
	printf("%1.4f (num2)\n%1.0f x 4.3 - 0.1 = ",num2,num3);
	num3*=4.3;num3+=0.1;
	printf("%1.1f (num3)\n\n(%1.0f + %1.4f + %1.1f) ^ 3 = ",num3,num1,num2,num3);
	// exponent function
	int i;
	for(i=1;i<=3;i++)
	{
		result1*=(num1+num2+num3);
	}
	printf("%f (Home-made exponent function)",result1);
}

//Task 5: Advanced math in C
void task5()
{
	printf("\n%i ^ %i = %i",2,10,(int)pow(2,10));
	printf("\n%i ^ 1/2 = %f",3,(float)sqrt(3));
	printf("\nsin(%i) = %f",90,(float)sin(90));
	printf("\ncos(%i) = %f",50,(float)cos(50));
	printf("\ntan(%i) = %f",44,(float)tan(44));
	printf("\n%f rounded down to the nearest whole number is %f",2.999999,floor(2.999999));
	printf("\n%f rounded up to the nearest whole number is %f",2.000001,ceil(2.000001));
	printf("\n|%f| = %f\n",-3.4,fabs(-3.4));
}

//Task 6: Personal Info Scan
void task6()
{
	char name[11];
	int age;
	int heightCm;
	
	printf("Enter your name (<11 letters) :\n");
	scanf("%s",&name);
	printf("Enter your age in whole years:\n");
	scanf("%i",&age);
	printf("Enter your height in cm (integer):\n");
	scanf("%i",&heightCm);
	printf("\nYour name is %s. You are %i years old and are %icm in height.\n",name,age,heightCm);
}

//Task7: Questionnaire
void task7()
{
	int age;
	int grade;
	int dataarray[100];
	int a;
	for(a=1;a<=100;a++)
	{
		dataarray[a] = 0;
	}
	//for loop variables
	int i;
	int j;
	//table organizer arrays
	
	
	while(1)
	{
		//question phase
		printf("Please enter your age (11-20):\n");
		scanf("%i",&age);
		printf("Please rate your meme spiciness on a scale of 1 to 10:\n");
		scanf("%i",&grade);
		//display phase
		if(grade>10)
		{
			printf("Don't be an Aidan...\n");
		}
		else if(grade<1)
		{
			printf("Only the most stale Roblox memes deserve below a 1");
		}
		else if(age<11 || age>20)
		{
			printf("Sorry, you are not within this survey's age range.");
		}
		else
		{
			dataarray[(age-10)+10*(grade-1)]+=1;
			printf("Thank you for your time!\n\n  Current Data:\n\n");
			
			for(i=1;i<=10;i++)
			{
				if(i!=1)
				{
					printf("%i   ",11-i);
				} else {
					printf("%i  ",11-i);
				}
				for(j=1;j<=10;j++)
				{
						printf("%i  ",dataarray[(j)+10*(11-i-1)]);
				}
				printf("\n");
			}
			printf("\n    11 12 13 14 15 16 17 18 19 20\n\n");
		}
		printf("Ready for next participant!\n\n");
		
		
	}
}

//Task8: RNG
void task8()
{
	int high;
	int low;
	printf("Please enter a minimum random number:\n");
	scanf("%i",&low);
	printf("Please enter a maximum random number:\n");
	scanf("%i",&high);
	
	srand((unsigned int) time(NULL));
	printf("Here are 3 random numbers between %i and %i:",low,high);
	int i;
	for(i=1;i<=3;i++)
	{
		printf("\n%i",rand()%(high-low+1)+low);
	}
	printf("\n");
}

//Task9: GradeMaker
void task9()
{
	char courses[4][30];
	int grades[4];
	char letterGrade;
	int i;
	for(i=1;i<=4;i++)
	{
		printf("Please enter a course name followed by its corresponding grade in %%:\n");
		scanf("%s",&courses[i-1]);
		scanf("%i",&grades[i-1]);
	}
	printf("\nYour Report Card:\n");
	for(i=1;i<=4;i++)
	{
		if(grades[i-1]>=80)
		{
			letterGrade='A';
		} 
		else if(grades[i-1]>= 70)
		{
			letterGrade='B';
		}
		else if(grades[i-1]>=60)
		{
			letterGrade='C';
		}
		else if(grades[i-1]>=50)
		{
			letterGrade='D';
		}
		else
		{
			letterGrade='R';
		}
		printf("\n%s:\n%i%% (%c)\n",courses[i-1],grades[i-1],letterGrade);
	}
}

//Task10: Month Translator
void task10()
{
	char monthNames[][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int monthNum;
	
	while(1)
	{
		printf("Please enter the number of a month (1-12)\n");
		scanf("%i",&monthNum);
		printf("%s\n\n",monthNames[monthNum-1]);
	}
}

//Task 11: Ptable quiz
void task11()
{
	char elements[118][14]={
	"hydrogen","helium","lithium","beryllium","boron","carbon","nitrogen","oxygen","fluorine","neon",
	"sodium","magnesium","aluminium","silicon","phosphorus","sulfur","chlorine","argon","potassium","calcium",
	"scandium","titanium","vanadium","chromium","manganese","iron","cobalt","nickel","copper","zinc",
	"gallium","germanium","arsenic","selenium","bromine","krypton","rubidium","strontium","yttrium","zirconium",
	"niobium","molybdenum","technetium","ruthenium","rhodium","palladium","silver","cadmium","indium","tin",
	"antimony","tellurium","iodine","xenon","caesium","barium","lanthanum","cerium","praseodymium","neodymium",
	"promethium","samarium","europium","gadolinium","terbium","dysprosium","holmium","erbium","thulium","ytterbium",
	"lutetium","hafnium","tantalum","tungsten","rhenium","osmium","iridium","platinum","gold","mercury",
	"thallium","lead","bismuth","polonium","astatine","radon","francium","radium","actinium","thorium",
	"protactinium","uranium","neptunium","plutonium","americium","curium","berkelium","californium","einsteinium","fermium",
	"mendelevium","nobelium","lawrencium","rutherfordium","dubnium","seaborgium","bohrium","hassium","meitnerium","darmstadtium",
	"roentgenium","copernicium","nihonium","flerovium","moscovium","livermorium","tennessine","oganesson"
	};
	
	int eNumber;
	char guess[14];
	int scoreY=0;
	int scoreN=0;
	
	srand((unsigned int) time(NULL));
	while(1)
	{
		eNumber=rand()%(118)+1;
		printf("What is the name of element #%i\n",eNumber);
		scanf("%s",&guess);
		if(strcmp(elements[eNumber-1],guess) == 0)
		{
			printf("That is correct! ");
			scoreY+=1;
		}
		else
		{
			printf("Incorrect. The answer was %s. Your guess was %s. ",elements[eNumber-1],guess);
			scoreN+=1;
		}
		printf("[Correct: %i|Incorrect: %i]\n",scoreY,scoreN);
	}
}

//Main ("Organizational") function
main()
{
	int choice;
	printf("\n----Dima's Task 1-10 Master Code----\n\nPlease enter the number of the task you would like to execute:\n1.  Hello World\n2.  Personal Info Display\n3.  Basic Math in C\n4.  Data Manipulations\n5.  Advanced Math in C\n6.  Interactve Personal Info Display\n7.  Student Questionnaire                  [Personal Favourite]\n8.  Random Number Generation\n9.  Percent - Letter Grade Translator\n10. Number - Name Month Translator\n\nBONUS!\n\n11. Periodic Table Quiz\n\n");
	scanf("%i",&choice);
	
	printf("\n--------------------------------\n\n");
	switch(choice)
	{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		case 6:
			task6();
			break;
		case 7:
			task7();
			break;
		case 8:
			task8();
			break;
		case 9:
			task9();
			break;
		case 10:
			task10();
			break;
		case 11:
			task11();
			break;
	}
}
