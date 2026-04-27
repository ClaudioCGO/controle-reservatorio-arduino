# Sistema de Automação e Segurança - Simulação Tinkercad

Projeto de hardware embarcado desenvolvido em **C++/Arduino** para monitoramento de distância e controle de dispositivos de segurança, projetado e validado no ambiente **Tinkercad**.

## Visualização da Simulação
![Captura de tela da simulação no Tinkercad]([link_para_sua_imagem_aqui.png](https://github.com/ClaudioCGO/automacao-seguranca-arduino/blob/main/TinkerCAD%20Hardware.png))

## Funcionalidade
O sistema utiliza um sensor ultrassônico simulado para medir a distância de objetos.
- **Zona Segura (>= 50cm):** Ativa o relé de abertura e sinaliza com LED Verde.
- **Zona de Risco (< 50cm):** Ativa o relé de fechamento/bloqueio e sinaliza com LED Vermelho.

## Hardware Simulado
- Microcontrolador Arduino Uno R3
- Sensor Ultrassônico HC-SR04
- Módulo Relé (2 canais)
- LEDs de sinalização e resistores

## Conceitos Aplicados
- **Simulação de Hardware:** Validação do circuito e lógica de controle sem custo de hardware físico.
- **Cálculo de Distância:** Conversão de tempo de pulso em centímetros.
- **Lógica de Estados:** Alternância entre modos "Safe" e "Unsafe" baseada em perímetros de segurança.

## Link para a Simulação
[Clique aqui para ver o projeto diretamente no Tinkercad][(https://www.tinkercad.com/things/ksFeE0sgaf9-automacao-com-sensor-ultrassonico?sharecode=QiOTAEoDRZjMi9ixoWHbPVdneMrDHn57GZM-_4xWkz8)]
