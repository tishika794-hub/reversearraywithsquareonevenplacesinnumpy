import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
dp = pd.read_csv('student.csv')
dp = pd.DataFrame(dp)
print(dp)
dp.sort_values(by='Final_Score',inplace=True)
print(dp)
grouped = dp.groupby(['Hours_Studied','Attendance_Percent'])['Final_Score'].sum()
print(grouped)
print(f'shape:{dp.shape}')
filltered_row = dp[(dp['Attendance_Percent'] > 75) & (dp['Sleep_Hours']>6)]
print(filltered_row)
plt.pie(dp['Final_Score'],labels=dp['Hours_Studied'],autopct='%1.1f%%')
plt.show()