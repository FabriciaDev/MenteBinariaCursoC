

loat f;
double d;
/* scanf — o formato deve corresponder ao tipo exato */
scanf("%f", &f); /* correto para float */
scanf("%lf", &d); /* correto para double */
/* Erro clássico — usar %f para ler um double */
scanf("%f", &d); /* ERRADO - bytes incorretos! */
/* printf — aqui não há diferença prática */
printf("%f", f); /* funciona para float */
printf("%f", d); /* funciona para double também */
scanf("%f", &d) compila sem erro, mas escreve bytes errados na memória.
