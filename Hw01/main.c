/* �@�̡G�q�q�t3A u0451077 ��۳� */
/* ����G2017�~10��15�� */
/* �{���\��: �ഫ��J���Q�i�쬰�K�i��A�ÿ�X���誺�� */

#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv [ ] ){
	int number10,i,temp,number8=0;	
	int key[5] = {1,10,100,1000,10000};
	int keyTime = sizeof(key)/sizeof(key[0]);
	
	do{
		printf("�п�J�@�Ӥ���1000��9999��������\n");
		scanf("%d",&number10);
	}
	while((number10<1000)||(number10>9999));
	
	temp = number10;

	for(i=0;i<keyTime;i++){
		number8 = number8 + temp % 8 * key[i];
		temp = temp / 8;
	}
	printf("��J���Q�i��Ƭ�%d , �ഫ���K�i���Ƭ�%d\n",number10,number8);
		
	system("PAUSE");
	return 0;
}
