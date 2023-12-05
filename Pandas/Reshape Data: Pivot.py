import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    return pd.pivot(data=weather,index='month', columns='city', values='temperature')
