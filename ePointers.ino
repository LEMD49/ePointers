int x = 10;
uint16_t* p = &x;
int n = 0x01;
int* q = &n;
void setup()
{
Serial.begin(9600);
Serial.print("x is::"); Serial.println(x);
//*p=x + 11;
Serial.print("*p is::"); Serial.println(*p);
Serial.print("&x is::"); Serial.println(uint16_t(&x));
Serial.println();

Serial.print("n is::"); Serial.println(n);
Serial.print("*q is::"); Serial.println(*q);
Serial.print("&n is::"); Serial.println(uint16_t(&n));
Serial.println();
}
void loop()
{}

