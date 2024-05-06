#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void drawTriangle(char ch) {      /*函數用於繪製直角三角形*/
    int i,j,k;
    for (i=0;i<=ch-'a';i++) {     /*先印空格，再印字符*/
        for(k=ch-'a';k>i;k--) {   /*控制空格的數量*/ 
            printf(" ");
        }
        for(j=0;j<=i;j++) {       /*輸出字符*/ 
            printf("%c",ch-i+j);
        }
        printf("\n");
    }
}

int main(void) {     /*個人風格*/ 
    puts("----------------------------------------------------------------------------------------");
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
    puts("----------------------------------------------------------------------------------------");
    system("pause");
    system("cls");  
    
    int password, i;
    for (i = 3; i > 0; i--) {   /*使用者輸入密碼，最多三次*/ 
        printf("請輸入密碼:");  /*輸入密碼*/ 
        scanf("%d", &password);
        if (password == 2024) {
            printf("密碼正確。\n");
            system("pause");
            system("cls");
            
            char option;
            while (1) {          /*印出選單*/ 
                puts("----------------------------------");
                puts("|                                |");
                puts("|       a.畫出直角三角形         |");
                puts("|                                |");
                puts("|       b.顯示乘法表             |");
                puts("|                                |");                                   
                puts("|       c.結束                   |");
                puts("|                                |");
                puts("----------------------------------");
                
                printf("請輸入一個選項:");
                option=getch();   /*讀取用戶選擇的選項*/ 
                system("cls");
                
                switch(option) {      /*要求用戶輸入字符*/ 
                    case'a':
                    case'A':{
                        char input;
                        while (1) {
                            printf("請輸入一個字元 (a-n): ");   
                            fflush(stdin);
                            scanf("%c",&input);  
                            if (input>='a' && input<='n') {      /*判斷是否在這個範圍內*/ 
                                drawTriangle(input);     /*繪出三角形*/ 
                                getch();
                                system("cls");
                                break;        /*跳出迴圈*/ 
                            } else {
                                printf("請輸入有效的字元 (a-n)!\n");  /*輸入錯誤，要求重新輸入*/ 
                            }
                        }
                        break;    /*跳出迴圈*/ 
                    }
                    case 'b':
                    case 'B': {
                        int n;
                        while (1) {
                            printf("請輸入一個整數 (1-9): ");   /*使用者輸入一個整數*/ 
                            fflush(stdin);
                            scanf("%d", &n);
                            if (n >= 1 && n <= 9) {           /*判斷是否在範圍內*/ 
                                printf("乘法表如下：\n");    /*顯示乘法表*/ 
                                for (int i = 1; i <= n; i++) { 
                                    for (int j = 1; j <= i; j++) {
                                        printf("%d*%d=%-2d ",j,i,j*i);
                                    }
                                    printf("\n");
                                }
                                getch();
                                system("cls");
                                break;
                            } else {
                                printf("請輸入有效的整數 (1-9)!\n");   /*輸入錯誤，重新輸入*/ 
                            }
                        }
                        break;
                    }
                    case 'c':
                    case 'C': {
                        char continueOption;
                        while (1) {
                            printf("Continue? (y/n): ");  /*判斷是否繼續執行*/ 
                            fflush(stdin);
                            scanf("%c",&continueOption);
                            if (continueOption=='y'||continueOption=='Y') { /*判斷使用者輸入並做出相對應的結果*/ 
                                system("cls");
                                break;
                            } else if (continueOption=='n'||continueOption=='N') {
                                return 0;
                            } else {
                                printf("請輸入有效的選項 (y/n)!\n");  /*輸入錯誤，重新輸入*/ 
                            }
                        }
                        break;
                    }
                    default:
                        printf("請輸入有效的選項!\n");
                        break;
                }
            }
        } else if (password != 2024) {   /*判斷是否是2024*/ 
            printf("剩餘%d次機會\n",i-1);
            if (i==1) {            /*輸入最後一次且錯誤時，發出警告音*/ 
                printf("%c",'\a');
                return 0;
            }
        }
    }
    return 0;  /*程式結束*/ 
}
