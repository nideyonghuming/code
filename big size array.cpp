#include<stdio.h>

int a[1000000];
//如果数组大小超过10的6次方，需要将其定义在主函数之外
//否则会造成异常退出
//因为函数内部申请的局部变量来自与系统栈，允许申请的空间较小
//函数外申请的全局变量来自于静态存储区，允许申请的空间较大 
int main()
{
	for(int i = 0;i < 1000000; i++){
		a[i] = i;
	} 
	//好吧 打印出来就是个错误的选择。 
	for(int i = 0;i < 1000000; i++){
		printf("%d ",a[i]);
		if(i % 20 == 0){
			printf("\n");
		}
	} 
	return 0;
} 
