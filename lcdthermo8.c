           #include"built_in.h"
          int y,i=0;
          float n2,n3,n1,n4;
          char a[13];

void name()
{
   char a[]="Naser";
   char b[]="Abu";
   char v[]="Arun";
   char j[]="Geejo";
     Lcd8_Init(&PORTC, &PORTB);
    lcd8_out(1,1,a);
    lcd8_out(1,9,b);
    lcd8_out(2,1,v);
    lcd8_out(2,9,j);
   }

void main()

{   void name();
  ADCON1 = 0x82;
    INTCON = 0;
   ADCON0=0X49;
     TRISA = 0xFF;
   TRISB = 0;
  TRISC = 0;
  Lcd8_Init(&PORTC, &PORTB);
     lcd8_cmd(lcd_clear);
    Lcd8_Cmd(Lcd_CURSOR_OFF);
     name();
    delay_ms(1000);
    lcd8_cmd(lcd_clear);
    Lcd8_Out_Cp("      C      F");
   Lcd8_Cmd(LCD_SECOND_ROW);
   Lcd8_Out_Cp("      K      R");

   while(1)
   {

      y = adc_read(1);
while (i!=y)
     { n4 = y*5;
      n4=n4/1023;
      n4=n4*100;
      intToStr(n4,a);
      lcd8_out(1,1,a);
        n2=(n4*9/5 + 32);
        n3=(n2+460.67);
        inttostr(n3,a);
       lcd8_out(2,8,a);
       inttostr(n2,a);
       lcd8_out(1,8,a);
        n1=n4+273.16;
       inttostr(n1,a);
       lcd8_out(2,1,a);
     i=y;
 }
        delay_ms(1);
     }
}
