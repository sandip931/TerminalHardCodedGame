# 🎮 Level 2: Advanced Modular Tic-Tac-Toe

This version emphasizes **Separation of Concerns** and **Modular Programming**.  
Instead of a single monolithic file, the game is divided into well-defined components for better readability, scalability, and maintainability.

---

## 🏗️ Architecture

The project is structured into the following modules:

- **🧩 Board**
  - Handles memory allocation  
  - Manages grid creation and display  
  - Uses pointer navigation for efficient access  

- **⚙️ Logic**
  - Determines win conditions  
  - Checks for draw scenarios  
  - Controls game state transitions  

- **🚀 Main**
  - Runs the game loop  
  - Handles user interaction and interface  

---

## ⚡ Key Technical Features

- **🛡️ Header Guards**  
  Prevents multiple definition errors during compilation.

- **🧹 Input Sanitization**  
  Ensures stability by handling:
  - Non-numeric inputs  
  - Out-of-range values  
  - Uses `cin.clear()` and input management  

- **🛠️ Custom Build Pipeline**  
  Includes a `build.bat` script that:
  - Automates compilation  
  - Organizes output binaries into an `executable/` directory  

---

## 📥 How to Run

1. Make sure `g++` is installed and added to your system PATH.  
2. Open a terminal in the project directory.  
3. Run the build script:
---
#### Windows 
   ```bash
   build.bat

