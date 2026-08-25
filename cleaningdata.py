import pandas as pd
import numpy as np
df = pd.read_csv("employe.csv")
df['Age'].fillna(df['Age'].median(), inplace=True)
df['Salary_LPA'].fillna(df['Salary_LPA'].median(),inplace=True)
df['Hours_Worked_Per_Week'].dropna(inplace=True)
df['Performance_Score'].fillna(df['Performance_Score'].mode()[0],inplace=True)
df['Certifications'].dropna(inplace=True)
print("data is cleaned")
print(df)