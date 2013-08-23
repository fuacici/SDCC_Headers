#include <compiler.h>
#include <8051.h>
/*
	Modified by joost, any questions, mail to fuacici@gmail.com
	23th,Aug, 2013.
*/
/* After is STC additional SFR */

/* SFR(  AUXR  , 0x8e); */
/* SFR(  AUXR1 , 0xa2); */
/* SFR(  IPH   , 0xb7); */

SFR (P4,0xc0);
SBIT(P42,0xc0,2);
SBIT(P41,0xc0,1);
SBIT(P40,0xc0,0);


SFR(XICON,0xe8);
SFR(WDT_CONTR,0xe1);

SFR( ISP_DATA  , 0xe2);
SFR( ISP_ADDRH , 0xe3);
SFR( ISP_ADDRL , 0xe4);
SFR( ISP_CMD   , 0xe5);
SFR( ISP_TRIG  , 0xe6);
SFR( ISP_CONTR , 0xe7);

/* Above is STC additional SFR */

/*--------------------------------------------------------------------------
REG51F.H

Header file for 8xC31/51, 80C51Fx, 80C51Rx+
Copyright (c) 1988-1999 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.

Modification according to DataSheet from April 1999
 - SFR's AUXR and AUXR1 added for 80C51Rx+ derivatives
--------------------------------------------------------------------------*/

// /*  BYTE Registers  */
// SFR( P0   , 0x80);
// SFR( P1   , 0x90);
// SFR( P2   , 0xA0);
// SFR( P3   , 0xB0);
// SFR( PSW  , 0xD0);
// SFR( ACC  , 0xE0);
// SFR( B    , 0xF0);
// SFR( SP   , 0x81);
// SFR( DPL  , 0x82);
// SFR( DPH  , 0x83);
// SFR( PCON , 0x87);
// SFR( TCON , 0x88);
// SFR( TMOD , 0x89);
// SFR( TL0  , 0x8A);
// SFR( TL1  , 0x8B);
// SFR( TH0  , 0x8C);
// SFR( TH1  , 0x8D);
// SFR( IE   , 0xA8);
// SFR( IP   , 0xB8);
// SFR( SCON , 0x98);
// SFR( SBUF , 0x99);

// /*  80C51Fx/Rx Extensions  */
// SFR( AUXR   , 0x8E);
// SFR( AUXR1  , 0xA2);
// SFR( SADDR  , 0xA9);
// SFR( IPH    , 0xB7);
// SFR( SADEN  , 0xB9);
// SFR( T2CON  , 0xC8);
// SFR( T2MOD  , 0xC9);
// SFR( RCAP2L , 0xCA);
// SFR( RCAP2H , 0xCB);
// SFR( TL2    , 0xCC);
// SFR( TH2    , 0xCD);

// /* PCA SFR
// SFR( CCON   , 0xD8);
// SFR( CMOD   , 0xD9);
// SFR( CCAPM0 , 0xDA);
// SFR( CCAPM1 , 0xDB);
// SFR( CCAPM2 , 0xDC);
// SFR( CCAPM3 , 0xDD);
// SFR( CCAPM4 , 0xDE);
// SFR( CL     , 0xE9);
// SFR( CCAP0L , 0xEA);
// SFR( CCAP1L , 0xEB);
// SFR( CCAP2L , 0xEC);
// SFR( CCAP3L , 0xED);
// SFR( CCAP4L , 0xEE);
// SFR( CH     , 0xF9);
// SFR( CCAP0H , 0xFA);
// SFR( CCAP1H , 0xFB);
// SFR( CCAP2H , 0xFC);
// SFR( CCAP3H , 0xFD);
// SFR( CCAP4H , 0xFE);
// */

// /*  BIT Registers  */
// /*  PSW   */
// __sbit CY   = PSW^7;
// __sbit AC   = PSW^6;
// __sbit F0   = PSW^5;
// __sbit RS1  = PSW^4;
// __sbit RS0  = PSW^3;
// __sbit OV   = PSW^2;
// __sbit P    = PSW^0;

// /*  TCON  */
// __sbit TF1  = TCON^7;
// __sbit TR1  = TCON^6;
// __sbit TF0  = TCON^5;
// __sbit TR0  = TCON^4;
// __sbit IE1  = TCON^3;
// __sbit IT1  = TCON^2;
// __sbit IE0  = TCON^1;
// __sbit IT0  = TCON^0;

// /*  IE   */
// __sbit EA   = IE^7;
// __sbit EC   = IE^6;
// __sbit ET2  = IE^5;
// __sbit ES   = IE^4;
// __sbit ET1  = IE^3;
// __sbit EX1  = IE^2;
// __sbit ET0  = IE^1;
// __sbit EX0  = IE^0;

// /*  IP   */ 
// /*	__sbit PPC  = IP^6;*/
// __sbit PT2  = IP^5;
// __sbit PS   = IP^4;
// __sbit PT1  = IP^3;
// __sbit PX1  = IP^2;
// __sbit PT0  = IP^1;
// __sbit PX0  = IP^0;

// /*  P3  */
// __sbit RD   = P3^7;
// __sbit WR   = P3^6;
// __sbit T1   = P3^5;
// __sbit T0   = P3^4;
// __sbit INT1 = P3^3;
// __sbit INT0 = P3^2;
// __sbit TXD  = P3^1;
// __sbit RXD  = P3^0;

// /*  SCON  */
// __sbit SM0  = SCON^7; // alternatively "FE"
// __sbit FE   = SCON^7;
// __sbit SM1  = SCON^6;
// __sbit SM2  = SCON^5;
// __sbit REN  = SCON^4;
// __sbit TB8  = SCON^3;
// __sbit RB8  = SCON^2;
// __sbit TI   = SCON^1;
// __sbit RI   = SCON^0;
             
// /*  P1  */
// /* PCA
// __sbit CEX4 = P1^7;
// __sbit CEX3 = P1^6;
// __sbit CEX2 = P1^5;
// __sbit CEX1 = P1^4;
// __sbit CEX0 = P1^3;
// __sbit ECI  = P1^2;
// */

// __sbit T2EX = P1^1;
// __sbit T2   = P1^0;

// /*  T2CON  */
// __sbit TF2   = T2CON^7;
// __sbit EXF2  = T2CON^6;
// __sbit RCLK  = T2CON^5;
// __sbit TCLK  = T2CON^4;
// __sbit EXEN2 = T2CON^3;
// __sbit TR2   = T2CON^2;
// __sbit C_T2  = T2CON^1;
// __sbit CP_RL2= T2CON^0;

// /*  CCON  */
// /*  PCA
// __sbit CF    = CCON^7;
// __sbit CR    = CCON^6;

// __sbit CCF4  = CCON^4;
// __sbit CCF3  = CCON^3;
// __sbit CCF2  = CCON^2;
// __sbit CCF1  = CCON^1;
// __sbit CCF0  = CCON^0;
// */

