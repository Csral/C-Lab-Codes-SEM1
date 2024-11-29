#include "main.h"
#include "utils.h"

int main(void) {

    codeinit();

    while(1) {

        displayStatus();

        int ans = 0;

        printf("\nDo you want a multi seat booking?[1 -> Yes]> ");
        scanf("%d",&ans);

        if (ans == 1) {
            
            printf("\nDo you to book in the same row?[1 -> Yes]> ");
            scanf("%d",&ans);

            if (ans == 1) multiSeatRow();
            else multiSeat();

        }
        else singleSeat();

    }

    return 0;

};

void displayStatus(void) {

    printf("\n\t1\t2\t3\t4\t5");

    for (int i = 0; i < 5; i++) {
        
        printf("\n%d\t",i+1);

        for (int j = 0 ; j < 5; j++) {

            printf("%c\t",all[i][j].display);

        };

    };

};

int booked(int row, int column) {

    return (int) all[row][column].state;

};

void book(int row, int column) {

    all[row][column].state = true;
    all[row][column].display = 'B';

    printf("\nBooked seat in row %d, column %d. Have a good time!", row+1,column+1);

    available -= 1;

};

void codeinit() {

    printf("init");

    for (int i = 0; i < 5; i++) for (int j = 0 ; j < 5; j++) {

        all[i][j].row = i;
        all[i][j].column = j;

        all[i][j].display = 'N';
        all[i][j].state = false;

    };

    int NSB = randomNum(0,25,23871,19327);
    available -= NSB;
    //printf("NSB: %d", NSB);

    for (int i = 0 ; i < NSB ; i++ ) {
        
        int randomRow = randomNum(0,5,2347-i,58323+i+NSB);
        int randomColumn = randomNum(0,5,123874+i+NSB,236982-i);

        //printf("\nRr: %d\nRc:%d", randomRow,randomColumn);

        all[randomRow][randomColumn].state = true;
        all[randomRow][randomColumn].display = 'B';

    };

};

void singleSeat() {

    while (1) {

        int r=0,c = 0;

        printf("\nEnter the row you wish to book in> "); scanf("%d",&r);
        printf("\nEnter the column you wish to book in> "); scanf("%d",&c);

        if (r < 1 || r>5) {
                printf("Invalid row value");
                continue;
        }
        else if (c < 0 || c > 5) {
                printf("Invalid column value");
                continue;
        };

        if (booked(r-1,c-1)) printf("\nThe seat is already booked! Try other seat");
        else {

            book(r-1,c-1);
            break;

        };

    };

}

void multiSeat() {

    int n = 1;

    printf("\nEnter number of seats you wish to book> "); scanf("%d",&n);

    if (n > available) {
        printf("\nEnough seats are not available.\n");
        n = 0;
    };

    for (int i = 0; i < n; i++) {

        while (1) {

            int r=0,c = 0;

            printf("\nEnter the row you wish to book in> "); scanf("%d",&r);
            printf("\nEnter the column you wish to book in> "); scanf("%d",&c);

            if (r < 1 || r>5) {
                printf("Invalid row value");
                continue;
            }
            else if (c < 0 || c > 5) {
                printf("Invalid column value");
                continue;
            };

            if (booked(r-1,c-1)) printf("\nThe seat is already booked! Try other seat");
            else {

                book(r-1,c-1);
                break;

            };

        };

    };

}

int checkSeats(int row,int count) {

    int track = 0;

    for (int i = 0; i < 5; i++) if (all[row][i].state) count++;

    return (5 - track >= count) ? 1 : 0;

}

void multiSeatRow() {

    int n = 1;
    int r=0;

    printf("\nEnter the row you wish to book in> "); scanf("%d",&r);

    printf("\nEnter number of seats you wish to book> "); scanf("%d",&n);

    if (n > available) {
        printf("\nEnough seats are not available.\n");
        n = 0;
    };
    
    if (!checkSeats(r,n)) {
        printf("\nEnough seats are not available in the row.\n");
        n = 0;
    };

    for (int i = 0; i < n; i++) {

        while (1) {

            int c = 0;

            printf("\nEnter the column you wish to book in> "); scanf("%d",&c);

            if (r < 1 || r>5) {
                printf("Invalid row value");
                continue;
            }
            else if (c < 0 || c > 5) {
                printf("Invalid column value");
                continue;
            };

            if (booked(r-1,c-1)) printf("\nThe seat is already booked! Try other seat");
            else {

                book(r-1,c-1);
                break;

            };

        };

    };

}