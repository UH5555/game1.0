#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

////猜数字游戏
////1.电脑会生成一个随机数
////2.猜数字
//void menu()
//{
//printf("**********************\n");
//printf("*****1.玩   0.不玩****\n");
//printf("**********************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	//时间戳为现在的计算机时间减去计算机的起始时间1970年1月1日0时0分。
//	ret = rand() % 100 + 1;//生成一个1-100的随机数。rand的范围为0-32767
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////goto语句
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
//	printf("你的电脑将在一个小时后关机，如需取消，请输入：你的名字\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "你的名字") == 0)
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
		printf("你的电脑将在一个小时后关机，如需取消，请输入：你的名字\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "你的名字") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}