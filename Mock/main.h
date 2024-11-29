#pragma once

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct seat {

    int row;
    int column;
    char display;
    bool state;

};

int available = 25;

struct seat all[5][5];

void multiSeat();
void multiSeatRow();
void singleSeat();
void codeinit();
void displayStatus();
void book();
int booked();