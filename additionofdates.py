import numpy as np
future_date = np.datetime64('2025-08-31')+np.timedelta64(7,'D')
print(f"date after adding 7 days :{future_date}")