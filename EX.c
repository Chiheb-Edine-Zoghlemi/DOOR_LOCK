#include<stdio.h>

int main(void)
{
    printf("\n           ***** -->  DOOR LOCKING  <-- ******\n");
    printf (R"EOF(  
                     ______________
                    |  ___________  |
                    | |  _ _ _ _  | |
                    | | | | | | | | |
                    | | |-+-+-+-| | |
                    | | |-+-+=+%| | |
                    | | |_|_|_|_| | |
                    | |    ___    | |
                    | |   [___] ()| |
                    | |         ||| |
                    | |         ()| |
                    | |           | |
                    | |           | |
                    | |           | |
                    |_|___________|_|
    )EOF");
   
int error = 0 ; 
int state = 1 ;
char c ; 
int door_opened=0;
printf("\n TYPE THE PASSWORD CHARACTER BY CHARACTER \n");
while (1) {
    if (door_opened) {
        break;
    }
    if(error == 3 ) {
       
        printf (R"EOF(  
                     ______________
                    |  ___________  |
                    | |  _ _ _ _  | |
                    | | | | | | | | |
                    | | |-+-+-+-| | |
                    | | |-+-+=+%| | |
                    | | |_|_|_|_| | |
                    | |    ___    | |
                    | |   [___] ()| |
                    | |         ||| |
                    | |         ()| |
                    | |           | |
                    | |           | |
                    | |           | |
                    |_|___________|_|
        )EOF");
        printf("\n                         BLOCKED \n ");
        break ; 
    } 
    else {
    printf("\n TYPE A CHARACTER \n");
    scanf(" %c",&c);
    switch (state)
    {
    case 1:
        if (c == 'A') {
            state++;
        }else 
        { 
            error++;
        }
        break;
    case 2:
        if (c == 'B') {
            state++;
        }else 
        { 
            state=1;
            error++;
        }
        break;
    case 3:
        if (c == 'A') {
                printf (R"EOF(  
                     ______________
                    |\ ___________ /|
                    | |  /|,| |   | |
                    | | |,x,| |   | |
                    | | |,x,' |   | |
                    | | |,x   ,   | |
                    | | |/    |%==| |
                    | |    /] ,   | |
                    | |   [/ ()   | |
                    | |       |   | |
                    | |       |   | |
                    | |       |   | |
                    | |      ,'   | |
                    | |   ,'      | |
                    |_|,'_________|_| 
                )EOF");
                printf("\n                      WELCOME HOME\n");
                door_opened=1;
                break;
            
        }else 
        { 
            state=1;
            error++;
        }
        break;
    }
    }
}
return 0;

}