#include <stdio.h>

int main(void){
	//������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//�Ǽ��� ������ ���� ����
	/*float f = 46.5;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	//��� const
	/*const int Year = 2000;  
	printf("�¾ �⵵ : %d\n", Year);
	//Year = 2001;*/

	//printf
	//����
	/*int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 30, 79, 30+79);*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��°�� : %d\n", one);
	printf("�ι�°�� : %d\n", two);
	printf("����°�� : %d\n", three);*/

	//����(�� ����), ���ڿ�(�� ���� �̻��� ��������)
	/*char c = 'A';
	printf("%c\n", c);*/
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	//������Ʈ
	//�������� �������� ������ �Լ�(���� �ۼ�)
	//�̸�? ����? ������? Ű? ���˸�?
	char name[20];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", age);

	float weight;
	printf("�����Դ� ���̿���? ");
	scanf_s("%f", weight);

	float height;
	printf("Ű�� ���̿���? ");
	scanf_s("%f", height);

	



	return 0;
}
