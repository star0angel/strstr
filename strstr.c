#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告
#include <assert.h>
#include <stdio.h>
#include <string.h>
//模拟实现strstr  查找子字符串功能
char* my_strstr( char* ,  char* );
int main()
{
	char p1[20] = { "nisndfsd" };
	char p2[10] = { "sda" };

	char * ret=my_strstr(p1, p2);
	return 0;
}

char* my_strstr( char* p1, char* p2)
{
	int len1 = strlen(p1);
	int len2 = strlen(p2);
	assert(len1);
	assert(len2);
	if (len2>len1)
	{
		return NULL;
	}

	


	while (strlen(p1)>=(size_t)len2)
	{
		while (*p1 != *p2)
		{
			p1++;

		}
		char* p11 = p1;
		char* p22 = p2;
		while (*p22 && *p22 == *p11)
		{
			p22++;
			p11++;
		}
		if (!(*p22))
		{
			return p1;
		}
		p1++;
	}
	return NULL;
}