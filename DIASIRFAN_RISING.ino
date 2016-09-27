#include <LiquidCrystal.h>
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
unsigned int countLoop = 0;

void setup() 
{
 lcd.begin(16,2);
 lcd.clear();
 attachInterrupt(0, rutinInterupsi0, RISING);
 attachInterrupt(1, rutinInterupsi1, RISING); 
}  
 
void loop() 
{ 
  lcd.clear();
  lcd.setCursor(0,0); lcd.print("Main Program"); 
  lcd.setCursor(0,1); lcd.print("Count Loop ");  lcd.print(countLoop);
  countLoop++; 
  delay(1000); 
} 
 
void rutinInterupsi0() 
{
  lcd.clear();
  lcd.setCursor(0,0);  lcd.print("Int0 Program"); 
  lcd.setCursor(0,1);  lcd.print("Interrupt INT0"); 
  delay(5000); 
} 
 
void rutinInterupsi1()
{
  lcd.clear();
  lcd.setCursor(0,0);  lcd.print("Int1 Program"); 
  lcd.setCursor(0,1);  lcd.print("Interrupt INT1"); 
  delay(5000); 
  }

