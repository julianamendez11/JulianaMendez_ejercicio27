import numpy as np
import matplotlib.pyplot as plt

a = os.system("g++ JulianaMendez_ejercicio_27.cpp -o ej27.x")
a = os.system("./ej27.x > ej27.dat")

plt.figure()
data = np.loadtxt("mcmc.dat")
plt.show(data)
plt.savefig("PDE.png")
