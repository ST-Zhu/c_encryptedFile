#include<stdio.h>
FILE *fp1,*fp2;			//定义文件
void find1()
{	char a1[100];
	printf("请输入一行字符串（此字符串将存入明文文件中）：");
	getchar();			//吃掉回车
	gets(a1);
	if((fp1=fopen("mingwen.txt","w"))==NULL)			//以写方式打开磁盘文本文件mingwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	fprintf(fp1,"%s",a1);			//将字符串a1[100]写入文件mingwen.txt
	fclose(fp1);			//关闭文件mingwen.txt
	printf("已成功到明文文件！\n");
}
void find2()
{	int i;			//i为记点数
	char a2[100];
	if((fp1=fopen("mingwen.txt","r"))==NULL)			//以读方式打开磁盘文本文件mingwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	getchar();			//吃掉回车
	fgets(a2,101,fp1);			//从文件读出字符串并赋值给a2[100]
	fclose(fp1);			//关闭文件mingwen.txt
	for(i=0;a2[i]!='\0';i++) a2[i]+=10;
	if((fp2=fopen("miwen.txt","w"))==NULL)			//以写方式打开磁盘文本文件miwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	fputs(a2,fp2);			//将字符串写入miwen.txt
	fclose(fp2);			//关闭文件miwen.txt
	printf("已成功加密并输入到密文文件！\n");
}
void find3()
{	char a2[100];
	if((fp2=fopen("miwen.txt","r"))==NULL)			//以读方式打开磁盘文本文件miwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	getchar();			//吃掉回车
	fgets(a2,101,fp2);
	printf("密文文件内容：%s\n",a2);
	fclose(fp2);			//关闭文件minwen.txt
}
void find4()
{	int i;			//i为记点数
	char a1[100];
	if((fp2=fopen("miwen.txt","r"))==NULL)			//以读方式打开磁盘文本文件miwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	getchar();			//吃掉回车
	fgets(a1,101,fp2);
	for(i=0;a1[i]!='\0';i++) a1[i]-=10;
	printf("解密密文文件内容：%s\n",a1);
	fclose(fp2);			//关闭文件miwen.txt
}
void find5()
{	char a1[100];
	if((fp1=fopen("mingwen.txt","r"))==NULL)			//以读方式打开磁盘文本文件mingwen.txt并判断打开操作是否正确
	{	printf("错误！\n");
		return;
	}
	getchar();			//吃掉回车
	fgets(a1,101,fp1);
	printf("明文文件内容：%s\n",a1);
	fclose(fp1);			//关闭文件mingwen.txt
}
main()
{	int i=0;			//i为序号
	printf("主菜单：\n1.输入明文文件\n2.加密明文文件输入到密文文件\n3.读取密文文件并打印\n4.解密密文文件并打印\n5.读取原文文件并打印\n6.退出程序\n");
	while(i!=6)			//选择要执行的功能
	{printf("请输入你想要执行功能的序号：");
	 scanf("%d",&i);
	 if(i==1) find1();
	 if(i==2) find2();
	 if(i==3) find3();
	 if(i==4) find4();
	 if(i==5) find5();
	}
	return 0;			//退出程序
}