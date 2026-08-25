import numpy as np
dates_array = np.array(['2025-01-01', '2025-01-15', '2025-02-01'], dtype='datetime64')
python_datetime_list = [dt.item() for dt in dates_array]
print(python_datetime_list)
