/*
  HidroFix – Firmware para Arduino (versión básica de prueba)
  Controla sensor de flujo, temperatura y alertas.
  Diseñado para Arduino Nano/UNO.
*/

// Pines de conexión
const int pinSensorFlujo = 2;     // Sensor de flujo (2017 Y) – entrada digital
const int pinTermistor = A0;      // Termistor en divisor de tensión
const int pinLedAlerta = 3;       // LED rojo de alerta
const int pinBuzzer = 4;          // Buzzer activo
const int pinRele = 5;            // Relé que corta alimentación en emergencia

// Variables
float temperatura = 0;
bool flujoNormal = true;
bool alertaTemperatura = false;

// Umbrales
const float TEMP_MAX = 50.0;      // Temperatura máxima en °C
const int INTERVALO_LECTURA = 1000; // Lectura cada segundo

void setup() {
  Serial.begin(9600);
  pinMode(pinSensorFlujo, INPUT_PULLUP);
  pinMode(pinLedAlerta, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinRele, OUTPUT);
  
  digitalWrite(pinRele, HIGH);    // Relé inicialmente cerrado (circuito ON)
  digitalWrite(pinLedAlerta, LOW);
  
  Serial.println("HidroFix – Sistema iniciado");
}

void loop() {
  // 1. Leer sensor de flujo
  flujoNormal = digitalRead(pinSensorFlujo);
  
  // 2. Leer temperatura
  temperatura = leerTemperatura();
  
  // 3. Comprobar condiciones de seguridad
  if (!flujoNormal || temperatura > TEMP_MAX) {
    activarAlerta();
  } else {
    desactivarAlerta();
  }
  
  // 4. Enviar datos por serial (opcional para monitor)
  Serial.print("Flujo: ");
  Serial.print(flujoNormal ? "OK" : "FALLO");
  Serial.print(" | Temp: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
  delay(INTERVALO_LECTURA);
}

float leerTemperatura() {
  // Conversión simplificada para termistor NTC 10k
  int valorADC = analogRead(pinTermistor);
  float voltaje = valorADC * (5.0 / 1023.0);
  // Fórmula aproximada – calibrar según termistor usado
  float tempC = (voltaje - 0.5) * 100.0;
  return tempC;
}

void activarAlerta() {
  digitalWrite(pinLedAlerta, HIGH);
  tone(pinBuzzer, 1000, 500);     // Buzzer intermitente
  digitalWrite(pinRele, LOW);     // Abre relé (corta alimentación)
  Serial.println("ALERTA: Condición insegura detectada");
}

void desactivarAlerta() {
  digitalWrite(pinLedAlerta, LOW);
  noTone(pinBuzzer);
  digitalWrite(pinRele, HIGH);    // Cierra relé (circuito ON)
}