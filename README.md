# HidroFix – Kit de seguridad open source para celdas de electrólisis caseras

**Sistema de seguridad de bajo costo para prevenir explosiones, sobrecalentamiento y apagado inseguro en celdas de hidrógeno caseras.**

HidroFix es un sistema de seguridad modular diseñado para proteger a los usuarios de hidrógeno durante experimentos de electrólisis casera. Combina sensores de flujo, control térmico y respaldo energético para operación segura.

---

## Problema que Resuelve

- **Riesgo de explosión:** Acumulación de hidrógeno sin ventilación adecuada puede generar atmósferas explosivas.
- **Sobrecalentamiento:** Celdas de electrólisis pueden alcanzar temperaturas peligrosas (>50°C).
- **Apagado inseguro:** Cortes de energía pueden dejar la celda en estado inseguro.

**HidroFix monitoriza, alerta y actúa automáticamente para prevenir accidentes.**

---

## Especificaciones Técnicas

| Parámetro | Valor |
|-----------|-------|
| **Sensor de flujo** | Modelo 2017 Y (0–10 L/min) |
| **Respaldo energético** | Supercondensador 5F (5.5V) |
| **Alerta térmica** | LED + buzzer activo >50°C |
| **Fuente de alimentación** | 12V estabilizada con protección contra cortocircuitos |
| **Bloque disipador** | Anti-chispa (aluminio anodizado) |
| **Microcontrolador** | Arduino Nano (o compatible) |

---

## Modos de operación

| Modo | Condición | Acción |
|------|-----------|--------|
| **Normal** | Flujo normal, T < 45°C | Monitoreo continuo, indicador LED verde |
| **Advertencia** | T > 45°C o flujo bajo | LED ámbar, buzzer intermitente |
| **Alerta** | T > 50°C o flujo nulo | Corte de energía, LED rojo, buzzer continuo |
| **Respaldo** | Pérdida de alimentación | Supercondensador mantiene sistemas críticos por 5–10 segundos, apagado seguro |

---

## Componentes

| Componente | Especificación | Función |
|------------|----------------|---------|
| **Sensor de flujo** | 2017 Y (0–10 L/min) | Detecta producción de hidrógeno |
| **Sensor térmico** | NTC 10kΩ o LM35 | Monitorea temperatura de la celda |
| **Supercondensador** | 5F, 5.5V | Respaldo energético |
| **Microcontrolador** | Arduino Nano | Lógica de control y alertas |
| **Relé** | 12V, 10A | Corte de energía a la celda |
| **Disipador** | Aluminio anodizado | Evita chispas por conexiones sueltas |

---

## Instalación

```bash
# Clonar repositorio
git clone https://github.com/enriqueherbertag-lgtm/HidroFix
cd HidroFix

# Subir firmware a Arduino (usando Arduino IDE o platformio)
# Ver firmware/hidrofix.ino
