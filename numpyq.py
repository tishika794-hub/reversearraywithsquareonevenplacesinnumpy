import numpy as np
while True:
   n = int(input("enter value of n:"))
   k = (n+1)//2
   squres = np.arange(1, k+1)**2
   squres = squres[::-1] #reverse the array
   roux = np.zeros(n, dtype = int)
   roux[::2] = squres
   print("array in reversed square at even place is:")
   print(roux)