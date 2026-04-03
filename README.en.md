# Hidrofix: Hydrogen generator for kitchen with integrated safety

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.19393726.svg)](https://doi.org/10.5281/zenodo.19393726)
[![License](https://img.shields.io/badge/License-Proprietary-red.svg)](LICENSE)
[![ES](https://img.shields.io/badge/Spanish-version-green.svg)](./README.md)

**Hydrogen generator for domestic use (kitchen). With integrated safety system that prevents explosions, overheating, and unsafe shutdown.**

## What problem does it solve?

Hydrogen is a highly flammable gas. A domestic generator without protections can be dangerous: leaks, gas accumulation, overheating, unexpected power cuts.

**Hidrofix solves that. It is not just a generator. It is a generator that does not explode.**

## What does it do?

- **Generates hydrogen** from water for clean cooking.
- **Flow sensor** detects normal production or leaks.
- **Thermal alert** (>50°C) triggers automatic shutdown.
- **5F supercapacitor** provides energy backup for safe shutdown if power fails.
- **Anti-spark heatsink** prevents accidental ignition.

## Operating modes

| Mode | Condition | Action |
|------|-----------|--------|
| Normal | Normal flow, T < 45°C | Green LED, continuous monitoring |
| Warning | T > 45°C or low flow | Amber LED, intermittent buzzer |
| Alert | T > 50°C or zero flow | Power cut, red LED, continuous buzzer |
| Backup | Power loss | Supercapacitor activates safe shutdown (5-10 seconds) |

## Who is it for?

- Domestic kitchens using hydrogen as fuel.
- Self-sufficient homes (off-grid).
- Clean energy projects at home.

## Current status

- Prototype in evolution.
- Uses existing certified equipment.
- Complete documentation in the repository.

## License

Copyright © 2026 Enrique Aguayo. All rights reserved.

## Author

Enrique Aguayo H. – Mackiber Labs
