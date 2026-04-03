# Hidrofix: Generador de hidrógeno para cocina con seguridad integrada

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.19393726.svg)](https://doi.org/10.5281/zenodo.19393726)
[![License](https://img.shields.io/badge/License-Proprietary-red.svg)](LICENSE)
[![EN](https://img.shields.io/badge/English-version-blue.svg)](./README.en.md)

**Generador de hidrógeno para uso doméstico (cocina). Con sistema de seguridad integrado que previene explosiones, sobrecalentamiento y apagado inseguro.**

## ¿Qué problema resuelve?

El hidrógeno es un gas altamente inflamable. Un generador doméstico sin protecciones puede ser peligroso: fugas, acumulación de gas, sobrecalentamiento, cortes de energía inesperados.

**Hidrofix resuelve eso. No es solo un generador. Es un generador que no explota.**

## ¿Qué hace?

- **Genera hidrógeno** a partir de agua para cocinar de forma limpia.
- **Sensor de flujo** detecta si hay producción normal o fuga.
- **Alerta térmica** (>50°C) activa corte automático.
- **Supercondensador 5F** da respaldo energético para apagado seguro si falla la corriente.
- **Bloque disipador anti-chispa** evita ignición accidental.

## Modos de operación

| Modo | Condición | Acción |
|------|-----------|--------|
| Normal | Flujo normal, T < 45°C | LED verde, monitoreo continuo |
| Advertencia | T > 45°C o flujo bajo | LED ámbar, buzzer intermitente |
| Alerta | T > 50°C o flujo nulo | Corte de energía, LED rojo, buzzer continuo |
| Respaldo | Pérdida de alimentación | Supercondensador activa apagado seguro (5-10 segundos) |

## ¿Para quién es?

- Cocinas domésticas que usan hidrógeno como combustible.
- Hogares autosuficientes (off-grid).
- Proyectos de energía limpia en casa.

## Estado actual

- Prototipo en evolución.
- Utiliza equipamiento existente certificado.
- Documentación completa en el repositorio.

## Licencia

Copyright © 2026 Enrique Aguayo. Todos los derechos reservados.

## Autor

Enrique Aguayo H. – Mackiber Labs
