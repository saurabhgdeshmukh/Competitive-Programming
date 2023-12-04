
//Binary Exponentiation

int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a;
		a *= a;
		b /= 2;
	}
	return res;
}

//Modulalr Exponentiation
int powr(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1) res *= a, res %= mod;
		a *= a; a %= mod;
		b /= 2;
	}
	return res;
}

// Fast multiplication

int multiply(int a, int b, int c) {
	int res = 0;
	while (b) {
		if (b & 1) res = res + a, res %= c;
		a += a; a %= c;
		b /= 2;
	}
	return res;
}

//matrix Exponentiation


//Fibosum