#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tictactoe.h"

C mark(I i) {
    switch(i) {
        case -1:{
                return 'X';
                break;
                }
        case 0:{
                return '_';
                break;
                }
        case 1:{
                return 'O';
                break;
                }
        };
    return 0;
    }
int main()
{
    intro();
    mode();
    //names();
   // turns();
    return 0;
}
V intro(){

	system("clear");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t    _______  _  _______      _______         \n");
    printf("\t\t   |__   __|(_)|__   __|    |__   __|        \n");
    printf("\t\t      | |   _  ___| | __ _  ___| | ___   ___ \n");
    printf("\t\t      | |  | |/ __| |/ _` |/ __| |/ _ \\ / _ \\ \n");
    printf("\t\t      | |  | | (__| | (_| | (__| | (_) |  __/ \n");
    printf("\t\t      |_|  |_|\\___|_|\\__,_|\\___|_|\\___/ \\___| \n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t - Abhishek Balam ");
    getchar();
    system("clear");
	printf("\t\t\tWelcome to Abhishek's C TicTacToe.\n");
	getchar();
	}
V mode(){
    printf("\nYou can play this in two modes.\n\t1)Against the computer.(Its impossible to beat it,but you can try.)\n\t\t\tor\n\t2)Against another person.\n\nEnter your choice.[1 or 2]\n");
    scanf("%c",&v);
    switch(v){
        case '1':{
                system("clear");
                names();
                break;
                }
        case '2':{
                system("clear");
                names();
                turns();
                break;
                }
        default:{
            system("clear");
            mode();
                }
        };
    }
V single(){
    unsigned turn;
    printf("\nYou wanna play 1st or 2nd?\n");
    scanf("%d",&player);
    printf("\n\t\t");
    for(turn = 0; turn < 9 && won(grid) == 0; ++turn) {
        if((turn+player) % 2 == 0){
            computer(grid);
            printgrid(grid);
            }
        else {
            system("clear");
            printgrid(grid);
            player1(grid);
        }
    }
    system("clear");
    switch(won(grid)) {
        case 0:
            printgrid(grid);
            getchar();
            draw();
            getchar();
            thanks();
            getchar();
            exit(0);
            break;
        case 1:
            printgrid(grid);
            getchar();
            lose();
            getchar();
            thanks();
            getchar();
            exit(0);
            break;
        case -1:
            printgrid(grid);
            getchar();
            system("clear");
            congo();
            getchar();
            thanks();
            getchar();
            exit(0);
            break;
    };
}

V multi(){
        names();
        turns();
        }
V names(){
    if(v=='1'){
            printf("Computer is O and You are X. \n ");
            goto p1;
            }
    printf("Player 1 is X and Player 2 is O.");
    getchar();
    p1:
	printf("\n\nPlayer 1 enter your name:\n");
	scanf("%s",P1.name);
	if (v=='1')
    {
        single();
    }
	printf("\nPlayer 2 enter your name:\n");
	scanf("%s",P2.name);
	}

V printgrid(I a[9]){
    I i,j,k=0;
    printf("\t\t _______________________________________________\n");
    printf("\t\t|               |               |               |\n");
    printf("\t\t");
    for(i=0;i<=2;i++){
            printf("|               |               |               |\n\t\t");
        for(j=0;j<=2;j++){
                if(j!=2){
                    printf("|\t%c\t",mark(a[j+i+k]));
                    }
                else{
                    printf("|\t%c\t|",mark(a[j+i+k]));
                }
         }
    k+=2;
    printf("\n\t\t|               |               |               |\n");
    printf("\t\t|_______________|_______________|_______________|\n");

    if(i!=2){printf("\t\t|               |               |               |\n\t\t");}
    }
    printf("\n");
    }
V choice(I a[9],I m , C n[]){
    char ch;
    int b;
    char c[20];
    again:
    system("clear");
    printgrid(a);
    printf("\t\t%s ",n);
    printf("enter the box [1-9] u wanna place ur marker in:\n\n\t\t");
    scanf("%c",&ch);
    switch(ch){
    case '1': {
            if(a[0]==0){
                a[0]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
            break;
            }
    case '2': {
             if(a[1]==0){
                a[1]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '3': {
             if(a[2]==0){
                a[2]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '4':  {
             if(a[3]==0){
                a[3]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '5':  {
             if(a[4]==0){
                a[4]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '6':  {
             if(a[5]==0){
                a[5]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '7':  {
             if(a[6]==0){
                a[6]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '8':  {
             if(a[7]==0){
                a[7]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    case '9':  {
             if(a[8]==0){
                a[8]=m;
                system("clear");
                }
            else{
                system("clear");
                printgrid(a);
                printf("\t\tCan't do. There's already a marker here!\n\t\t");
                getchar();
                goto again;
                }
             break;
            }
    default:{
            system("clear");
            printgrid(a);
            //printf("\t\tOnly numbers between 1-9 are allowed.Nothing else!\n\t\t");
            getchar();
            b=m;
            strcpy(c,n);
            choice(grid,b,c);
            }
    };
    i++;

    }
V turns(){
    P1.sym = -1;
    choice(grid,P1.sym,P1.name);
    //getchar();
    check();
    system("clear");
    P2.sym = 1;
    choice(grid,P2.sym,P2.name);
    //getchar();
    check();
    return turns();
    }
I won(I grid[9]){
    unsigned wins[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for(i = 0; i < 8; ++i) {
            if(grid[wins[i][0]] != 0 &&
            grid[wins[i][0]] == grid[wins[i][1]] &&
            grid[wins[i][0]] == grid[wins[i][2]])
                {
                return grid[wins[i][2]];
                }
            }
    return 0;
    }
V check(){
    if(won(grid)==0){
        }
    else{
         if(won(grid)== -1)
                    {
                    system("clear");
                    printf("\n\t\t\t\t    %s\n",P1.name);
                    congo();
                    getchar();
                    thanks();
                    getchar();
                    exit(0);
                    }
                else{
                    system("clear");
                    printf("\n\t\t\t\t    %s\n",P2.name);
                    congo();
                    getchar();
                    thanks();
                    getchar();
                    exit(0);
                    }
        }
    if(grid[0]!=0&&
        grid[1]!=0&&
        grid[2]!=0&&
        grid[3]!=0&&
        grid[4]!=0&&
        grid[5]!=0&&
        grid[6]!=0&&
        grid[7]!=0&&
        grid[8]!=0){
            draw();
            getchar();
            thanks();
            getchar();
            exit(0);
            }
    }
I think(I grid[9], I player) {
    int winner = won(grid);
    if(winner != 0) {
            return winner*player;
            }
    int move = -1;
    int score = -2;
    int i=0;
    for(i = 0; i <= 8 ; i++) {
        if(grid[i] == 0) {
            grid[i] = player;
            int thisScore = -think(grid, player*-1);
            if(thisScore > score) {
                score = thisScore;
                move = i;
            } //Pick the one that's worst for the opponent
            grid[i] = 0; //Reset board after try
        }
    }
    if(move == -1){ return 0;}
    return score;
}

V computer(I grid[9]) {
    int move = -1;
    int score = -2;
    int i;
    for(i = 0; i <= 8; i++) {

        if(grid[i] == 0)
            {
          grid[i] = 1;
            int tempScore = -think(grid, -1);
            grid[i] = 0;
            if(tempScore > score) {
                score = tempScore;
                move = i;
            }
        }
    }
    grid[move] = 1;
    printf("\t\t");
}

V player1(I grid[9]) {
    C move = '0';
    do {
        system("clear");
        printgrid(grid);
        printf("\n\t\t%s ,Enter your move [1-9]:\n\t\t",P1.name);
        scanf("%c", &move);
        printf("\n\t\t");
    } while ( ((move > '9') || (move < '1') ) && (grid[(int)(move)] == 0));
    grid[move-1] = -1;
}

V congo(){
    printf("\t\t               __     __         \n");
    printf("\t\t               \\ \\   / /         \n");
    printf("\t\t                \\ \\_/ /__  _   _ \n");
    printf("\t\t                 \\   / _ \\| | | |\n");
    printf("\t\t                  | | (_) | |_| |\n");
    printf("\t\t                  |_|\\___/ \\__,_|\n\n");
    printf("\t   .----------------.  .----------------.  .-----------------.\n");
    printf("\t  | .--------------. || .--------------. || .--------------. |\n");
    printf("\t  | | _____  _____ | || |     _____    | || | ____  _____  | |\n");
    printf("\t  | ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | |\n");
    printf("\t  | |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | |\n");
    printf("\t  | |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | |\n");
    printf("\t  | |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | |\n");
    printf("\t  | |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | |\n");
    printf("\t  | |              | || |              | || |              | |\n");
    printf("\t  | '--------------' || '--------------' || '--------------' |\n");
    printf("\t   '----------------'  '----------------'  '----------------' \n\n\n\n");
        }
V thanks(){
    system("clear");
    printf("\n\n\n\n\n\n\n\n\n\t\t    _____ _              _    __   __        \n");
    printf("\t\t   |_   _| |_  __ _ _ _ | |__ \\ \\ / /__ _  _ \n");
    printf("\t\t     | | | ' \\/ _` | ' \\| / /  \\ V \/ _ \\ || |\n");
    printf("\t\t     |_| |_||_\\__,_|_||_|_\\_\\   |_|\\___/\\_,_|\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\tFeedback is welcome.\n\n");
    }

V lose(){
    system("clear");
    printf("\n\n\n\t\t  ____                             _              _     \n");
    printf("\t\t / __ \\                           | |            ( )    \n");
    printf("\t\t| /  \\/ ___  _ __ ___  _ __  _   _| |_ ___ _ __  |/ ___ \n");
    printf("\t\t| |    / _ \\| '_ ` _ \\| '_ \\| | | | __/ _ \\ '__|   / __|\n");
    printf("\t\t| \\__/\\ (_) | | | | | | |_) | |_| | ||  __/ |      \\__ \\ \n");
    printf("\t\t \\____/\\___/|_| |_| |_| .__/ \\__,_|\\__\\___|_|      |___/ \n");
    printf("\t\t                      | |\n");
    printf("\t\t                      |_|\n");
    printf("\t     .----------------.  .----------------.  .-----------------.\n");
    printf("\t    | .--------------. || .--------------. || .--------------. |\n");
    printf("\t    | | _____  _____ | || |     _____    | || | ____  _____  | |\n");
    printf("\t    | ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | |\n");
    printf("\t    | |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | |\n");
    printf("\t    | |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | |\n");
    printf("\t    | |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | |\n");
    printf("\t    | |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | |\n");
    printf("\t    | |              | || |              | || |              | |\n");
    printf("\t    | '--------------' || '--------------' || '--------------' |\n");
    printf("\t     '----------------'  '----------------'  '----------------' \n\n");
    printf("\t\t\t\t\t\t\t\tHaHa! I told u\n");
    }
V draw(){
    system("clear");
    printf("\n\n\n\n\n\n\n\n\t\t\t _____                    \n");
    printf("\t\t\t|  _  \\                   \n");
    printf("\t\t\t| | | |_ __ __ ___      __\n");
    printf("\t\t\t| | | | '__/ _` \\ \\ /\\ / /\n");
    printf("\t\t\t| |/ /| | | (_| |\\ V  V / \n");
    printf("\t\t\t|___/ |_|  \\__,_| \\_/\\_/  ...BORING!\n\n\n\n\n\n\n\n\n\n\n");
    }
