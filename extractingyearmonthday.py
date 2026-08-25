import numpy as np
today = np.datetime64('today','D')
yesterday = today - np.timedelta64(1,'D')
tommorow = today + np.timedelta64(1,'D')
print(yesterday)
print(tommorow)
