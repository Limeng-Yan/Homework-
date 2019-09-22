#include <stdio.h>
#include<math.h>
void solution()
{
	float a,b,c;
	printf("\n使用此程序之前,请确认您的方程形式为ax^2+bx+c=0\n\n");
	printf("请按a,b,c的顺序输入数据，数据之间用逗号隔开:\n\n");
	scanf("%f%f%f",&a,&b,&c);
	double m=sqrt(b*b-4*a*c);
	if(m<0)
	{
		printf("\n方程无解");
		printf("\n");
	}
	else if(m==0)
	{
		printf("\n方程有两个相同的解,值为:");
		printf("%f\n",(-b)/(2*a));
		printf("\n");
	}
	else
	{
		printf("\n方程有两个不相同的解，分别为:");
		printf("x1=%f,x2=%f\n",(-b+m)/(2*a),(-b-m)/(2*a));
		printf("\n");
	}
} 
void date()
 { 
	int day, month, year, sum, leap,week; 
	printf("\n请输入年、月、日,格式为:年-月-日\n\n");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("\n");
	switch (month) // 先计算某月以前月份的总天数 
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
	sum = sum + day; // 再加上某天的天数 
	if (year%400 == 0 || (year % 4 == 0 && year %100 != 0))
	{ // 判断是不是闰年 
		leap = 1; 
	} 
	else
	{ 
		leap = 0; 
	}
	if (leap == 1 && month > 2) 
	{ // *如果是闰年且月份大于2,总天数应该加一天 
		sum++; 
	} 
	printf("这是这一年的第%d天。\n\n", sum);
	if(sum%7==0)
		week=sum/7;
	else
		week=(sum/7)+1;
	printf("这是这一年的第%d周。\n\n",week);
	printf("\n"); 
}
void area()
{
	//S_{面积} = \sqrt{\phi\cdot(\phi-a)\cdot(\phi-b)\cdot(\phi-c)}$。$\phi$表示三角形的半周长。
	float a,b,c,m;
	printf("\n请输入三角形的三边长a,b,c,用空格隔开:\n\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\n");
	m=(a+b+c)/2;
	double S=sqrt(m*(m-a)*(m-b)*(m-c));
	printf("输出三角形面积:\n\n");
	printf("S=%f\n\n",S);
}
int main()
{
	while(1)
	{
		int m;
		printf("\n\n**********************************\n");
		printf("请选出你想进行的操作:\n");
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("\n1 解方程ax^2+bx+c=0\n");
	    printf("\n2 根据日期判断第多少天第几周\n");
	    printf("\n3 已知边长求三角形面积\n");
	    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("**********************************\n");
		printf("您的选择是:");
		scanf("%d",&m);
		switch(m)
		{
	    case 1:solution();break;
	    case 2:date();break;
	    case 3:area();break;
		}

	}
}