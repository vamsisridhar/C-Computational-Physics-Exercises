import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

plt.rcParams.update({'font.size': 14, 'axes.titlepad': 20})
df1 = pd.read_csv('N100_T1_0.5dt.csv', header= None, names = ["Nucleons", "Time"])
df2 = pd.read_csv('N100_T1_0.2dt.csv', header= None, names = ["Nucleons", "Time"])
df3 = pd.read_csv('N100_T1_0.05dt.csv', header= None, names = ["Nucleons", "Time"])

plt.figure(figsize = (8,8))
plt.title("Accuracy of Nucleon Decay Sim varying with time step")
plt.xlabel("Time (s)")
plt.ylabel("Number of Nuclei")
plt.plot(df1["Time"], df1["Nucleons"], "d", label = "dt = 0.5s")
plt.plot(df2["Time"], df2["Nucleons"], "d", label = "dt = 0.2s")
plt.plot(df3["Time"], df3["Nucleons"], "d", label = "dt = 0.05s")
plt.legend()
plt.xlim([0, 5])
plt.ylim([0, 100])
plt.savefig("radioactive_decay_1.png")