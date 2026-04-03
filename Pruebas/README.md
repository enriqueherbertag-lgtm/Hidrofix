# Pruebas - Hidrofix

Esta carpeta contiene los protocolos de prueba y resultados de validación.

## Contenido planificado

- `flow_test.md` — pruebas del sensor de flujo (0–10 L/min).
- `thermal_test.md` — pruebas de temperatura (>50°C activan corte).
- `backup_test.md` — pruebas del supercondensador (apagado seguro).
- `safety_test.md` — pruebas de seguridad (chispas, fugas).

## Protocolos de prueba

| Prueba | Descripción | Criterio de aceptación |
|--------|-------------|------------------------|
| Flujo mínimo | Detectar flujo <0.5 L/min | Activar alerta (LED ámbar) |
| Flujo nulo | Detectar flujo = 0 L/min | Activar alerta (LED rojo, corte de energía) |
| Temperatura >50°C | Simular sobrecalentamiento | Corte automático, buzzer continuo |
| Pérdida de alimentación | Cortar fuente de 12V | Apagado seguro en <10 segundos |

## Estado

- Protocolos definidos.
- Pruebas pendientes de ejecución.
