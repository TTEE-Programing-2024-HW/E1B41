#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
int main(void){   /*�ӤH����*/ 
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
    
    /*��J�K�X*/ 
    int password,i;
    for (i=3;i>0;i--){ /* �ϥΪ̿�J�K�X�A�̦h�T�� */
        printf("�п�J�K�X: ");  /* ��J�K�X */ 
        scanf("%d", &password);
        
        if (password==2024){
            printf("�K�X���T�C\n");
            system("pause");
            system("cls");
            
			char option;
			while(1){
			puts("!!!�w��!!!");
			puts("--------------------------");
			puts("|  a.Available seats     |");
			puts("|  b. Arrange for you    |");
			puts("|  c. Choose by yourself |");
			puts("|  d. Exit               |");
			puts("--------------------------");
			
			printf("�п�J�@�ӿﶵ:");
                option=getch();   /*Ū���Τ��ܪ��ﶵ*/ 
                system("cls");
			}
        } else{
            printf("�Ѿl%d�����|\n", i - 1);
            
            if(i-1==0){  /* ��J�̫�@���B���~�ɡA�o�Xĵ�i�� */ 
                printf("%c",'\a');
            }
        }
    }
    printf("�s��T����J���~�A�{�������C\n");
    return 0;
}


