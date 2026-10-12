* Valor pequeno: L não é necessário, conversão automática */
long x = 1000; /* OK - 1000 cabe em int */
/* Valor grande: sem L, não cabe em int */
long y = 9876543210; /* ERRO - estoura o int! */
long y = 9876543210L; /* OK - L garante literal long */
/* Comparação: limites de cada tipo */
int max_int = 2147483647; /* ~2 bilhões */
long max_long = 9223372036854775807L; /* ~9 quintilhões */
