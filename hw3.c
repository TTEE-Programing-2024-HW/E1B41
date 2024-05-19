#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define ROWS 9
#define COLS 9

//生成已預訂的座位
void generate_seats(char seats[ROWS][COLS]) {
    int reserved = 0;
    while (reserved < 10) {
        int row = rand() % ROWS;   // 隨機選擇座位位置 
        int col = rand() % COLS;   
        if (seats[row][col] == '-') { // 如果座位位置還未被預訂，則將其標記為已預訂 
            seats[row][col] = '*';
            reserved++;
        }
    }
}
// 顯示座位表
void display_seats(char seats[ROWS][COLS]) {
    printf("123456789\n");
    for (int i=ROWS;i>0;i--){
        printf("%d",i);
        for (int j=0;j<COLS;j++) {
            printf("%c",seats[i-1][j]);
        }
        printf("\n");
    }
}

void clear_screen() { // 清除螢幕 
    system("cls");
}

int main(void) {
    //生成個人風格 
    puts("-----------------------------------------------------------------");
    puts("|      EEEEEEEEEEEEEEEE          111         BBBBBBBBBBBBB       |");
    puts("|      EE                       1111         BB           B      |");
    puts("|      EE                      11111         BB            B     |");
    puts("|      EE                     111111         BB             B    |");
    puts("|      EE                        111         BB              B   |");
    puts("|      EE                        111         BB               B  |");
    puts("|      EE                        111         BB              B   |");
    puts("|      EE                        111         BB             B    |");
    puts("|      EE                        111         BB            B     |");
    puts("|      EEEEEEEEEEEEEEEE          111         BBBBBBBBBBBBBB      |");
    puts("|      EE                        111         BB            B     |");
    puts("|      EE                        111         BB             B    |");
    puts("|      EE                        111         BB              B   |");
    puts("|      EE                        111         BB               B  |");
    puts("|      EE                        111         BB                B |");
    puts("|      EE                        111         BB               B  |");
    puts("|      EE                        111         BB              B   |");
    puts("|      EE                        111         BB             B    |");
    puts("|      EEEEEEEEEEEEEEEE      11111111111     BBBBBBBBBBBBBBB     |");
    puts("|                                                                |");
    puts("|            444                111                              |");
    puts("|           4444               1111                              |");
    puts("|          44 44              11111                              |");
    puts("|         44  44             111111                              |");
    puts("|        44   44                111                              |");
    puts("|       44    44                111                              |");
    puts("|      44444444444444           111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|             44                111                              |");
    puts("|          44444444          111111111                           |");
    puts("------------------------------------------------------------------");
    system("pause");
    system("cls");

    //輸入密碼 
    int password, i;
    for (i = 3; i > 0; i--) { //使用者輸入密碼，最多三次
        printf("請輸入密碼: ");  //輸入密碼
        scanf("%d", &password);
        
        if (password == 2024) {
            printf("密碼正確。\n");
            system("pause");
            system("cls");

            //初始化座位表 
            char seats[ROWS][COLS];
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                    seats[i][j] = '-';
                }
            }
            
            
            // 設置隨機數，且生成座位表 
            srand(time(0));
            generate_seats(seats);

            char option;   
            while (1) {
                puts("!!!歡迎!!!");
                puts("--------------------------");
                puts("|  a. Available seats    |");
                puts("|  b. Arrange for you    |");
                puts("|  c. Choose by yourself |");
                puts("|  d. Exit               |");
                puts("--------------------------");

                printf("請輸入一個選項: ");
                option = getch();   //讀取用戶選擇的選項 
                clear_screen();

                if (option == 'a') {
                    display_seats(seats);
                    getch();
                    clear_screen();
                } 
            }
            break;
        } else {
            printf("剩餘%d次機會\n", i - 1);
            
            if (i-1==0) {  //輸入最後一次且錯誤時，發出警告音
                printf("%c",'\a');
                printf("連續三次輸入錯誤，程式結束。\n");
                return 0;
            }
        }
    }
    return 0;
}

