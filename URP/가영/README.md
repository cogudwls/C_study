#include <stdio.h>

int main() {
    printf("회원가입을 시작하겠습니당\n");

    char studentID; 
    char name;      
    char phone;     
    char gender;    
    char email;     
    char major;     
    char password;  

    printf("학번(=아이디)를 입력해주세요: ");
    scanf(" %c", &studentID);

    printf("이름을 입력해주세요: ");
    scanf(" %c", &name);

    printf("전화번호를 입력해주세요: ");
    scanf(" %c", &phone);

    printf("성별을 입력해주세요(ex: 남자/여자): ");
    scanf(" %c", &gender);

    printf("이메일을 입력해주세요: ");
    scanf(" %c", &email);

    printf("본인의 학과를 입력해주세요: ");
    scanf(" %c", &major);

    printf("비밀번호를 입력해주세요: ");
    scanf(" %c", &password);

    printf("회원가입이 성공적으로 완료되었습니당\n");

    printf("로그인을 시작하겠습니당\n")

    return 0;
}
