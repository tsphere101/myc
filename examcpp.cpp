#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void plusScore(struct STUDENT*, int, int);
void minusLeastScore(struct STUDENT* students, int n, int m, int min[100]);
struct STUDENT
{
	char name[50];
	int test[100];
	int all;
	char tempName[50];
};

int main()
{
	struct STUDENT* students;
	int n,m;
	int temp;
	int tempAll;
	int min[100];
	int max=0;
	printf("How many students : ");
	scanf("%d", &n);
	printf("How many test : ");
	scanf("%d", &m);
	students = (struct STUDENT*)malloc(n * sizeof(struct STUDENT));
	for (int i = 0;i < n;i++) {
		printf("Enter name  %d : ", i + 1);
		scanf("%s", students[i].name);
		for (int j = 0;j < m;j++) {
			printf("Enter score %d : ", i + 1);
			scanf("%d", &students[i].test[j]);
		}
		students[i].all = 0;
	}
	plusScore(students, n, m);
	minusLeastScore(students, n, m, min);
	for (int i = 0;i < n;i++) {
		if (students[i].all > max)
		{
			max = students[i].all;
		}
	}

	printf("\n\nlist\n");
	for (int k = 0;k < n;k++)
	{
		printf("%s", students[k].name);
		for (int j = 0;j < m;j++) {

			printf(" %d ", students[k].test[j]);
		}
		printf(" minus %d , Score = %d ",min[k], students[k].all);
		printf("\n");
	}

	printf("\nMAX : %d\n",max);
	for (int k = 0;k < n;k++)
	{
		if (students[k].all == max)
		{
			printf("%s", students[k].name);
			for (int j = 0;j < m;j++) {
				printf(" %d ", students[k].test[j]);
			}
			//printf(" all : %d ", students[k].all);
			printf("\n");
		}
		
	}
	return 0;
}
void plusScore(struct STUDENT *students, int n,int m)
{
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			students[i].all += students[i].test[j];
		}
	}

}
void minusLeastScore(struct STUDENT* students, int n, int m,int min[100]) 
{
	for (int i = 0;i < 100;i++)
	{
		min[i] = 999;
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (students[i].test[j] < min[i])
			{
				min[i] = students[i].test[j];
			}
		}
	}
	for (int i = 0;i < n;i++) {
		students[i].all -= min[i];
	}
}
void maxScore(struct STUDENT* students, int n,int max)
{
	for (int i = 0;i < n;i++) {
		if (students[i].all > max)
		{
			max = students[i].all;
		}
	}
}