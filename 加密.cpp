#include<stdio.h>
FILE *fp1,*fp2;			//�����ļ�
void find1()
{	char a1[100];
	printf("������һ���ַ��������ַ��������������ļ��У���");
	getchar();			//�Ե��س�
	gets(a1);
	if((fp1=fopen("mingwen.txt","w"))==NULL)			//��д��ʽ�򿪴����ı��ļ�mingwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	fprintf(fp1,"%s",a1);			//���ַ���a1[100]д���ļ�mingwen.txt
	fclose(fp1);			//�ر��ļ�mingwen.txt
	printf("�ѳɹ��������ļ���\n");
}
void find2()
{	int i;			//iΪ�ǵ���
	char a2[100];
	if((fp1=fopen("mingwen.txt","r"))==NULL)			//�Զ���ʽ�򿪴����ı��ļ�mingwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	getchar();			//�Ե��س�
	fgets(a2,101,fp1);			//���ļ������ַ�������ֵ��a2[100]
	fclose(fp1);			//�ر��ļ�mingwen.txt
	for(i=0;a2[i]!='\0';i++) a2[i]+=10;
	if((fp2=fopen("miwen.txt","w"))==NULL)			//��д��ʽ�򿪴����ı��ļ�miwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	fputs(a2,fp2);			//���ַ���д��miwen.txt
	fclose(fp2);			//�ر��ļ�miwen.txt
	printf("�ѳɹ����ܲ����뵽�����ļ���\n");
}
void find3()
{	char a2[100];
	if((fp2=fopen("miwen.txt","r"))==NULL)			//�Զ���ʽ�򿪴����ı��ļ�miwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	getchar();			//�Ե��س�
	fgets(a2,101,fp2);
	printf("�����ļ����ݣ�%s\n",a2);
	fclose(fp2);			//�ر��ļ�minwen.txt
}
void find4()
{	int i;			//iΪ�ǵ���
	char a1[100];
	if((fp2=fopen("miwen.txt","r"))==NULL)			//�Զ���ʽ�򿪴����ı��ļ�miwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	getchar();			//�Ե��س�
	fgets(a1,101,fp2);
	for(i=0;a1[i]!='\0';i++) a1[i]-=10;
	printf("���������ļ����ݣ�%s\n",a1);
	fclose(fp2);			//�ر��ļ�miwen.txt
}
void find5()
{	char a1[100];
	if((fp1=fopen("mingwen.txt","r"))==NULL)			//�Զ���ʽ�򿪴����ı��ļ�mingwen.txt���жϴ򿪲����Ƿ���ȷ
	{	printf("����\n");
		return;
	}
	getchar();			//�Ե��س�
	fgets(a1,101,fp1);
	printf("�����ļ����ݣ�%s\n",a1);
	fclose(fp1);			//�ر��ļ�mingwen.txt
}
main()
{	int i=0;			//iΪ���
	printf("���˵���\n1.���������ļ�\n2.���������ļ����뵽�����ļ�\n3.��ȡ�����ļ�����ӡ\n4.���������ļ�����ӡ\n5.��ȡԭ���ļ�����ӡ\n6.�˳�����\n");
	while(i!=6)			//ѡ��Ҫִ�еĹ���
	{printf("����������Ҫִ�й��ܵ���ţ�");
	 scanf("%d",&i);
	 if(i==1) find1();
	 if(i==2) find2();
	 if(i==3) find3();
	 if(i==4) find4();
	 if(i==5) find5();
	}
	return 0;			//�˳�����
}