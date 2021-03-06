/*
1014. 福尔摩斯的约会 (20)
时间限制
100 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue

大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：

输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

输出格式：

在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。
输入样例：

3485djDkxh4hhGE 
2984akDfkkkkggEdsb 
s&hgsfdk 
d&Hyscvnm

输出样例：

THU 14:04

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000],s2[1000],s3[1000],s4[1000];
	gets(s1);
	gets(s2);
	gets(s3);
	gets(s4);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = strlen(s3);
	int len4 = strlen(s4);
	int i;char week[7][5] ={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for(i=0;i<len1&&i<len2;i++)
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G')
		{
			printf("%s ",week[s1[i]-'A']);
			break;//必须退出 
		}
	//接着向后找相同元素
	for(i++;i<len1&&i<len2;i++)
		if(s1[i]==s2[i])
			if(s1[i]>='0'&&s1[i]<='9'){
				printf("%02d:",s1[i]-'0');
				break;
			} 
			else if(s1[i]>='A'&&s1[i]<='N'){
				printf("%02d:",s1[i]-'A'+10);
				break;
			}
	for(i=0;i<len3&&i<len4;i++)
	{
		if(s3[i]==s4[i])
			if((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z'))
			{
				printf("%02d\n",i);  //位置
				break;
			 } 
	}
}






