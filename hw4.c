#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int student_id;
    int math;
    int physics;
    int english;
} Student;

int main(void) {
    puts("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    puts("|                                                                                       |");
    puts("|  ++++++++++++++       ---        $$$$$$$$$$$$$                %%%            ***      |");
    puts("|  ++++++++++++++      ----        $            $              %%%%           ****      |");
    puts("|  ++                 -----        $             $            %% %%          *****      |");
    puts("|  ++                ------        $              $          %%  %%         ******      |");
    puts("|  ++               -------        $               $        %%   %%        *******      |");
    puts("|  ++                   ---        $                $      %%    %%            ***      |");
    puts("|  ++                   ---        $               $      %%     %%            ***      |");
    puts("|  ++                   ---        $              $      %%      %%            ***      |");
    puts("|  ++                   ---        $             $      %%       %%            ***      |");
    puts("|  ++                   ---        $            $      %%        %%            ***      |");
    puts("|  ++++++++++++++       ---        $$$$$$$$$$$$$      %%%%%%%%%%%%%%%%%%%%%    ***      |");
    puts("|  ++++++++++++++       ---        $            $     %%%%%%%%%%%%%%%%%%%%%    ***      |");
    puts("|  ++                   ---        $             $               %%            ***      |");
    puts("|  ++                   ---        $              $              %%            ***      |");
    puts("|  ++                   ---        $               $             %%            ***      |");
    puts("|  ++                   ---        $                $            %%            ***      |");
    puts("|  ++                   ---        $               $             %%            ***      |");
    puts("|  ++                   ---        $              $              %%            ***      |");
    puts("|  ++                   ---        $             $               %%            ***      |");
    puts("|  ++++++++++++++  ------------    $            $                %%       ************  |");
    puts("|  ++++++++++++++  ------------    $$$$$$$$$$$$$                 %%       ************  |");
    puts("|                                                                                       |");
    puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    system("pause");
    system("cls");

    int password, i;
    char choice;
    for (i = 3; i > 0; i--) {
        printf("�п�J�K�X:");
        scanf("%d", &password);
        if (password == 2024) {
            printf("�K�X���T�C\n");
            system("pause");
            system("cls");
            
            puts("----------[Grade System]----------");
            puts("| a. Enter student grades        |");
            puts("| b. Display student grades      |");
            puts("| c. Search for student grades   |");
            puts("| d. Grade ranking               |");
            puts("| e. Exit system                 |");
            puts("----------------------------------");

            while (1) {
                printf("�п�J�ﶵ�G");
                choice = getch();
                printf("%c\n", choice);
                if (choice == 'a') {
                    int n;
                    printf("�п�J�ǥͼƥ� (5~10): ");
                    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
                        printf("��J���~�A�п�J5��10���������: ");
                        while (getchar() != '\n'); // �M����J�w�İ�
                    }

                    Student students[n];
                    for (int j = 0; j < n; j++) {
                        printf("��J�ǥ� %d ���:\n", j + 1);
                        printf("�m�W: ");
                        scanf("%s", students[j].name);
                        printf("�Ǹ� (6����): ");
                        while (scanf("%d", &students[j].student_id) != 1 || students[j].student_id < 100000 || students[j].student_id > 999999) {
                            printf("��J���~�A�п�J6���ƪ��Ǹ�: ");
                            while (getchar() != '\n'); // �M����J�w�İ�
                        }
                        printf("�ƾǦ��Z (0~100): ");
                        while (scanf("%d", &students[j].math) != 1 || students[j].math < 0 || students[j].math > 100) {
                            printf("��J���~�A�п�J0��100���������Z: ");
                            while (getchar() != '\n'); // �M����J�w�İ�
                        }
                        printf("���z���Z (0~100): ");
                        while (scanf("%d", &students[j].physics) != 1 || students[j].physics < 0 || students[j].physics > 100) {
                            printf("��J���~�A�п�J0��100���������Z: ");
                            while (getchar() != '\n'); // �M����J�w�İ�
                        }
                        printf("�^�妨�Z (0~100): ");
                        while (scanf("%d", &students[j].english) != 1 || students[j].english < 0 || students[j].english > 100) {
                            printf("��J���~�A�п�J0��100���������Z: ");
                            while (getchar() != '\n'); // �M����J�w�İ�
                        }
                    }
                    printf("�w���\��J�ǥ͸�ơC\n");
                } 
                else {
                    printf("�L�Ŀﶵ�C\n");
                }
            }
            break;
        } else {
            printf("�Ѿl%d�����|\n", i - 1);
            if (i == 1) {
                printf("%c", '\a');
                return 0;
            }
        }
    }

    system("pause");
    system("cls");
    return 0;
}

