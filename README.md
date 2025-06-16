Conversor de Data para Cor RGB
Este projeto em C converte uma data (dia, mês e ano) em uma cor RGB (Red, Green, Blue), onde cada componente da cor é calculado proporcionalmente ao valor da data fornecida.

Descrição
O programa pede ao usuário para inserir uma data válida, composta por dia, mês e ano. Depois, converte essa data para uma cor RGB usando a fórmula:

Red (R) é proporcional ao dia (1 a 31)

Green (G) é proporcional ao mês (1 a 12)

Blue (B) é proporcional ao ano (1 a 2025)

O resultado é exibido no formato:
Data: DD/MM/AAAA - Cor: RED: R GREEN: G BLUE: B

Como usar
Compile o programa:
gcc dateByRGB.c -o conversor_rgb

Execute o programa:
./conversor_rgb

Insira os valores solicitados (dia, mês e ano). Caso algum valor seja inválido, o programa pedirá para digitar novamente.

Exemplo de execução
Convertendo data em cor RGB
---------------------------
Digite o dia: 15
Digite o mês: 6
Digite o ano: 2020

Data: 15/6/2020 - Cor: RED: 123 GREEN: 127 BLUE: 249

Sobre o código
Usa constantes DIA_MAX, MES_MAX e ANO_MAX para limitar os valores máximos aceitos.

A função converteRGB calcula os valores R, G e B proporcionalmente usando as fórmulas:
R = (dia * 255) / DIA_MAX;
G = (mes * 255) / MES_MAX;
B = (ano * 255) / ANO_MAX;
