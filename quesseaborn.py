import numpy as np
date_only = np.datetime64('2025-08-31','D')
month_only = np.datetime64('2025-08-31','M')
year_only = np.datetime64('2025-08-31','Y')
datetime_full = np.datetime64('2025-08-31T05:26:00')
print(f"date_only:{date_only}")
print(f"month_only:{month_only}")
print(f"year only:{year_only}")
print(f"datetime only:{datetime_full}")


