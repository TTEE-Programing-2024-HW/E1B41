#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>  // 使用 getch() 函數

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 10

typedef struct {
    char name[MAX_NAME_LENGTH];
    int student_id;
    int math;
    int physics;
    int english;
    float average;
} Student;

// 計算平均成績的函數
float calculateAverage(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

// 根據平均成績對學生進行排序的函數
void sortStudentsByAverage(Student students[], int num_students) {
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printMenu() {
    puts("----------[Grade System]----------");
    puts("| a. Enter student grades        |");
    puts("| b. Display student grades      |");
    puts("| c. Search for student grades   |");
    puts("| d. Grade ranking               |");
    puts("| e. Exit system                 |");
    puts("----------------------------------");
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


    // 密碼輸入嘗試的迴圈
    for (i = 3; i > 0; i--) {
        printf("請輸入密碼:");
        char password_str[50];
        fgets(password_str, sizeof(password_str), stdin);
        password = atoi(password_str);
        if (password == 2024) {
            printf("密碼正確。\n");
            system("pause");
            system("cls");
            // 印出選單
            printMenu();
            
            // 選單循環 
            while (1) {
                printf("請輸入選項：");
                choice = getch(); // 獲取字符而不顯示在螢幕上 
                printf("%c\n", choice);
                if (choice == 'a') {  //a輸入學生成績
                    int n;
                    printf("請輸入學生數目 (5~10): ");
                    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
                        printf("輸入錯誤，請輸入5到10之間的整數: ");
                        while (getchar() != '\n'); // 清除輸入緩衝區
                    }

                    for (int j = num_students; j < num_students + n && j < MAX_STUDENTS; j++) {
                        printf("輸入學生 %d 資料:\n", j+1);
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
                        students[j].average = calculateAverage(students[j].math, students[j].physics, students[j].english);
                    }
                    num_students += n;
                    printf("已成功輸入學生資料。\n");
                } else if (choice == 'b') { // 顯示學生成績
                    system("cls");
                    if (num_students == 0) {
                        printf("目前沒有學生資料。\n");
                    } else {
                        printf("學生資料如下:\n");
                        printf("姓名\t學號\t數學\t物理\t英文\t平均成績\n");
                        printf("-------------------------------------------------\n");
                        for (int j = 0; j < num_students; j++) {
                            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[j].name, students[j].student_id, students[j].math, students[j].physics, students[j].english, students[j].average);
                        }
                    }
                } else if (choice == 'c') {
                    system("cls");
                    if (num_students == 0) {
                        printf("目前沒有學生資料。\n");
                    } else {
                        char search_name[MAX_NAME_LENGTH];
                        printf("請輸入要搜尋的姓名: ");
                        scanf("%s", search_name);
                        int found = 0;
                        printf("姓名\t學號\t數學\t物理\t英文\t平均成績\n");
                        printf("-------------------------------------------------\n");
                        for (int j = 0; j < num_students; j++) {
                            if (strcmp(students[j].name, search_name) == 0) {
                                printf("%s\t%d\t%d\t%d\t%d\t%.1f\n", students[j].name, students[j].student_id, students[j].math, students[j].physics, students[j].english, students[j].average);
                                found = 1;
                            }
                        }
                        if (!found) {
                            printf("資料不存在。\n");
                        }
                    }
                    printf("按任意鍵繼續...");
                    getch(); // 等待使用者按下任意鍵
                    system("cls"); // 清除螢幕
                } else if (choice == 'd') {  //輸入d選項 
                    system("cls");
                    if (num_students == 0) {
                        printf("目前沒有學生資料。\n");
                    } else {
                        sortStudentsByAverage(students, num_students);
                        printf("依平均成績排序的學生資料如下:\n");
                        printf("姓名\t學號\t平均成績\n");
                        printf("----------------------------\n");
                        for (int j = 0; j < num_students; j++) {
                            printf("%s\t%d\t%.1f\n", students[j].name, students[j].student_id, students[j].average);
                        }
                    }
                    printf("按任意鍵繼續...");
                    getch(); // 等待使用者按下任意鍵
                    system("cls"); // 清除螢幕
                } else if (choice == 'e') {
                    while (1) {
                        printf("確定離開？ (y/n): ");
                        choice = getch();
                        printf("%c\n", choice);
                        if (choice == 'y') {
                            return 0;  // 退出程式
                        } else if (choice == 'n') {
                            system("cls");
                            printMenu();  // 顯示選單
                            break;
                        } else {
                            printf("無效的選項，請重新輸入。\n");
                        }
                    }
                } else {
                    printf("無效的選項，請重新輸入。\n");
                }
                // 顯示選單
                
            }
            break;
        } else {
            printf("密碼錯誤。剩餘%d次機會\n", i-1);
            if (i == 1) {
                printf("%c",'\a');   // 發出警告音
                return 0;
            }
        }
    }

    return 0;
}

