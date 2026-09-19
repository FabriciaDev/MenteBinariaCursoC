# MenteBinariaCursoC

## Os tipos básicos de C — o mapa completo

| Tipo      | Tamanho   | Exemplos                  | Descrição                                                                 |
|-----------|-----------|---------------------------|---------------------------------------------------------------------------|
| char      | 1 byte    | 'A', 65, '\n'             | Caractere ou inteiro pequeno. De -128 a 127.                              |
| short     | 2 bytes   | 100, -200                 | Inteiro curto. De -32768 a 32767.                                         |
| int       | 4 bytes   | 42, -1000                 | Inteiro padrão. De ~-2 bilhões a ~+2 bilhões.                             |
| long      | 4 ou 8    | 1000000000L               | Inteiro longo. Para números muito grandes.                                |
| float     | 4 bytes   | 3.14f, -0.5f              | Número com vírgula, precisão simples (~7 dígitos).                        |
| double    | 8 bytes   | 3.14159, 2.0              | Número com vírgula, precisão dupla (~15 dígitos). Prefira ao float.       |

**Observações:**
- `unsigned`: versão sem sinal (só positivos).  
- `signed`: padrão.  
- O tamanho de `long` depende do sistema:  
  - Linux 64 bits → 8 bytes  
  - Windows 64 bits → 4 bytes  

## Signed e Unsigned — duas versões de cada tipo inteiro

| Tipo   | Intervalo signed                  | Intervalo unsigned              |
|--------|-----------------------------------|---------------------------------|
| char   | -128 a 127                        | 0 a 255                         |
| short  | -32.768 a 32.767                  | 0 a 65.535                      |
| int    | -2.147.483.648 a +2.147.483.647   | 0 a 4.294.967.295               |
| long   | -9,2 × 10¹⁸ a +9,2 × 10¹⁸         | 0 a 1,8 × 10¹⁹                  |

**Notas importantes:**
- `signed` é o padrão: inclui números negativos.  
- `unsigned` só permite positivos, mas dobra o limite superior.  
- Use `unsigned` quando o valor **nunca pode ser negativo**:  
  - tamanhos de arquivo  
  - contagens  
  - índices  
  - valores de cor (0–255)  

Por ora, prefira sempre `signed`.

### Exemplo em C:
```c
unsigned int contador = 0;
```

## float e double — quando usar cada um

| Tipo   | Tamanho | Precisão                  | Exemplos         | Especificador | Quando usar                                                                 |
|--------|---------|---------------------------|------------------|---------------|------------------------------------------------------------------------------|
| float  | 4 bytes | ~7 dígitos decimais       | 3.14f, -0.5f     | %f ou %.2f    | Sensores, gráficos, quando memória importa                                   |
| double | 8 bytes | ~15 dígitos decimais      | 3.14159, 2.0     | %f ou %.2f    | Cálculos científicos, financeiros — quase sempre                             |

**Regras práticas:**
- `float`: use o sufixo **f** (ex: `3.14f`).  
- `double`: é o padrão em C, sem sufixo (`3.14` já é double).  
- Quando em dúvida, use **double**. Só use `float` se houver razão específica.  

---

### float e double — detalhe importante

Um número com casas decimais escrito diretamente no código é **double por padrão**.

# O operador & — "o endereço de"

| Situação | Código                          | Explicação                                                                 |
|----------|---------------------------------|-----------------------------------------------------------------------------|
| Erro     | scanf("%d", idade);             | **ERRADO** — comportamento indefinido. O `scanf` tenta usar o valor de `idade` como endereço. |
| Correto  | scanf("%d", &idade);            | **CERTO** — o `&` fornece o endereço da variável, permitindo ao `scanf` guardar o valor nela. |
| printf   | printf("%d", idade);            | "Me dá o **valor** que está na gaveta `idade`."                             |
| scanf    | scanf("%d", &idade);            | "Me dá o **endereço** da gaveta `idade`, para eu guardar algo lá."          |

**Resumo:**
- O `&` não lê o valor — ele informa **onde guardar** o novo valor.  
- Sem o `&`, o `scanf` usa o conteúdo da variável como se fosse um endereço → resultado: programa trava ou grava em lugar errado.
