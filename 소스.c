#include <stdio.h>

int main()
{
    printf("ȸ�������� �����ϰڽ��ϴ�\n");

    char studentID[10];
    char name[50];
    char phone[15];
    char gender[6];
    char email[30];
    char major[30];
    char password[20];

    printf("�й�(=���̵�)�� �Է����ּ���: ");
    scanf("%s", studentID);

    printf("�̸��� �Է����ּ���: ");
    scanf("%s", name);

    printf("��ȭ��ȣ�� �Է����ּ���: ");
    scanf("%s", phone);

    printf("������ �Է����ּ���(ex: ����/����): ");
    scanf("%s", gender);

    printf("�̸����� �Է����ּ���: ");
    scanf("%s", email);

    printf("������ �а��� �Է����ּ���: ");
    scanf("%s", major);

    printf("��й�ȣ�� �Է����ּ���: ");
    scanf("%s", password);

    printf("ȸ�������� ���������� �Ϸ�Ǿ����ϴ�\n");

    printf("�α����� �����ϰڽ��ϴ�\n");

    char correct_id[] = "USER1234";
    char correct_password[] = "PASSWORD1234";

    char input_id[50];
    char input_password[50];

    printf("���̵� �Է��ϼ���: ");
    scanf("%s", input_id);
    printf("��ȣ�� �Է��ϼ���: ");
    scanf("%s", input_password);

    int id_match = (strcmp(input_id, correct_id) == 0);
    int password_match = (strcmp(input_password, correct_password) == 0);

    if (id_match && password_match) {
        printf("�α��� ����!\n");
    }
    else {
        printf("�α��� ���Ф�.�� ���̵� �Ǵ� ��ȣ�� �ùٸ��� �ʽ��ϴ�.\n");
    }

    return 0;
}