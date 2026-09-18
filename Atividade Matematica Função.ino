void setup() {
  Serial.begin(9600);

  Serial.println("=== CALCULADORA ARDUINO ===");
  Serial.println();

  int numero1 = 10;
  int numero2 = 5;

  Serial.print("Numero 1: ");
  Serial.println(numero1);

  Serial.print("Numero 2: ");
  Serial.println(numero2);

  Serial.print("Soma: ");
  Serial.println(numero1 + numero2);

  Serial.print("Subtracao: ");
  Serial.println(numero1 - numero2);

  Serial.print("Multiplicacao: ");
  Serial.println(numero1 * numero2);

  Serial.print("Divisao: ");
  Serial.println(numero1 / numero2);

  Serial.print("Potencia: ");
  Serial.println(pow(numero1, numero2));

  Serial.print("Raiz quadrada do numero 1: ");
  Serial.println(sqrt(numero1));

  String nome = "Davi";

  Serial.println();
  Serial.print("Ola, ");
  Serial.print(nome);
  Serial.println("!");

  Serial.print("Quantidade de letras do nome: ");
  Serial.println(nome.length());

  Serial.println("Programa finalizado.");
}

void loop() {
}
