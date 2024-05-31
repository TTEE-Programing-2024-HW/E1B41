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
        printf("請輸入密碼:");
        scanf("%d", &password);
        if (password == 2024) {
            printf("密碼正確。\n");
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
                printf("請輸入選項：");
                choice = getch();
                printf("%c\n", choice);
                if (choice == 'a') {
                    int n;
                    printf("請輸入學生數目 (5~10): ");
                    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
                        printf("輸入錯誤，請輸入5到10之間的整數: ");
                        while (getchar() != '\n'); // 清除輸入緩衝區
                    }

                    Student students[n];
                    for (int j = 0; j < n; j++) {
                        printf("輸入學生 %d 資料:\n", j + 1);
                        printf("姓名: ");
                        scanf("%s", students[j].name);
                        printf("學號 (6位整數): ");
                        while (scanf("%d", &students[j].student_id) != 1 || students[j].student_id < 100000 || students[j].student_id > 999999) {
                            printf("輸入錯誤，請輸入6位整數的學號: ");
                            while (getchar() != '\n'); // 清除輸入緩衝區
                        }
                        printf("數學成績 (0~100): ");
                        while (scanf("%d", &students[j].math) != 1 || students[j].math < 0 || students[j].math > 100) {
                            printf("輸入錯誤，請輸入0到100之間的成績: ");
                            while (getchar() != '\n'); // 清除輸入緩衝區
                        }
                        printf("物理成績 (0~100): ");
                        while (scanf("%d", &students[j].physics) != 1 || students[j].physics < 0 || students[j].physics > 100) {
                            printf("輸入錯誤，請輸入0到100之間的成績: ");
                            while (getchar() != '\n'); // 清除輸入緩衝區
                        }
                        printf("英文成績 (0~100): ");
                        while (scanf("%d", &students[j].english) != 1 || students[j].english < 0 || students[j].english > 100) {
                            printf("輸入錯誤，請輸入0到100之間的成績: ");
                            while (getchar() != '\n'); // 清除輸入緩衝區
                        }
                    }
                    printf("已成功輸入學生資料。\n");
                } 
                else {
                    printf("無效選項。\n");
                }
            }
            break;
        } else {
            printf("剩餘%d次機會\n", i - 1);
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

