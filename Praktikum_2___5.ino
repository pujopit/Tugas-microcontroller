void setup() {
DDRC = 0x00;
PORTC = 0x01;
DDRB = 0x10;
}
void loop() {
if(bit_is_clear(PINC,0)) {
PORTB = 0x10;
}
else {
PORTB = 0x00;
}
}
