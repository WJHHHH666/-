#include <stdio.h>
#include <Windows.h>
int main (void)
{
	printf("��Title��:\n��ʹ��������֮ǰ������֪�������������ա�����ȷ��׼ȷ����Ȼ��ѯ����᲻��ʵ��~\n\n\n");
	int Y,M,D,y,m,d,i,d1=0,d2=0,R=0,sum;
	int a,b,c,k;
	printf("�������������ڣ��� �� ��\n"); 
	scanf("%d %d %d",&y,&m,&d);
	printf("��������ĳ������ڣ��� �� ��\n"); 
	scanf("%d %d %d",&Y,&M,&D);
	for(i=Y;i<=y;i++)
	if(i%4==0&&i%100!=0||i%400==0)
	R++;
	if(y%4==0&&y%100!=0||y%400==0)
	k=29;
	else 
	k=28;
	printf("R = %d\n",R);
	switch(m){
		case 12:d1+=30;
		case 11:d1+=31;
		case 10:d1+=30;
		case 9:d1+=31;
		case 8:d1+=31;
		case 7:d1+=30;
		case 6:d1+=31;
		case 5:d1+=30;
		case 4:d1+=31;
		case 3:d1+=k;
		case 2:d1+=31;
		default :;		
	}d1+=d;
	if(Y%4==0&&Y%100!=0||Y%400==0)
	k=29;
	else 
	k=28;
	printf("d1 = %d\n",d1);
		
		switch(M){
		case 12:d2+=30;
		case 11:d2+=31;
		case 10:d2+=30;
		case 9:d2+=31;
		case 8:d2+=31;
		case 7:d2+=30;
		case 6:d2+=31;
		case 5:d2+=30;
		case 4:d2+=31;
		case 3:d2+=k;
		case 2:d2+=31;
		default :;		
	}d2+=D;
	printf("d2 = %d\n",d2);
	
	sum = (y-Y)*365+R-d2+d1;
	printf("sum = %d\n",sum);
	a = sum%23;
	b = sum%28;
	c = sum%33;
	printf("a = %d ,b = %d,c = %d\n",a,b,c);
	if(a==0)
	printf("�����պ��������ա�");
	else if(a>0&&a<12)
	printf("�������ڸ߳��ڵ�%d�졣",a);
	else if(a==12)
	printf("�����պ����ٽ��ա�");
	else 
	printf("�������ڵͳ��ڵ�%d�졣",a-12); 
	
	
	
	if(b==0)
	printf("�����պ��������ա�");
	else if(b>0&&b<12)
	printf("�������ڸ߳��ڵ�%d�졣",b);
	else if(b==12)
	printf("�����պ����ٽ��ա�");
	else 
	printf("�������ڵͳ��ڵ�%d�졣",b-12); 
	
	
	if(c==0)
	printf("�����պ��������ա�");
	else if(c>0&&c<12)
	printf("�������ڸ߳��ڵ�%d��",c);
	else if(c==12)
	printf("�����պ����ٽ��ա�");
	else 
	printf("�������ڵͳ��ڵ�%d�졣",c-12); 
	system("pause");
	
	
 } 
