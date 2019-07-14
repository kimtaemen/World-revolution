#include<stdio.h>
#include<stdlib.h>//������ �������� �־���.
#include<time.h>

int printer(int user_input[9][9])
{

	int index = 9;
	printf("     ");  // ���� ������ 123456789�� �ٷ� �������� �迭�� ���� ���ڰ� ���߱� ���� ó���� ��ĭ �����.
	for (int j = 0; j < index; j++) { printf("%2d", j + 1); } // �� �� �����ٿ� 123456789 ǥ��
	printf("\n");
	for (int j = 0; j <= index + 1; j++) { printf("--"); } // ���� 123456789 �ؿ� ��輱 ǥ��
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		printf("%2d | ", i + 1); // �ǿ��ʿ� ǥ���ϱ� ���� ������ �� ����
		for (int j = 0; j < 9; j++)
		{
			printf("%2d", user_input[i][j]); //user �迭 ǥ��
		} 
		printf("\n");
	}
}

int FuncOne(int user_input[9][9], int right_input[9][9])  // ������ Ǭ ������ ���� ��
{
	int i, j;
	int is_ok = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (user_input[i][j] != right_input[i][j])
			{
				is_ok = 1;
				break;
			}

		}
	}


	if (is_ok == 0) { printf("���� \n"); }
	else { printf("������ �ƴմϴ�. \n"); }

	printf("��������!! \n");
	system("pause"); // ���α׷� ���� �ȵǰ� �ϴ°�

}





int main() // void�� ��� �ȴٴ� ��.
{
	int i = 0, j = 0, num;
	int user_input[9][9] =                   // ������ ���� �迭
	{
	 {2,3,5,1,4,7,9,8,6},
	 {4,1,8,9,6,5,7,2,3},
	 {6,9,7,2,8,3,1,4,5},
	 {9,8,6,5,7,4,2,3,1},
	 {5,7,3,8,1,2,4,6,9},
	 {1,4,2,6,3,9,8,5,7},
	 {7,5,9,3,2,8,6,1,4},
	 {8,6,4,7,5,1,3,9,2},
	 {3,2,1,4,9,6,5,7,8}
	};
	int right_input[9][9] =                // ������ ���� �迭
	{
	 {2,3,5,1,4,7,9,8,6},
	 {4,1,8,9,6,5,7,2,3},
	 {6,9,7,2,8,3,1,4,5},
	 {9,8,6,5,7,4,2,3,1},
	 {5,7,3,8,1,2,4,6,9},
	 {1,4,2,6,3,9,8,5,7},
	 {7,5,9,3,2,8,6,1,4},
	 {8,6,4,7,5,1,3,9,2},
	 {3,2,1,4,9,6,5,7,8}
	};
	int c[9][9];

	printf("start.\n");
	printer(user_input);

	//printf("start.\n");                   // ���ӽ��� �˸�
	//int index = sizeof(user_input) / sizeof(user_input[0]);    // index�Լ��� ���� �� �ʱ�ȭ 9�� ���ð��̴�.
	//printf("     ");  // ���� ������ 123456789�� �ٷ� �������� �迭�� ���� ���ڰ� ���߱� ���� ó���� ��ĭ �����.
	//for (j = 0; j < index; j++) { printf("%2d", j + 1); } // �� �� �����ٿ� 123456789 ǥ��
	//printf("\n");
	//for (j = 0; j <= index + 1; j++) { printf("--"); } // ���� 123456789 �ؿ� ��輱 ǥ��
	//printf("\n");


	srand(time(NULL)); //�����Լ� ����

	
		int	re = 0; 
		re = rand() % 10 ;  // ���� 0~9
		int num1 = 8; 

	while(num1>re) // �����Լ� ������ ���� 
	{ 
		i, j = rand() % 10; // �迭�� ����, ������ �������� ����
		int origin_x = user_input[i][j];
		user_input[i][j] = 0; //���õ� �迭 �ڸ��� 0 ä�� �־�.
		printf("i => %d, j => %d, origin => %d, => %d\n", i, j, origin_x, user_input[i - 1][j - 1]);
		num1--;

	}
	printer(user_input);
	


   
	
	
	num = 0;
	int sum = 5;
	while (sum > 0)
	{


		printf("choice index x and y  ex)2 1 \n"); //�迭�� ���� ������ ����
		scanf("%d %d", &i, &j);

		if (user_input[i - 1][j - 1] != 0) { printf("���� ���� ��ġ�Դϴ�. \n"); } //0�� �ƴ� ������ ���ִ� ���� ������ ���
		else if (user_input[i - 1][j - 1] == 0) //0�� �� �ִ�(������ �־�� �ϴ�)��ġ�� ������ ���
		{
			printf("���ڸ� �Է��ϼ���: \n");
			scanf("%d", &num);
			//for (j = 0; j < 9; j++) { printf("1 2 3 4 5 6 7 8 9\n%2d", user_input[i][j]); } // ���� �̰�***************

			user_input[i - 1][j - 1] = num; //*** ȭ�鿡�� �� �迭�� �߰��Ǵ� ���� �ƴ�(������ �迭�� �Ѱ�, �ΰ�... ���� �þ.) ������ �������� �ش�(0)���ڸ� �ٲٰ� �ϴ¹�...

		}
		else { printf("�峭���� ���ÿ� \n"); } //11, 12 �� ������ ���� ���� ���

		user_input[i - 1][j - 1] = num;

		sum--;
		system("cls");
		printer(user_input);

	}


	FuncOne(user_input, right_input); // �� Ǯ���� ����� ��

}




