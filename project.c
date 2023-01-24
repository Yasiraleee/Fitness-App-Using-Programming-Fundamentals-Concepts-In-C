#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
struct pre
{
	int crnum;
	char name[20];
	float bal;
	char pass[50];
} id, nice;
void cap();
void cap1();
void cap2();
void cap3();
void intro();
void outro();
void mainpage();
void date();
int login();
void menu();

int main()
{
	int choice;
	char tutu, p;
	char choi;
	int x;
	for (x = 0; x <= 50; x++)
	{
		printf("*");
	}
	printf("  HELLO USER!  ");
	for (x = 0; x <= 53; x++)
	{
		printf("*");
	}
	printf("\n\nDo you want to continue(Y/n)......");
	scanf(" %c", &choi);
	switch (choi)
	{
	case 'Y':
	case 'y':
		mainpage();
		x = login();
		if (x == 0)
		{
			printf(".\n.\n.\n.\n.\nNo permission to enter the system!");
			return 0;
		}
		menu();
		while (p != 'y')
		{
			system("cls");
			printf("Enter Your Plan To Proceed:\n**************************\n1.Workout Plans\t\t\t\t2.Diet Plans\n3.Workout and Diet Plans\t\t4.Cardio\n5.Premeium Membership\n");
			scanf("%i", &choice);
			switch (choice)
			{
			case 1:
				cap();
				break;
			case 2:
				cap1();
				break;
			case 3:
				cap();
				printf("\n\nReady to see your diet plan(Y/n)...... ");
				scanf(" %c", &tutu);
				if (tutu == 'y' || tutu == 'Y')
				{
					cap1();
				}
				else
				{
				}
				break;
			case 4:
				cap2();
				break;
			case 5:
				cap3();
			}
			for (x = 0; x < 5; x++)
			{
				sleep(1);
				printf("*");
			}
			printf("\n\nDo you want to end the program ?(Y/n)........");
			scanf(" %c", &p);
			if (p == 'y')
			{
				outro(); //includes extra tip or progress
				break;
			}
		}
	case 'N':
	case 'n':
		break;
	}
}
void cap()
{
	int x, diff;
	char chest[25][25] = {};
	char part[25];
	char array[11] = {'P', 'l', 'e', 'a', 's', 'e', '_', 'W', 'a', 'i', 't'};
	char neww[11] = {'L', 'o', 'a', 'd', 'i', 'n', 'g'};
	printf("\n\n");
	printf("\t\t\t\t      ");
	for (x = 0; x < 12; x++)
	{
		sleep(1);
		printf("%c", array[x]);
	}
	printf("\n");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}
	printf("  Welcome To Your Workout Plan!  ");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}
	printf("\n\nEnter The Body Type You Would Like To Train: \n\n*Enter In STRING*\n\n");
	printf("1.Chest Workout\t\t\t2.Back Workout\n3.Bi/Triceps Workout\t\t4.Core Workout\n5.Legs Workout\t\t\t6.Glutes Workout:\n");
	scanf("%s", part);
	printf("Choose Difficulty Level:\n1.Beginner\t\t2.Intermidate\n3.Advance:\n");
	scanf("%i", &diff);
	if (diff == 1)
	{
		printf("\n\n");
		printf("\t\t\t\t      ");
		for (x = 0; x < 10; x++)
		{
			sleep(1);
			printf("%c", neww[x]);
		}
		printf("\n");
		if (strcmp("chest", part) == 0 || strcmp("Chest", part) == 0)
		{
			printf("1.Pushups x7(2 Sets)\n2.Machine Chest Fly x10(2 Sets)\n3.Incline Dumbbell Press x7(2 Sets)\n");
		}
		if (strcmp("back", part) == 0 || strcmp("Back", part) == 0)
		{
			printf("1.Pullups x5(2 Sets)\n2.Lat PullDowns x7(2 Sets)\n3.Bent Over Barbell Lift x5(2 Sets)\n");
		}
		if (strcmp("biceps", part) == 0 || strcmp("triceps", part) == 0 || strcmp("Biceps", part) == 0 || strcmp("Triceps", part) == 0)
		{
			printf("1.Dips x5(2 Sets)\n2.Dumbbell Curls x10(2 Sets)\n3.Triceps Pullover x7(2 Sets)\n");
		}
		if (strcmp("Core", part) == 0 || strcmp("core", part) == 0)
		{
			printf("1.Bicycles x10(2 Sets)\n2.Crunches x10(2 Sets)\n3.Plank 30s(2 Sets)\n");
		}
		if (strcmp("Legs", part) == 0 || strcmp("legs", part) == 0)
		{
			printf("1.Squats x7(2 Sets)\n2.Calf raises x10(2 Sets)\n3.Squat Jumps x7(2 Sets)\n");
		}
		if (strcmp("Glutes", part) == 0 || strcmp("glutes", part) == 0)
		{
			printf("1.Glute Bridge x7(2 Sets)\n2.Downward Dog x10(2 Sets)\n3.Split Squats x7(2 Sets)\n");
		}
	}
	else if (diff == 2)
	{
		char neww[11] = {'L', 'o', 'a', 'd', 'i', 'n', 'g'};
		printf("\n\n");
		printf("\t\t\t\t      ");
		for (x = 0; x < 10; x++)
		{
			sleep(1);
			printf("%c", neww[x]);
		}
		printf("\n");
		if (strcmp("chest", part) == 0 || strcmp("Chest", part) == 0)
		{
			printf("1.Pushups x15(2 Sets)\n2.Machine Chest Fly x15(2 Sets)\n3.Incline Dumbbell Press x15(2 Sets)\n");
		}
		if (strcmp("back", part) == 0 || strcmp("Back", part) == 0)
		{
			printf("1.Pullups x10(2 Sets)\n2.Lat PullDowns x10(2 Sets)\n3.Bent Over Barbell Lift x10(2 Sets)\n");
		}
		if (strcmp("biceps", part) == 0 || strcmp("triceps", part) == 0 || strcmp("Biceps", part) == 0 || strcmp("Triceps", part) == 0)
		{
			printf("1.Dips x10(2 Sets)\n2.Dumbbell Curls x15(2 Sets)\n3.Triceps Pullover x10(2 Sets)\n");
		}
		if (strcmp("Core", part) == 0 || strcmp("core", part) == 0)
		{
			printf("1.Bicycles x15(2 Sets)\n2.Crunches x15(2 Sets)\n3.Plank 35s(2 Sets)\n");
		}
		if (strcmp("Legs", part) == 0 || strcmp("legs", part) == 0)
		{
			printf("1.Squats x10(2 Sets)\n2.Calf raises x15(2 Sets)\n3.Squat Jumps x10(2 Sets)\n");
		}
		if (strcmp("Glutes", part) == 0 || strcmp("glutes", part) == 0)
		{
			printf("1.Glute Bridge x10(2 Sets)\n2.Downward Dog x15(2 Sets)\n3.Split Squats x10(2 Sets)\n");
		}
	}
	else if (diff == 3)
	{
		printf("\n\n");
		printf("\t\t\t\t      ");
		for (x = 0; x < 10; x++)
		{
			sleep(1);
			printf("%c", neww[x]);
		}
		printf("\n");
		if (strcmp("chest", part) == 0 || strcmp("Chest", part) == 0)
		{
			printf("1.Pushups x15(3 Sets)\n2.Machine Chest Fly x15(3 Sets)\n3.Incline Dumbbell Press x15(3 Sets)\n");
		}
		if (strcmp("back", part) == 0 || strcmp("Back", part) == 0)
		{
			printf("1.Pullups x10(3 Sets)\n2.Lat PullDowns x10(3 Sets)\n3.Bent Over Barbell Lift x10(3 Sets)\n");
		}
		if (strcmp("biceps", part) == 0 || strcmp("triceps", part) == 0 || strcmp("Biceps", part) == 0 || strcmp("Triceps", part) == 0)
		{
			printf("1.Dips x10(3 Sets)\n2.Dumbbell Curls x15(3 Sets)\n3.Triceps Pullover x10(3 Sets)\n");
		}
		if (strcmp("Core", part) == 0 || strcmp("core", part) == 0)
		{
			printf("1.Bicycles x15(3 Sets)\n2.Crunches x15(3 Sets)\n3.Plank 35s(2 Sets)\n");
		}
		if (strcmp("Legs", part) == 0 || strcmp("legs", part) == 0)
		{
			printf("1.Squats x10(3 Sets)\n2.Calf raises x15(3 Sets)\n3.Squat Jumps x10(3 Sets)\n");
		}
		if (strcmp("Glutes", part) == 0 || strcmp("glutes", part) == 0)
		{
			printf("1.Glute Bridge x10(3 Sets)\n2.Downward Dog x15(3 Sets)\n3.Split Squats x10(3 Sets)\n");
		}
	}
}
void cap1()
{
	char neww[11] = {'L', 'o', 'a', 'd', 'i', 'n', 'g'};
	int x;
	printf("\n\n");
	printf("\t\t\t\t      ");
	for (x = 0; x < 10; x++)
	{
		sleep(1);
		printf("%c", neww[x]);
	}
	printf("\n");
	int y, k, count = 0;
	char diet[99][99] = {"Breakfast: Oatmeal", "Lunch: Vegitables", "Dinner: Fish And Rice", "Breakfast: Egg", "Lunch: Chicken", "Dinner: Vegitable Rice", "Breakfast: One Whole-Wheat English Muffin", "Lunch: Turkey sandwich ", "Dinner: Steak", "Breakfast: Turkey Breakfast Sausage", "Lunch: Chicken Noodle Soup", "Dinner: Turkey Breast Meat", "Breakfast: One Cup Whole Wheat Flakes ", "Lunch: Tuna Wrap With One Wheat Flour Tortilla", "Dinner: One Serving Lasagna", "Breakfast: Oatmeal", "Lunch: Vegitables", "Dinner: Fish And Rice", "Breakfast: French Toast", "Lunch: Veggie Burger", "Dinner: Six-Ounce Baked Chicken Breast"};
	printf("\n");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}
	printf("  Welcome To Your Diet Plan!  ");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}

	for (x = 1; x < 8; x++)
	{
		printf("\n\n\t\t\t    Your Diet Plan For Day %i \n\n", x);
		count = count + 3;
		for (y = 0 + k; y < count; y++)
		{
			printf("%s\n", diet[y]);
		}
		k = k + 3;
	}
}
void cap2()
{
	char neww[11] = {'L', 'o', 'a', 'd', 'i', 'n', 'g'};
	int x;
	printf("\n\n");
	printf("\t\t\t\t      ");
	for (x = 0; x < 10; x++)
	{
		sleep(1);
		printf("%c", neww[x]);
	}
	int tm;
	printf("\n");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}
	printf("  Let's Get Ready To Do Some Cardio!  ");
	for (x = 0; x < 26; x++)
	{
		printf("*");
	}
	printf("\n\nChoose In Between These Cardio Plans: \n\n1.Quick Cardio(5 Minutes)\t\t2.Normal Cardio(10 Minutes)\n3.Intense Cardio(25 Minutes)\n");
	scanf("%i", &tm);
	if (tm == 1)
	{
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("  Quick Cardio  ");
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("\n\nLets Get Started!\n\n");
		printf("1.Jumping Jacks 30s(2x)\n2.Skipping Ropes 45s(2x)\n  Rest Time 30s    \n3.Pushups 30s(2x)\n4.Lunges 45s(2x)\n");
	}
	else if (tm == 2)
	{
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("  Normal Cardio  ");
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("\n\nLets Get Started!\n\n");
		printf("1.Jumping Jacks 30s(3x)\n2.Skipping Ropes 45s(3x)\n3.Pushups 30s(3x)\n4.Lunges 45s(3x)\n");
	}
	else if (tm == 3)
	{
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("  Intense Cardio  ");
		for (x = 0; x < 26; x++)
		{
			printf("*");
		}
		printf("\n\nLets Get Started!\n\n");
		printf("1.Jumping Jacks 30s(2x)\n2.Skipping Ropes 45s(2x)\n3.Pushups 30s(2x)\n4.Lunges 45s(2x)\n");
	}
}
void date()
{
	time_t t;
	time(&t);
	printf("\n\n\n");
	printf("\t\t\t\t\t\t%s \n", ctime(&t));
}
void mainpage()
{
	int i = 0;
	system("cls");
	date();
	printf("\n");
	printf("\t\t\t-----------------------------------\n");
	printf("\t\t\t|  ADDIDAS TRAINING-HOME WORKOUT  |\n");
	printf("\t\t\t-----------------------------------\n");
	printf("\n\n");
	printf("\t\t\t");
	system("pause");
	printf("\n\t\t\tLoading");
	for (i = 0; i < 5; i++)
	{
		sleep(1);
		printf(".");
	}
}
int login()
{
	char username[20], pass[20];
	int x, i = 0;
	while (i != 3)
	{
		system("cls");
		date();
		printf("\n");
		printf("\t\t\t\t\t-----------------------------------\n");
		printf("\t\t\t\t\t|  ADDIDAS TRAINING-HOME WORKOUT  |\n");
		printf("\t\t\t\t\t-----------------------------------\n");
		printf("\n\n");
		printf("\t\t\t");
		printf("Attempts remaining: %d", 3 - i);
		printf("\n\n");
		printf("\t\t\t");
		printf("Username: ");
		scanf("%s", username);
		printf("\n\n\t\t\t");
		printf("Password: ");
		scanf("%s", pass);

		x = verify(username, pass);
		if (x == 2)
		{
			printf("\n\nLogin Successful!");
			for (x = 0; x < 4; x++)
			{
				sleep(1);
				printf(".");
			}
			sleep(1);
			printf("   : )");
			break;
		}
		else if (x == 1)
			printf("Incorrect Password!");
		else
			printf("Incorrect Username!");
		i++;
		getch();
	}
	if (i != 3)
		return 1;
	else
		return 0;
}
int verify(char name[20], char str2[20])
{
	FILE *fp;
	int flag = 0, n = 0, i;
	char un[20], pwd[20];

	fp = fopen("username.txt", "r");
	if (fp == NULL)
	{
		printf("\nError 404. Login Failed.");
		exit(1);
	}
	while ((fscanf(fp, "%s", un)) == 1)
	{
		if (strcmp(name, un) == 0)
		{
			flag++;
			break;
		}
		n++;
	}
	if (flag == 0)
		return flag;

	fp = fopen("password.txt", "r");
	for (i = 0; i <= n; i++)
		fscanf(fp, "%s", pwd);

	if (strcmp(pwd, str2) == 0)
		return flag + 1;
	else
		return flag;
}

void menu()
{
	date();
	printf("\n");
	printf("\t\t\t\t\t-----------------------------------\n");
	printf("\t\t\t\t\t|  ADDIDAS TRAINING-HOME WORKOUT  |\n");
	printf("\t\t\t\t\t-----------------------------------\n");
	printf("\n\n\t\t\t");
}
void outro()
{
	printf(".\n.\n.\n.\n.\nThanks For Visiting Us!........");
}
void cap3()
{
	float a;
	char ans, sa;
	printf("\t\t\t******************Details For Premium Membership********************\n\n1.Access To Our Gym\n2.Free Trainer Provided By Us\n3.Fees 5000 PKR per Month\n");
	printf(".\n.\n.\n.\nDo You Want To Buy Premium Plan(Y/n).......");
	scanf(" %c", &sa);
	if (sa == 'y' || sa == 'Y')
	{
		printf("\n\n\n\t\t\t******************To apply for premium member ship********************\n");
		printf("\n\t\t\t************************Please enter your name************************\n");
		scanf("%s", &id.name);
		printf("\t\t\t******************Please enter your credit card number****************\n");
		scanf("%d", &id.crnum);
		printf("\t\t\t********************Please enter your password************************\n");
		scanf("%s", &id.pass);
		printf("\t\t\t**********Please enter current balance in your account****************\n");
		scanf("%f", &id.bal);
		if (id.crnum >= 1000 && id.crnum <= 9999)
		{ //credit card number must be greater than thousand and less than 10000//

			if (id.bal >= 5000)
			{
				printf("Congrats! You Are Eligible For Membership!\n");
				a = id.bal - 5000;
				printf("Your Balance After Applying For Membership Will Be %f\n", a);
				printf("Do You Want To Continue?\nPress (y) For Yes Or (n) For  No\n");
				scanf(" %c", &ans);
				switch (ans)
				{
				case 'Y':
				case 'y':
					printf("You Can Join Our Gym For Free!");
					break;
				case 'N':
				case 'n':
					printf("You Can Continue Using Our App For Free!");
					break;
				}
			}
			else
			{
				printf("Insufficient Balance");
			}
		}
		else
		{
			printf("Credit Card Number Incorrect");
		}
	}
	else
	{
	}
}
