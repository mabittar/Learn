from pandas_datareader import data
import matplotlib.pyplot as plt
import pandas as pd


start = '2017-01-01'
end = '2019-08-21'


tickers = ['AAPL', 'MSFT', '^GSPC']
data_source = 'google'
panel_data = data.DataReader('INPX', 'google', start, end)

panel_data.to_frame().head(9)