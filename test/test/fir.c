#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2+22+222+2222+22222
//int main(){
//
//    int a=6;
//	int Sn=0;
//	int S1;
//	int S2;
//	int S3;
//	int S4;
//	int S5;
//    printf("请输入一个数字a：");
//	scanf("%d",&a);	
//  S1=a;
//	S2=a*10+a;
//	S3=a*100+a*10+a;
//	S4=a*1000+a*100+a*10+a;
//	S5=a*10000+a*1000+a*100+a*10+a;
////	Sn=a+(a*10+a)+(a*100+a*10+a)+(a*1000+a*100+a*10+a)+(a*10000+a*1000+a*100+a*10+a);
//	Sn=S1+S2+S3+S4+S5;
//    printf("\nSn=%d\n",Sn);
////
//	system("pause");
//	return 0;
//}

//#include <math.h>
//int main(){
//    int a=0;
//	int i=0;
//	int S[5]={0};
//	int Sn=0;
//	printf("请输入一个数字a：");
//	scanf("%d",&a);	
//	
//	for (i=0;i<5;i++)
//	{  
//		int j=0;
//		for (j=0;j<=i;j++)
//	   {
//
//		   S[i]=S[i]+a*pow(10,j);//有警告，从double转换到int，可能丢失数据
//	   }
//		Sn+=S[i];
//		
//	}
//	printf("\nSn=%d\n",Sn);
//
//	system("pause");
//	return 0;
//
//}




////一个登录界面，输入密码，若密码输入正确，则显示登录成功，最多输入三次，超过3次则退出界面
//#include<string.h>
//int main(){
//	char password[1024]={0};
//	int i=0;
//    for (i=0;i<3;i++)//最多输入3次
//    {
//		printf("请输入密码：\n");
//		scanf("%s",&password);
//		if (strcmp(password,"123456")==0)
//		{
//			break;
//		}
//    }
//	if (i<3)
//	{
//		printf("登录成功\n");
//	}
//	if (i==3)
//	{
//		//退出界面
//	}
//
//
//	system("pause");
//	return 0;
//}





////计算1！+2！+3！+......+10!的结果
////求每一个数的阶乘的函数
//int jiecheng(int x){
//    int i=1;
//	int jiecheng=1;
//	for (i=1;i<=x;i++)
//	{
//       jiecheng*=i;
//	}
//	return jiecheng;
//}
////求所有阶乘的和的函数
//int sumjiecheng(int y){
//
//	int sum=0;
//	int i=1;
//    for (i=1;i<=y;i++)
//    {
//
//		sum+=jiecheng(i);
//    }
//	return sum;//如果没return，结果就不对了
//
//}
//
//int main(){
//    int k=10;
//    int sum=0;
//    sum=sumjiecheng(k);
//	printf("\nsum=%d\n",sum);
//	system("pause");
//	return 0;
//}




//
//猜数字游戏：计算机自动生成一个随机数字(1-100)，由用户输入一个数字，如果这个数字和计算机准备好的数字不相同，就由计算机提示是高了还是低了

int main(){
	int a=0;
	int b=0;
    b=rand()%100+1;//得到的数一定在1-100之间
	while(1)//到底为什么，while(1)不懂
	{
		printf("请输入一个数字：");
		scanf("%d",&a);
		if(a<b){
			printf("低了\n");
		}else if (a>b)
		{
			printf("高了\n");
		}else{
			printf("恭喜你，猜对了\n");
			break;
		
		}
	}
	system("pause");
	return 0;

   
}



//






