import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    d = animals[animals['weight']>100]
    d = d.sort_values(by="weight", ascending=False)[["name"]]
    return d
