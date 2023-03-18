# include < avr / io .h >
# include < util / delay .h >
# include < stdint .h >
int16_t main ()
{
int16_t high_time = 300;
int16_t low_time = 700;
DDRB |= 1 << 5; // PB5 je izlaz
void ledInit ()
{
DDRB |= 1 << 5; // PB5 je izlaz
}

return 0;
}
