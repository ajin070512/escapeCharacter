#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[] = "\6";
	char s2[] = "\45";
	char s7[] = "\45$6#45";

	char s3[] = "\112";
	char s4[] = "\11211";
	char s5[] = "\111";
	char s6[] = "\11112";

	/*转义字符\之后的八进制数字最多只有三个，\hhh
	但由于它们对应的ASCII码符号是有限的，127个
	若是数字太大，报错；看s3,s4和s5,s6的对比；
	*/

	puts(s);
	puts(s2);
	puts(s3);
	puts(s4);
	puts(s5);
	puts(s6);
	puts(s7);
	system("pause");
	return 0;
}
