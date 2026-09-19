# Especificadores de formato — tabela completa

| Espec. | Tipo          | O que imprime                        | Exemplo de uso                  | Saída        |
|--------|---------------|--------------------------------------|---------------------------------|--------------|
| %d     | int           | Inteiro decimal com sinal            | printf("%d", 42)                | 42           |
| %ld    | long          | Long decimal                         | printf("%ld", 1000000L)         | 1000000      |
| %u     | unsigned int  | Inteiro sem sinal                    | printf("%u", 42)                | 42           |
| %f     | float/double  | Ponto flutuante (6 casas padrão)     | printf("%f", 3.14)              | 3.140000     |
| %.2f   | float/double  | Ponto flutuante com 2 casas          | printf("%.2f", 3.14)            | 3.14         |
| %c     | char          | Caractere ASCII                      | printf("%c", 65)                | A            |
| %x     | int           | Hexadecimal minúsculo                | printf("%x", 255)               | ff           |
| %02x   | int           | Hex 2 dígitos, zero à esquerda       | printf("%02x", 10)              | 0a           |
| %p     | ponteiro      | Endereço de memória                  | printf("%p", &x)                | 0x7ffd...    |
| %lf    | double        | Ponto flutuante — leitura com scanf  | scanf("%lf", &d)                | (entrada)    |
