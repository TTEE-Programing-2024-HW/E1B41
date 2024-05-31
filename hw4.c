#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 10

typedef struct {
    char name[MAX_NAME_LENGTH];
    int student_id;
    int math;
    int physics;
    int english;
} Student;

float calculateAverage(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

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
    Student students[MAX_STUDENTS];
    int num_students = 0;

    for (i = 3; i > 0; i--) {
        printf("�п�J�K�X:");
        char password_str[50];
        fgets(password_str, sizeof(password_str), stdin);
        password = atoi(password_str);
        if (password == 2024) {
            printf("�K�X���T�C\n");
            system("pause");
            system("cls");
            // �L�X���
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

                    for (int j = num_students; j < num_students + n && j < MAX_STUDENTS; j++) {
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
                    num_students += n;
                    printf("�w���\��J�ǥ͸�ơC\n");
                } else if (choice == 'b') {
                    system("cls");
                    if (num_students == 0) {
                        printf("�ثe�S���ǥ͸�ơC\n");
                    } else {
                        printf("�ǥ͸�Ʀp�U:\n");
                        printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t�������Z\n");
                                                printf("-------------------------------------------------\n");
                        for (int j = 0; j < num_students; j++) {
                            float avg = calculateAverage(students[j].math, students[j].physics, students[j].english);
                            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[j].name, students[j].student_id, students[j].math, students[j].physics, students[j].english, avg);
                        }
                    }
                } else if (choice == 'c') {
                    system("cls");
                    if (num_students == 0) {
                        printf("�ثe�S���ǥ͸�ơC\n");
                    } else {
                        char search_name[MAX_NAME_LENGTH];
                        printf("�п�J�n�j�M���m�W: ");
                        scanf("%s", search_name);
                        int found = 0;
                        printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t�������Z\n");
                        printf("-------------------------------------------------\n");
                        for (int j = 0; j < num_students; j++) {
                            if (strcmp(students[j].name, search_name) == 0) {
                                float avg = calculateAverage(students[j].math, students[j].physics, students[j].english);
                                printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[j].name, students[j].student_id, students[j].math, students[j].physics, students[j].english, avg);
                                found = 1;
                            }
                        }
                        if (!found) {
                            printf("��Ƥ��s�b�C\n");
                        }
                    }
                    getch(); // ���ݨϥΪ̫��U���N��
                    system("cls"); // �M���ù�
                } else if (choice == 'e') {
                    return 0;  // �h�X�{��
                }
            }
            break;
        } else {
            printf("�Ѿl%d�����|\n", i-1);
            if (i == 1) {
                printf("%c",'\a');   //�o�Xĵ�i�� 
                return 0;
            }
        }
    }

    return 0;
}


