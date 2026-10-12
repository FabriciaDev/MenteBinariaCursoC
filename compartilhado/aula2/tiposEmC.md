# Os tipos básicos de C — o mapa completo

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
