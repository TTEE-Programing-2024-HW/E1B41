#include <stdio.h>
#include <stdlib.h>

int main(void) {     /*�ӤH����*/ 
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
    for (i = 3; i > 0; i--) {   /*�ϥΪ̿�J�K�X�A�̦h�T��*/ 
        printf("�п�J�K�X:");  /*��J�K�X*/ 
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
            
            
        } else {   /*�P�_�O�_�O2024*/ 
            printf("�Ѿl%d�����|\n", i-1);
            if (i == 1) {   /*��J�̫�@���B���~�ɡA�o�Xĵ�i��*/ 
                printf("%c", '\a');
                return 0;
            }
        }
    }
}

		
    
    