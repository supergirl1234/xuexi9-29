#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2+22+222+2222+22222
//int main(){
//
//    int a=6;
//	int Sn=0;
//	int S1;
//	int S2;
//	int S3;
//	int S4;
//	int S5;
//    printf("������һ������a��");
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
//	printf("������һ������a��");
//	scanf("%d",&a);	
//	
//	for (i=0;i<5;i++)
//	{  
//		int j=0;
//		for (j=0;j<=i;j++)
//	   {
//
//		   S[i]=S[i]+a*pow(10,j);//�о��棬��doubleת����int�����ܶ�ʧ����
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




////һ����¼���棬�������룬������������ȷ������ʾ��¼�ɹ�������������Σ�����3�����˳�����
//#include<string.h>
//int main(){
//	char password[1024]={0};
//	int i=0;
//    for (i=0;i<3;i++)//�������3��
//    {
//		printf("���������룺\n");
//		scanf("%s",&password);
//		if (strcmp(password,"123456")==0)
//		{
//			break;
//		}
//    }
//	if (i<3)
//	{
//		printf("��¼�ɹ�\n");
//	}
//	if (i==3)
//	{
//		//�˳�����
//	}
//
//
//	system("pause");
//	return 0;
//}





////����1��+2��+3��+......+10!�Ľ��
////��ÿһ�����Ľ׳˵ĺ���
//int jiecheng(int x){
//    int i=1;
//	int jiecheng=1;
//	for (i=1;i<=x;i++)
//	{
//       jiecheng*=i;
//	}
//	return jiecheng;
//}
////�����н׳˵ĺ͵ĺ���
//int sumjiecheng(int y){
//
//	int sum=0;
//	int i=1;
//    for (i=1;i<=y;i++)
//    {
//
//		sum+=jiecheng(i);
//    }
//	return sum;//���ûreturn������Ͳ�����
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
//��������Ϸ��������Զ�����һ���������(1-100)�����û�����һ�����֣����������ֺͼ����׼���õ����ֲ���ͬ�����ɼ������ʾ�Ǹ��˻��ǵ���

int main(){
	int a=0;
	int b=0;
    b=rand()%100+1;//�õ�����һ����1-100֮��
	while(1)//����Ϊʲô��while(1)����
	{
		printf("������һ�����֣�");
		scanf("%d",&a);
		if(a<b){
			printf("����\n");
		}else if (a>b)
		{
			printf("����\n");
		}else{
			printf("��ϲ�㣬�¶���\n");
			break;
		
		}
	}
	system("pause");
	return 0;

   
}



//






