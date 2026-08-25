import pandas as pd
import numpy as np
import seaborn as sns
dp = pd.read_csv('employe.csv')
ab= pd.DataFrame(dp)
print(ab)
print(ab.head())
print(ab.info())
print(f'shape: {ab.shape}')
print(f'column: {ab.columns}')
missing_percentage = ab.isnull().mean()*100
print(missing_percentage)
print('--Missing Report--')
cd = pd.DataFrame({"missing_count": ab.isnull().sum(), "missing_percentage": ab.isnull().mean()*100})
kl = cd.sort_values(by="missing_percentage", ascending=False)
kl = cd[cd["missing_count"]>0]
print(kl)
