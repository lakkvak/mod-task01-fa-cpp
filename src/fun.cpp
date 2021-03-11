#include "fun.h"
#include <iostream>
unsigned int faStr1(const char* str)
{
	bool isWord = false;	
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 57 || str[i] < 48) && str[i]!=' ')
		{
			isWord = true;
			
			while (str[i] != ' ' && str[i]!='\0')
			{
				i++;
				if (str[i] > 47 && str[i] < 58 && isWord )
					isWord = false;
			}
			
			if (isWord) {
				count++; 
				isWord = false;
			}
		}
		else		
			while (str[i] != ' ' && str[i] != '\0')
				i++;			
		
		while (str[i] == ' ')
			i++;		
	}
	return count;
}
unsigned int faStr2(const char* str)
{
	bool isWord = false;
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) && str[i] != ' ')
		{
			isWord = true;
			i++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				
				if ((str[i] < 97 || str[i]>122 ) && isWord)
					isWord = false;
				i++;
			}

			if (isWord) {
				count++;
				isWord = false;
			}
		}
		else
			while (str[i] != ' ' && str[i] != '\0')
				i++;

		while (str[i] == ' ')
			i++;
	}
	return count;
}
unsigned int faStr3(const char* str)
{
	int i = 0, countWord = 0, result = 0;
	float countLett=0;	

	while (str[i] != '\0')
	{
		if (str[i]!=' ')
		{
						
			while (str[i] != ' ' && str[i] != '\0')
			{
				countLett++;
				i++;
			}
			countWord++;		
		}
		else
		{
			while (str[i]== ' ' )
				i++;				
		}

		
	}
	countLett = countLett / static_cast<float>(countWord);
	result = countLett;
	
	if (countLett - static_cast<float>(result) >= 0.5)
		result++;
	return result;
}