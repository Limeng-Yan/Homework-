#include <stdio.h>
#include<math.h>
void solution()
{
	float a,b,c;
	printf("\nʹ�ô˳���֮ǰ,��ȷ�����ķ�����ʽΪax^2+bx+c=0\n\n");
	printf("�밴a,b,c��˳���������ݣ�����֮���ö��Ÿ���:\n\n");
	scanf("%f%f%f",&a,&b,&c);
	double m=sqrt(b*b-4*a*c);
	if(m<0)
	{
		printf("\n�����޽�");
		printf("\n");
	}
	else if(m==0)
	{
		printf("\n������������ͬ�Ľ�,ֵΪ:");
		printf("%f\n",(-b)/(2*a));
		printf("\n");
	}
	else
	{
		printf("\n��������������ͬ�Ľ⣬�ֱ�Ϊ:");
		printf("x1=%f,x2=%f\n",(-b+m)/(2*a),(-b-m)/(2*a));
		printf("\n");
	}
} 
void date()
 { 
	int day, month, year, sum, leap,week; 
	printf("\n�������ꡢ�¡���,��ʽΪ:��-��-��\n\n");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("\n");
	switch (month) // �ȼ���ĳ����ǰ�·ݵ������� 
	{ 
	case 1:sum = 0;break; 
    case 2:sum = 31;break;
    case 3:sum = 59;break; 
    case 4:sum = 90;break;
    case 5:sum = 120;break; 
	case 6:sum = 151;break; 
	case 7:sum = 181;break; 
	case 8:sum = 212;break; 
	case 9:sum = 243;break; 
	case 10:sum = 273;break;
	case 11:sum = 304;break; 
	case 12:sum = 334;break;
	default:printf("data error");break; 
	} 
	sum = sum + day; // �ټ���ĳ������� 
	if (year%400 == 0 || (year % 4 == 0 && year %100 != 0))
	{ // �ж��ǲ������� 
		leap = 1; 
	} 
	else
	{ 
		leap = 0; 
	}
	if (leap == 1 && month > 2) 
	{ // *������������·ݴ���2,������Ӧ�ü�һ�� 
		sum++; 
	} 
	printf("������һ��ĵ�%d�졣\n\n", sum);
	if(sum%7==0)
		week=sum/7;
	else
		week=(sum/7)+1;
	printf("������һ��ĵ�%d�ܡ�\n\n",week);
	printf("\n"); 
}
void area()
{
	//S_{���} = \sqrt{\phi\cdot(\phi-a)\cdot(\phi-b)\cdot(\phi-c)}$��$\phi$��ʾ�����εİ��ܳ���
	float a,b,c,m;
	printf("\n�����������ε����߳�a,b,c,�ÿո����:\n\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\n");
	m=(a+b+c)/2;
	double S=sqrt(m*(m-a)*(m-b)*(m-c));
	printf("������������:\n\n");
	printf("S=%f\n\n",S);
}
int main()
{
	while(1)
	{
		int m;
		printf("\n\n**********************************\n");
		printf("��ѡ��������еĲ���:\n");
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("\n1 �ⷽ��ax^2+bx+c=0\n");
	    printf("\n2 ���������жϵڶ�����ڼ���\n");
	    printf("\n3 ��֪�߳������������\n");
	    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("**********************************\n");
		printf("����ѡ����:");
		scanf("%d",&m);
		switch(m)
		{
	    case 1:solution();break;
	    case 2:date();break;
	    case 3:area();break;
		}

	}
}