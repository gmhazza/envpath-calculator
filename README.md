# Enviroment Path Calculator
It is a C++ set of programs used to calculate numbers in terminals through environment variables path

### Project Structure
```
envpath-calculator/
├── Makefile # Build automation script
├── README.md # Documentation
├── src/ # Source files (one calculator utility per file)
│ └── *.cpp
├── bin/ # Output directory for compiled executables
│ └── *.exe
```

---

### How to Test

1. **first clone the project**
```bash
git clone https://github.com/gmhazza/envpath-calculator.git
cd ./envpath-calculator
```

2. **Build the project**
* on windows (mingw)
```bash
mingw32-make
```
* on linux
```sh
make
```
final build will be in bin directory