#include "pico/stdlib.h"
#include <stdio.h>

// definicao do pino para o led
#define LED_PIN 11

// funcao para acender o led por 0,2 segundos (representa um ponto)
void acender_ponto()
{
    gpio_put(LED_PIN, 1); // acende o led
    sleep_ms(200);        // mantem aceso por 0,2 segundos
    gpio_put(LED_PIN, 0); // apaga o led
    sleep_ms(125);        // gap entre sinais
}

// funcao para acender o led por 0,8 segundos (representa um tracado)
void acender_traco()
{
    gpio_put(LED_PIN, 1); // acende o led
    sleep_ms(800);        // mantem aceso por 0,8 segundos
    gpio_put(LED_PIN, 0); // apaga o led
    sleep_ms(125);        // gap entre sinais
}

// funcao para emitir o sinal sos em codigo morse
void sinal_sos()
{
    // envia os tres pontos (s)
    for (int i = 0; i < 3; i++)
    {
        acender_ponto();
    }

    // intervalo entre letras (0,25 segundos)
    sleep_ms(250);

    // envia os tres tracos (o)
    for (int i = 0; i < 3; i++)
    {
        acender_traco();
    }

    // intervalo entre letras (0,25 segundos)
    sleep_ms(250);

    // envia os tres pontos (s)
    for (int i = 0; i < 3; i++)
    {
        acender_ponto();
    }

    // pausa de 3 segundos antes de reiniciar
    sleep_ms(3000);
}

int main()
{
    // inicializa o pino do led como saida
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // loop principal
    while (true)
    {
        sinal_sos(); // executa o sinal sos em loop
    }

    return 0;
}
