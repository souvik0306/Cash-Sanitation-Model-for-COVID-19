int c=0;
int k=0;
int t=0;
int t1=0;
int k1=0;
unsigned const BUTTON = 0;
unsigned const BUTTON1 = 1;
int in1=5;


int OutPut = 13;
unsigned int frequency = 0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 6, 7, 8, 9, 10);
int blue1;
int red1;
int green1;

int a = 0, b = 0, c1 = 0, d = 0, e = 0, f = 0, g = 0;
int total = 0;
void setup()
{

  pinMode(BUTTON, INPUT);
  pinMode(BUTTON1, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("  Initializing...  ");
  lcd.setCursor(0, 1);
  lcd.print(" Device Active  ");
  delay(2000);

  lcd.clear();

  pinMode(2, OUTPUT);//S0
  pinMode(3, OUTPUT);//S1
  pinMode(11, OUTPUT);//S2
  pinMode(12, OUTPUT);//S3
  pinMode(13, INPUT);//OUT

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
}

void loop()
{
  int sensor = digitalRead(A0);
  int red1 = red();
  int blue1 = blue();
  int green1 = green();
  
  if (red1>=9 && red1<=12 && blue1 >=14 && blue1 <=16 && green1 >=14 && green1 <=16 && a == 0 && sensor == LOW )
  {
    a = 1;
  }
  if (sensor == LOW && a == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    a = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("10 Rupees!!!");
    total=total+10;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 11 && red1 <= 13 && blue1 >= 8 && blue1 <= 10 && green1 >= 12 && green1 <=14 && b == 0 && sensor == LOW)
  {
    b = 1;
  }
  if (sensor == LOW && b == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    b = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("100 Rupees!!!");
    total=total+100;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 10 && red1 <= 13 && blue1 >= 18 && blue1 <= 20 && green1 >= 12 && green1 <=15 && c1 == 0 && sensor == LOW)
  {
    c1 = 1;
  }
  if (sensor == LOW && c1 == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    c1 = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("20 Rupees!!!");
    total=total+20;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 15 && red1 <= 19 && blue1 >= 13 && blue1 <= 17 && green1 >= 13 && green1 <=18 && d == 0 && sensor == LOW)
  {
    d = 1;
  }
  if (sensor == LOW && d == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    d = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("50 Rupees!!!");
    total=total+50;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 13 && red1 <= 16 && blue1 >= 17 && blue1 <= 20 && green1 >= 17 && green1 <=19 && e == 0 && sensor == LOW)
  {
    e = 1;
  }
  if (sensor == LOW && e == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    e = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("500 Rupees!!!");
    total=total+500;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 11 && red1 <= 13 && blue1 >= 17 && blue1 <= 18 && green1 >= 17 && green1 <=18 && f == 0 && sensor == LOW)
  {
    f = 1;
  }
  if (sensor == LOW && f == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    f = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("200 Rupees!!!");
    total=total+200;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }
  if (red1 >= 10 && red1 <= 13 && blue1 >= 12 && blue1 <= 15 && green1 >= 17 && green1 <=22 && g == 0 && sensor == LOW)
  {
    g = 1;
  }
  if (sensor == LOW && g == 1)
  {
    lcd.setCursor(0, 0);
    lcd.print("Enter notes");
    directionControl(); 
    delay(2000);
    c=c+1;
    k=c;
    g = 0;
    if(total>=0)
    {
    lcd.setCursor(0, 1);
    lcd.print("2000 Rupees!!!");
    total=total+2000;
    t1=total;
    delay(1500);
    lcd.clear();
    }
  }

  if(digitalRead(BUTTON) == HIGH) { 
    c=0;
    t=t+k;
    lcd.setCursor(0, 0);
    lcd.print("Total notes = " + String(t)); 
    delay(3000);
    lcd.clear();
    k=0;
  }
  if(digitalRead(BUTTON1) == HIGH) { 
    total=0;
    k1=k1+t1;
    lcd.setCursor(0, 0);
    lcd.print("Last Amt = " + String(k1)); 
    delay(3000);
    lcd.clear();
    t1=0;
  }6;
 else 
  {
    digitalWrite(in1, LOW);
    lcd.setCursor(0, 0);
    lcd.print("Total count=" + String(c));
    lcd.setCursor(0, 1);
    lcd.print("Device Active");
    delay(2000);
  }
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Total Amt:");
  lcd.setCursor(11, 0);
  lcd.print(total);
  delay(1000);
  lcd.clear();
}

int red()
{
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  frequency = pulseIn(OutPut, LOW);
  return frequency;
}
int blue()
{
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  frequency = pulseIn(OutPut, LOW);
  return frequency;
}
int green()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  frequency = pulseIn(OutPut, LOW);
  return frequency;
}
void directionControl() {
  digitalWrite(in1, HIGH);
  delay(1000);
   
}
