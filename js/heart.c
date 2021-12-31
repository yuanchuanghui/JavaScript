//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)
//int main() {
//		int chance = 3;
//		int loginCount = chance;
//		char name[10] = "";
//		char pwd[10] = "";
//		int i;
//		for (i = 1;i <=loginCount;i++) {
//			printf("请输入名字");
//				scanf("%s", name);
//			printf("请输入密码");
//			scanf("%s", pwd);
//			if (strcmp("即兴", name) == 0 && strcmp("888", pwd) == 0) 
//			{
//				printf("登陆成功");
//				break;
//	
//			}
//			else {
//				chance--;
//				printf("你还有%d次机会", chance);
//			}
//		}
//		return 0;
//			 
//	
//	}
//
////int main() {
////	int i, j;
////	i = 3;
////	j = 3;
////	char name[10] = "";
////	char pwd[10] = "";
////	for (i = 1;i < j;i++;) {
////		printf("请输入姓名", name);
////		scanf_s("%s", name);
////		printf("请输入密码", pwd);
////		scanf_s("%s", pwd);
////		if (strcmp("张山"，name) == 0 && ("888", pwd) == 0) {
////			printf(\n"登陆成功");
////			break;
////		}
////		else {
////			i--;
////			printf("你的机会还有%d次", i);
////		}
////	}
////	return 0;
////}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
	float x, y, a;
	for (y = 1.5;y > -1.5;y -= 0.1) {
		for (x = -1.5;x < 1.5;x += 0.05) {
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '@' : '  ');
		}
		system("color 0c");
		putchar('\n');
	}
	printf("                        送您一个爱心");
	printf("\n\n");
	return 0;
}