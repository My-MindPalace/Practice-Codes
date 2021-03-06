/*	
	Alphabet Cipher
	Author - MyMindPalace
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	string message,keyword,temp,encodeStr;
	char subChart[26][26],c,sc,m;
	int i, j, alpha = 97,row,column;
	

	//Getting the message and keyword from the user
	cout << "Enter your keyword - ";
	cin >> keyword;
	cout << "Enter your message = ";
	cin >> message;
	printf("\n\n\n");


	//Computing the Substitution Chart
	for (i = 0; i < 26; i++)
	{
		alpha = 97+i;
		for (j = 0; j < 26; j++)
		{
			if (alpha == 123)
			{
				alpha = 97;
			}
			subChart[i][j] = alpha;
			alpha++;
		}
	}

	//Creating temporary string
	j = 0;
	for (i = 0; i < message.length(); i++,j++)
	{
		if (j == keyword.length())
			j = 0;
		c = keyword[j];
		temp.insert(i,1,c);
	}

	//Ciphering
	for (i = 0; i < temp.length(); i++)
	{
		row = message[i] - 97;
		column = temp[i] - 97;
		encodeStr.insert(i, 1, subChart[row][column]);
	}
	cout << "Ciphered string - " << encodeStr << endl;

	//Displaying the substitution chart
	cout << "\n\n\n###The Substition Chart###\n" << endl;
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26; j++)
		{
			cout << subChart[i][j];
		}
		printf("\n");
	}
	_getch();
    return 0;
}