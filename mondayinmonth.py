import numpy as np
dates_in_march = np.arange('2017-03-01', '2017-04-01', dtype ='datetime64[D]')
monday_in_march = dates_in_march[np.is_busday(dates_in_march, weekmask='monday')]
print(monday_in_march)