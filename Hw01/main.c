/* 作者：電通系3A u0451077 毛彥傑 */
/* 日期：2017年10月15日 */
/* 程式功能: 轉換輸入的十進位為八進位，並輸出雙方的值 */

#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv [ ] ){
	int number10,i,temp,number8=0;	
	int key[5] = {1,10,100,1000,10000};
	int keyTime = sizeof(key)/sizeof(key[0]);
	
	do{
		printf("請輸入一個介於1000到9999之間的數\n");
		scanf("%d",&number10);
	}
	while((number10<1000)||(number10>9999));
	
	temp = number10;

	for(i=0;i<keyTime;i++){
		number8 = number8 + temp % 8 * key[i];
		temp = temp / 8;
	}
	printf("輸入的十進制數為%d , 轉換為八進制後數為%d\n",number10,number8);
		
	system("PAUSE");
	return 0;
}
