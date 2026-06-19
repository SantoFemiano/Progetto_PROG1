# 🧬 Progetto PROG1 — Two C Programming Projects

<div align="center">

[![Language](https://img.shields.io/badge/Language-C-blue?logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Projects](https://img.shields.io/badge/Projects-2-orange)]()
[![Arrays](https://img.shields.io/badge/Data%20Structures-2D%20%26%203D%20Arrays-purple)]()
[![University](https://img.shields.io/badge/University-Parthenope%20Napoli-green)](https://www.uniparthenope.it/)

**Two C programs developed as university exam projects: a cellular automaton simulation and a calendar agenda.**  
University project for the *Programmazione 1* course — Università degli Studi di Napoli Parthenope.

</div>

---

## 📌 Overview

This repository contains **two independent C programs** developed for the *Programmazione 1* exam. Each project explores a different domain of fundamental C programming:

1. **Simulazione Dinamica Cellule** — A 2D cellular automaton simulation on an 80×80 character matrix, implementing 4 state-transition rules to simulate cell growth step by step.
2. **Agenda** — A 3D array-based interactive calendar that allows the user to insert, view, and delete appointments indexed by month, day, and hour.

Both projects are structured with **header files** (`libreria.h`, `prototipi.h`) to separate function definitions from the main program, demonstrating modular C code organisation.

### Key Highlights for Recruiters

- ✅ **2D array manipulation** — 80×80 char matrix for cellular automaton with boundary-aware iteration
- ✅ **3D array manipulation** — `char agenda[12][30][24]` modelling months × days × hours
- ✅ **Cellular automaton logic** — 4 custom transition rules (A, B, C, D) for cell state propagation
- ✅ **Modular architecture** — `.h` header files with `#ifndef` guards, function prototypes separated from implementations
- ✅ **Interactive CLI menu** — `while` loop-driven user interface with 4 selectable operations
- ✅ **HTML visualisations** — browser-renderable output files for both programs
- ✅ **String manipulation** with `<string.h>` for appointment management
- ✅ **Full academic report** included: [`Pr_Femiano_Santo.pdf`](./Pr_Femiano_Santo.pdf)

---

## 🗂️ Repository Structure

| File | Project | Description |
|---|---|---|
| [`main.c`](./main.c) | 🧬 Cell Simulation | Entry point: initialises 80×80 matrix, applies transition rules, prints at steps 4,8,16,32,64,80 |
| [`libreria.h`](./libreria.h) | 🧬 Cell Simulation | Function implementations: `primacellulanera()`, `stampa()` |
| [`prototipi.h`](./prototipi.h) | 🧬 Cell Simulation | Function prototypes for cell simulation |
| [`Simulazione_Cellule.html`](./Simulazione_Cellule.html) | 🧬 Cell Simulation | HTML visualisation of the simulation output |
| [`main_agenda.c`](./main_agenda.c) | 🗓️ Agenda | Entry point: 3D agenda array + interactive CLI menu (4 operations) |
| [`libreria_agenda.h`](./libreria_agenda.h) | 🗓️ Agenda | Function implementations: `sceltauno()`, `sceltadue()`, `sceltatre()`, `sceltaquattro()` |
| [`prototipi_agenda.h`](./prototipi_agenda.h) | 🗓️ Agenda | Function prototypes for the agenda |
| [`Agenda.html`](./Agenda.html) | 🗓️ Agenda | HTML visualisation of the agenda |
| [`index.html`](./index.html) | Both | Main HTML index page linking both visualisations |
| [`Pr_Femiano_Santo.pdf`](./Pr_Femiano_Santo.pdf) | Both | Full academic report with problem statements and solutions |

---

## 🧬 Project 1 — Cellular Automaton Simulation

### Problem Statement

Simulate the dynamic evolution of black (`X`) and white (` `) cells on an **80×80 character matrix**. The simulation starts with a single black cell at position `[0][40]` (centre of the first row). At each step, each cell's new state is determined by 4 transition rules based on the state of its neighbours in the row above.

### Transition Rules

| Rule | Condition | Result |
|---|---|---|
| **A** | `[i-1][j]` is set AND `[i-1][j-1]='X'` AND `[i-1][j+1]=' '` | `[i][j] = 'X'` |
| **B** | `[i-1][j-1]='X'` AND `[i-1][j]` is set AND `[i-1][j+1]=' '` | `[i][j] = 'X'` |
| **C** | `[i-1][j]` is set AND `[i-1][j+1]='X'` AND `[i-1][j-1]=' '` | `[i][j] = 'X'` |
| **D** | `[i-1][j+1]='X'` AND `[i-1][j]` is set AND `[i-1][j-1]=' '` | `[i][j] = 'X'` |

The matrix state is printed at steps: **4, 8, 16, 32, 64, 80**.

### Code Structure

```
main.c
  ├── includes prototipi.h       # Function prototypes
  └── includes libreria.h        # Function definitions
            ├── primacellulanera()  # Fills matrix with spaces, places first black cell at [0][40]
            └── stampa()            # Prints matrix at steps 4,8,16,32,64,80 with border formatting
```

### How to Compile & Run

```bash
gcc main.c -o simulazione
./simulazione
```

---

## 🗓️ Project 2 — Interactive Agenda (3D Array)

### Problem Statement

Implement a **calendar agenda** using a 3D character array `char agenda[12][30][24]` representing 12 months × 30 days × 24 hours. The user can interact via a CLI menu to manage appointments.

### Data Structure

```c
char agenda[12][30][24] = {0};
//            │    │    └── 24 hours per day (index 0–23)
//            │    └────── 30 days per month (index 0–29)
//            └────────── 12 months per year (index 0–11)
// Initialised to 0 to avoid spurious output
```

### Operations

| Choice | Operation |
|---|---|
| `1` | View a specific appointment (by month, day, hour) |
| `2` | Insert a new appointment |
| `3` | View all appointments for a given month at a specific hour |
| `4` | Delete an appointment |
| `-1` | Exit the program |

### Code Structure

```
main_agenda.c
  ├── includes prototipi_agenda.h    # Function prototypes
  └── includes libreria_agenda.h     # Function definitions
            ├── sceltauno()    # View single appointment
            ├── sceltadue()    # Insert appointment
            ├── sceltatre()    # View all appointments in a month at a given hour
            └── sceltaquattro() # Delete appointment
```

### How to Compile & Run

```bash
gcc main_agenda.c -o agenda
./agenda
```

---

## 🌐 HTML Visualisations

Both programs include HTML output files that render the results in a browser:

- [`index.html`](./index.html) — Landing page linking both projects
- [`Simulazione_Cellule.html`](./Simulazione_Cellule.html) — Renders the cell evolution steps
- [`Agenda.html`](./Agenda.html) — Renders the agenda interface

Open any `.html` file directly in a browser (no server required).

---

## 📚 Academic Context

| Field | Details |
|---|---|
| **Course** | Programmazione 1 |
| **University** | Università degli Studi di Napoli Parthenope |
| **Language** | C (standard C99) |
| **Key concepts** | 2D/3D arrays, modular header files, function prototypes, CLI interaction, cellular automata |
| **Report** | [`Pr_Femiano_Santo.pdf`](./Pr_Femiano_Santo.pdf) |

---

## 👤 Author

**Santo Femiano**
- GitHub: [@SantoFemiano](https://github.com/SantoFemiano)
- University: Università degli Studi di Napoli Parthenope
