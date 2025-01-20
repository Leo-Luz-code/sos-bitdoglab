# SOS-bitdoglab

Este projeto implementa a transmissão do sinal SOS em código Morse usando um LED externo conectado à placa de desenvolvimento BitDogLab. O código foi desenvolvido em C e utiliza o Raspberry Pi Pico W para gerar os sinais de ponto (.) e traço (-), que são representados por pulsos luminosos no LED.

O padrão SOS é composto por três pontos, três traços e três pontos, com ciclos repetidos a cada 3 segundos.

## Objetivos

- Demonstrar o uso do código Morse para comunicação via LED.
- Programar e configurar a placa BitDogLab para emitir sinais SOS.
- Simular o funcionamento no ambiente Wokwi e implementar no hardware real.

## Tecnologias e Ferramentas

- **Placa**: Raspberry Pi Pico W (BitDogLab)
- **Linguagem**: C
- **Ambiente de Desenvolvimento**: Visual Studio Code
- **Simulação**: Wokwi Web (para testar a simulação do circuito)

## Funcionalidade

- O LED conectado ao pino 11 da placa é usado para transmitir o sinal SOS.
- O LED acende por 0,2 segundos para um ponto (.), e por 0,8 segundos para um traço (-).
- Há um intervalo de 0,125 segundos entre os sinais de uma mesma letra e 0,25 segundos entre as letras.
- O ciclo é reiniciado após 3 segundos.

## Como executar

1. Clone este repositório para o seu computador:
   ```bash
   git clone https://github.com/Leo-Luz-code/sos-bitdoglab.git
   ```
2. Importe o projeto pela extensão do Raspberry Pi Pico no VS Code
3. Conecte ao PC com o cabo USB tipo A na placa
4. Copie o arquivo .uf2 para o armazenamento da placa 
