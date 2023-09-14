const int BOTAO = 1, VERDE = 2, AMARELO = 3, VERMELHO = 4, VERMELHO_PEDESTRE = 5, VERDE_PEDESTRE = 6;

void setup() {
    // pinMode(portaArduino, INPUT/OUTPUT) -> porta de entrada ou saida de informacao

    pinMode(BOTAO, INPUT); 

    pinMode(VERDE, OUTPUT); 
    pinMode(AMARELO, OUTPUT); 
    pinMode(VERMELHO, OUTPUT); 

    pinMode(VERDE_PEDESTRE, OUTPUT); 
    pinMode(VERDE_PEDESTRE, OUTPUT); 

    // digitalWrite(portaArduino, HIGH/LOW) -> altera estado de porta(HIGH/LOW)

    digitalWrite(VERDE, HIGH);
    digitalWrite(VERMELHO_PEDESTRE, HIGH);
}

void loop() {
    // digitalRead(portaArduino) -> retorna o estado da porta(HIGH/LOW)

    if(digitalRead(BOTAO) == HIGH){
        verdeParaVermelho();
        delay(5000);
        vermelhoParaVerde();
    }
}

void verdeParaVermelho() {
    // APAGA VERDE CARRO
    digitalWrite(VERDE, LOW);

    // ASCENDE AMARELO CARRO
    digitalWrite(AMARELO, HIGH);
    delay(2000);

    // APAGA AMARELO CARRO
    digitalWrite(AMARELO, LOW);

    // APAGA VERMELHO PEDESTRE
    digitalWrite(VERMELHO_PEDESTRE, LOW);

    // ASCENDE VERMELHO CARRO
    digitalWrite(VERMELHO, HIGH);
    
    // ASCENDE VERDE PEDESTRE
    digitalWrite(VERDE_PEDESTRE, HIGH);
}

void vermelhoParaVerde() {
    // APAGA VERDE PEDESTRE
    digitalWrite(VERDE_PEDESTRE, LOW);

    // APAGA VERMELHO CARRO
    digitalWrite(VERMELHO, LOW);

    // ASCENDE VERMELHO PEDESTRE 
    digitalWrite(VERMELHO_PEDESTRE, HIGH);

    // ASCENDE AMARELO CARRO
    digitalWrite(AMARELO, HIGH);
    delay(2000);

    // APAGA AMARELO CARRO
    digitalWrite(AMARELO, LOW);

    // ASCENDE VERDE CARRO
    digitalWrite(VERDE, HIGH);
}

