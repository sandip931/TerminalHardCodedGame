# 🎮 Tic-Tac-Toe Evolution: A C++ Deep Dive

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)  
[![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux-lightgrey)](https://github.com)  
[![Status](https://img.shields.io/badge/status-active-brightgreen)](https://github.com)

A progressive C++ project that showcases the evolution of a simple Tic-Tac-Toe game—from a basic procedural program to a modular and network-ready system.

This repository reflects my journey as a Computer Science student at Kathmandu University, exploring core programming concepts such as:
- Procedural vs modular design
- Memory management
- Code organization and scalability
- Cross-language integration (C++ + Python) (future implementation plan)

---

## 📖 Evolution Stages

| Stage | Focus | Description |
| :--- | :--- | :--- |
| **01 - Basic Console** | Procedural Programming | A simple, single-file implementation with basic game logic (win/draw detection). |
| **02 - Advanced Modular** | Software Architecture | Refactored into multiple files using `src/` and `include/`, with improved structure and maintainability. |
| **03 - Networked Hybrid** *(In Progress)* | Networking & Integration | Planned online multiplayer using a Python–C++ bridge and web services. |

---

## 🛠️ Technologies Used

- **Language:** C++ (C++17 standard)
- **Compiler:** G++ (recommended)
- **Build System:** Custom batch scripting (`build.bat`)
- **Version Control:** Git & GitHub

---

## 📁 Project Structure

```
TicTacToe-Evolution/
├── 01-Basic-Console/
│   ├── main.cpp
│   ├── gameLogic.cpp
│   ├── gameLogic.h
│   ├── build.bat
│   └── README.md
├── 02-Advanced-Modular/
│   ├── src/
│   ├── include/
│   ├── build.bat
│   └── README.md
├── 03-Networked-Hybrid/  (inProgress)
└── README.md
```

Each directory represents a standalone version of the project. You can explore them independently to understand the progression.

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler (**G++ recommended**)
- Git

---

### 🔧 Clone the Repository

```bash
git clone https://github.com/yourusername/TicTacToe-Evolution.git
cd TicTacToe-Evolution
```

---

### ▶️ Build & Run

#### Option 1: Basic Console Version

```bash
cd 01-Basic-Console
build.bat (builds and runs)
```

---

#### Option 2: Advanced Modular Version

On **Windows**:
```bash
cd 02-Advanced-Modular
build.bat
```

On **Linux/macOS**:
```bash
cd 02-Advanced-Modular
g++ src/*.cpp -Iinclude -o tictactoe
./tictactoe
```

---

## 🎯 Learning Goals

This project was built to:

- Understand how small programs scale into structured systems
- Practice clean code organization in C++
- Explore real-world development workflows
- Experiment with networking and cross-language integration

---

## Future Improvements

- 🌐 Online multiplayer support
- 🤖 AI opponent (Minimax)
- 🎨 GUI version (possibly using sdl2/3 or raylib)

---

## 🤝 Contributing

Contributions are welcome! If you’d like to improve features, fix bugs, or suggest enhancements:

1. Fork the repository  
2. Create a new branch  
3. Submit a pull request  

---

