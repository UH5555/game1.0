#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

////��������Ϸ
////1.���Ի�����һ�������
////2.������
//void menu()
//{
//printf("**********************\n");
//printf("*****1.��   0.����****\n");
//printf("**********************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//ʱ���Ϊ���ڵļ����ʱ���ȥ���������ʼʱ��1970��1��1��0ʱ0�֡�
//	ret = rand() % 100 + 1;//����һ��1-100���������rand�ķ�ΧΪ0-32767
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////goto���
//int main()
//{
//	printf("xixi\n");
//		goto again;
//		printf("hehe\n");
//	again:
//		printf("haha\n");
//		return 0;
// }

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 3600");
//again:
//	printf("��ĵ��Խ���һ��Сʱ��ػ�������ȡ���������룺�������\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "�������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 3600");
	while (1)
	{
		printf("��ĵ��Խ���һ��Сʱ��ػ�������ȡ���������룺�������\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "�������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}