#include <stdio.h>

int main() {


	char id[15], name[50], num[15], gen[10], ema[50], dep[50], pass[50];

	char id2[15], pass2[50];

	int a, b;


	printf("��ȣ���б��� ������ ���ϵ帳�ϴ�!!\n");
	printf("ȸ�������� �����ϰڽ��ϴ�\n\n");

	//ȸ������

	printf("�й�(=���̵�)�� �Է��Ͻÿ�\n");
	scanf_s("%14s", id, 15);

	printf("�̸��� �Է��Ͻÿ�\n");
	scanf_s("%49s", name, 50);

	printf("��ȭ��ȣ�� �Է��Ͻÿ� (- ����)\n");
	scanf_s("%14s", num, 15);

	printf("������ �Է��Ͻÿ�(��:ma ��:wo) \n");
	scanf_s("%9s", gen, 10);

	if (strcmp(gen, "ma") != 0 && strcmp(gen, "wo") != 0) {
		printf("������ ���� ����Ǿ����ϴ�");
		return 0;
	}
	printf("�̸����� �Է��Ͻÿ� \n");
	scanf_s("%49s", ema, 50);

	printf("�а��� �Է��Ͻÿ� \n");
	scanf_s("%49s", dep, 50);

	printf("��й�ȣ�� �Է��Ͻÿ� \n");
	scanf_s("%49s", pass, 50);

	printf("\n\n");


	char* sign[] = { id, name, num, gen, ema, dep, pass };


	//�α���

	while (1) {

		printf("�α����� �����ϰڽ��ϴ�\n\n");
		printf("���̵�(=�й�)�� �Է��Ͻÿ�\n");
		scanf_s("%14s", id2, 15);
		printf("��й�ȣ�� �Է��Ͻÿ�\n");
		scanf_s("%49s", pass2, 50);


		if (strcmp(id2, id) != 0 || strcmp(pass2, pass) != 0) {
			printf("���̵� Ȥ�� ��й�ȣ�� �߸� �ԷµǾ����ϴ�.\n");
		}
		else {
			printf("�α��� �Ǿ����ϴ�\n");
			break;
		}
     
	}
	
	//���θ޴�

	while (1) {

		printf("\n������ �Ͻðڽ��ϱ�?\n");
		printf("�α���(0�� �Է�), �α׾ƿ�(1�� �Է�), ���������� ��ȸ(2�� �Է�), ����(-1�� �Է�)\n");
		scanf_s("%d", &a);

		if (a == -1) {

			printf("���α׷��� ����Ǿ����ϴ�.");

			return 0;

		}

		else if (a == 0) {

			printf("���̵�(=�й�)�� �Է��Ͻÿ�\n");
			scanf_s("%14s", id2, 15);
			printf("��й�ȣ�� �Է��Ͻÿ�\n");
			scanf_s("%49s", pass2, 50);

		}

		else if (a == 1) {
			printf("�α׾ƿ� �Ǿ����ϴ�\n");
			
		}

		else if (a == 2) {

			printf("\n���������� ��ȸ!\n");
			printf("�й�: %s\n", id);
			printf("�̸�: %s\n", name);
			printf("��ȭ��ȣ: %s\n", num);
			printf("����: %s\n", gen);
			printf("�̸���: %s\n", ema);
			printf("�а�: %s\n", dep);
			printf("��й�ȣ�� ���Ȼ� ��� ~~!! \n");

		}

	}

	return 0;

	}

