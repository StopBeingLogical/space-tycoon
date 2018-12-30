#include "constants.h"

void intro(void) {
	char mesg1[]="Space Tycoon";
	char mesg2[]="by Stop Being Logical Software"; 
	char mesg3[]="Press Any Key To Continue";
	int row,col;
	initscr();
	getmaxyx(stdscr,row,col);
	mvprintw(row/2-1,(col-strlen(mesg1))/2,"%s",mesg1);                                            
	mvprintw(row/2+1,(col-strlen(mesg2))/2,"%s",mesg2);                                            
	mvprintw(row/2+5,(col-strlen(mesg3))/2,"%s",mesg3);                                            
	refresh();                                                                               
	getch();
	endwin();	
	}
