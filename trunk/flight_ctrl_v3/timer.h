#ifndef timer_h_inc
#define timer_h_inc

void timer0_init();
void timer1_init();
volatile signed long timer0_elapsed();
volatile signed long timer1_elapsed();

#endif