import numpy as np
date1 = np.datetime64('2025-08-31')
date2 = np.datetime64('2025-01-16')
difference = date1 - date2
print(f"difference between {date1} and {date2} is :{difference}")