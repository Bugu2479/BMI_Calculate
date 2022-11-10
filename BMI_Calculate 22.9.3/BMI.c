#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//2022_9_03版本，把基础架构建立，使程序能够计算出BMI的具体数值。
//2022_9_24版本，加入if 语句，使得bmi计算程序得以完全内容正常运行。
//2022_9_25版本，加入 while 循环语句，使得计算程序可以多次运行，更具方便；同时加入了大量打印内容，优化语句提醒，更具人性化。
//2022_?_??版本，计划修正计算，优化计算算法，让程序跑快一点，代码精简一点，敬请期待。

int main()
{
	int i = 1;
	
	while (i ==1)
	{
		float a = 0;
		float b = 0;
		float sum = 0;
		float bmi = 0;
		printf("————————————————————————————————————\n");
		printf("不孤小屋产品1号版本2022_9_25：体型计算器\n");
		printf("体重(kg):\n");
		scanf("%f", &a);
		printf("身高(cm):\n");
		scanf("%f", &b);
		sum = b / 100 * b / 100;
		bmi = a / sum;
		printf("你的BIM为：%f\n", bmi);
		if (bmi >= 28)
		{
			printf("鉴定为：肥胖\n        你挺胖的\n");
		}
		if (bmi < 28)
		{
			if (bmi >= 24)
			{
				printf("鉴定为：超重\n        你胖胖的\n");
			}
			if (bmi < 24)
			{
				if (bmi >= 18.4)
					printf("鉴定为：正常\n        你很健康\n");
				else
					printf("鉴定为：瘦弱\n        多吃点饭\n");
			}
		}
	}
	return 0;
}

