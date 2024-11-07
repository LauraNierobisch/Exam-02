
unsigned char	swap_bits(unsigned char octet)
{
	int i = 4;
	return((octet >> i) | (octet << i));
}