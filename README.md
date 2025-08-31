# Taller: Condicionales

**Estudiantes**
- Juan David Sandoval  
- Ana María Cubides

**Curso:** Pensamiento Algorítmico  
**Fecha:** 31/08/2025

---

## Descripción
Repositorio entregable del taller de condicionales. Este contiene los PDFs con análisis, diseño y diagramas de flujo para cada punto, y los archivos fuente en C++ implementando las soluciones solicitadas.

---

## Estructura del repositorio
Estructura obligatoria del repositorio `taller/`:

- `docs/` → PDFs con análisis, pseudocódigo y diagramas de flujo para cada punto.  
- `src/` → Implementaciones en C++.

```text
taller/
├── README.md
├── docs/
│   ├── punto1_calculadora.pdf
│   ├── punto2_validacion_fecha.pdf
│   ├── punto3_sistema_descuentos.pdf
│   ├── punto4_cajero_automatico.pdf
│   ├── punto5_horoscopo.pdf
│   └── punto6_validacion_hora.pdf
└── src/
    ├── calculadora.cpp
    ├── validacion_fecha.cpp
    ├── sistema_descuentos.cpp
    ├── cajero_automatico.cpp
    ├── horoscopo.cpp
    └── validacion_hora.cpp
```

---

## Guía de compilación

### Windows (MinGW-w64)(En nuestro caso usamos este)
1. Te Instalas **MinGW-w64** y asegúrate de que `g++` esté en el `PATH` (`g++ --version` para comprobar).
2. Descarga las bibliotecas y extensiones necesarias si hace falta.
3. Abre **PowerShell** o la terminal de **Visual Studio Code** en la carpeta raíz `taller/`.  
2. Compila todos los programas:

```powershell
mkdir bin
g++ -std=c++17 src/calculadora.cpp -o bin/calculadora.exe
g++ -std=c++17 src/validacion_fecha.cpp -o bin/validacion_fecha.exe
g++ -std=c++17 src/sistema_descuentos.cpp -o bin/sistema_descuentos.exe
g++ -std=c++17 src/cajero_automatico.cpp -o bin/cajero_automatico.exe
g++ -std=c++17 src/horoscopo.cpp -o bin/horoscopo.exe
g++ -std=c++17 src/validacion_hora.cpp -o bin/validacion_hora.exe
```

### MacOS
1. Crear carpeta para ejecutables
(mkdir -p bin)
2. Compilar con clang++ (viene por defecto en macOS)
(clang++ -std=c++17 -O2 -Wall -Wextra src/main.cpp -o bin/programa)
3. Ejecutar
(./bin/programa)

### Linux
1. Crear carpeta para ejecutables
(mkdir -p bin)
2. Compilar con g++
(g++ -std=c++17 -O2 -Wall -Wextra src/main.cpp -o bin/programa)
3. Ejecutar
(./bin/programa)

---

## Instrucciones de ejecución — Windows (VS Code / Terminal)

**Nosotros lo hicimos en Windows con MinGW-w64.** Abre el proyecto en Visual Studio Code o usa cualquier terminal (PowerShell, CMD, Git Bash). Sigue estos pasos exactos.

### 1) Verificar g++
```powershell
cd C:\ruta\al\proyecto\taller
```
### 2) Verificar que g++ está disponible (solo si vas a compilar)
```
g++ --version
```
### 3) (Opcional) Compilar los archivos .cpp
```
g++ -std=c++17 src\calculadora.cpp        -o bin\calculadora.exe
g++ -std=c++17 src\validacion_fecha.cpp   -o bin\validacion_fecha.exe
g++ -std=c++17 src\sistema_descuentos.cpp -o bin\sistema_descuentos.exe
g++ -std=c++17 src\cajero_automatico.cpp  -o bin\cajero_automatico.exe
g++ -std=c++17 src\horoscopo.cpp          -o bin\horoscopo.exe
g++ -std=c++17 src\validacion_hora.cpp    -o bin\validacion_hora.exe
```
### 4) Ejecutar cualquier programa
Ejemplo:
.\bin\calculadora.exe

.\bin\validacion_fecha.exe

### 6) Ejecutar todos los ejecutables en bin (solo para probar)
```
Get-ChildItem bin -Filter *.exe | ForEach-Object {
  Write-Host "----- Ejecutando: $($_.Name) -----"
  & $_.FullName
  Write-Host ""
}
```
****






