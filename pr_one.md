# Prática 1: Piscar LED
Objetivo: Acender um LED por 50ms e apagá-lo. Em seguida, Acender outro LED por 50ms e apagá-lo. Aguardar 450ms para recomeçar o ciclo.  
  
### Setup
Essa função é executada uma vez quando a placa é energizada ou iniciada. Usada para usar bibliotecas, pinModes, incialização de variáveis...  
  
### Loop
Função usada para repitir um código constantemente quando uma condição for verdadeira. Caso não for, a placa abandona o Loop e parte para o restante do código.  
  
### Explicação do código
Definimos o pino 13 e 11 como saída (usando pinMode). Na função **loop**, passamos uma quantidade de volts para os pinos usando HIGH e colocamos esses volts em 0 usando LOW. A função delay é usada para aguardar um quantidade de milisegundos.

### Sobre o circuito
O GND é passado para a catódica dos LEDs. GND é usado como um ponto de referência para todas as medições de tensão.  
O anodo dos LEDs estão conectados aos pinos 13 e 11. Como a corrente pode fazer com que os LEDs queimem, foram usados resistores nos fios que conectam o pino e o LED.

### Links
[TinkerCad do Circuito](https://www.tinkercad.com/things/bsjLAqTS5xW?sharecode=I5ZfLnqxp0sRw4sW0LJ3jRHE5k4K1ZidMw0ROEpmedY).