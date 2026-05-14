# Schritt #1. 
Um Projekt "Labor04_Aufgabe_Module" zu kompilieren Terminal -> Run Task... -> "CMake Build Labor04_Aufgabe_Module" auswählen.
Eine Task starten geht auch mit "Strg + Shift + B"

# Schritt #2. 
Falls Fehlermeldung "cmake: command not found" erscheint, dann ist cmake nicht installiert. 

Zum installieren im Terminal in VSCode (WSL/Ubuntu) zwei Befehle eingeben:
- esudo apt updat
- sudo apt install cmake
Anschließend Schritt #1 erneut ausführen

# Schritt #3.
Zum Ausführen/Debuggen. Zum Reiter "Run and Debug" wechseln (vertikale Leiste in VSCode ganz links). 
Oben im DropDown-Menu den Eintrag "Debug Labor04_Aufgabe_Module" auswählen.
F5           - Starten mit Debuggen (stoppt an den BreakPoints)
Strg + F5    - Starten ohne Debugger (BreakPoints werden ignoriert)

-----------------------------------
Falls Sie den Ordner "Labor04_Aufgabe_Module" zu eurer bestehenden Projektmappe kopieren, kopieren und überschreiben Sie ebenfalls die Dateien
- launch.json
- tasks.json
aus dem Ordner ".vscode"
