#include<fstream>
using namespace std;

void giveQuestion()
{
	/*	int board[9][9]={{0,6,0,0,0,0,0,0,0},
					 {0,0,0,0,7,5,4,0,6},
					 {2,8,0,0,0,1,0,0,7},
					 {6,5,0,0,0,0,0,0,0},
					 {0,3,0,0,0,0,0,6,0},
					 {0,0,0,0,0,0,0,5,8},
					 {8,0,0,4,0,0,0,3,9},
					 {1,0,7,9,5,0,0,0,0},
					 {0,0,0,0,0,0,0,7,0}};
					 
  	int board[9][9]={{7,6,4,3,9,2,8,1,5},
					 {3,1,9,8,7,5,4,2,6},
					 {2,8,5,6,4,1,3,9,7},
					 {6,5,1,7,8,9,2,4,3},
					 {9,3,8,5,2,4,7,6,1},
					 {4,7,2,1,3,6,9,5,8},
					 {8,2,6,4,1,7,5,3,9},
					 {1,4,7,9,5,3,6,8,2},
					 {5,9,3,2,6,8,1,7,4}};*/
		int board[9][9]={{0,2,1,0,6,0,5,9,0},
				{0,0,0,0,0,0,0,0,2},
				{4,0,0,2,0,5,0,6,3},
				{3,0,7,6,0,0,0,0,0},
				{0,9,5,0,0,0,3,2,0},
				{0,0,0,0,0,3,7,0,1},
				{9,3,0,4,0,2,0,0,7},
				{5,0,0,0,0,0,0,0,0},
				{0,1,2,0,9,0,6,3,0}};
					 
	int i , j;
	
	ofstream file("Question.txt",ios::out);
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			file<<board[i][j]<<" ";
		}
		file<<endl;
	}
}