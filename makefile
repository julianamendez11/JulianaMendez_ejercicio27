PDE.png:ej27.dat ejercicio26.py
    python ejercicio27.py

%.dat: ej27.x
	./ej27.x

ej27.x: JulianaMendez_ejercicio_27.cpp
	c++ JulianaMendez_ejercicio_27.cpp -o ej27.x

clean:
	rm -rf *.x *.dat