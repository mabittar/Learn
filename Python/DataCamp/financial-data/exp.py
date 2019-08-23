from pandas_datareader.data import DataReader
from datetime import date 

start = date (2017, 1, 1)
end = date (2019, 8, 21)

ticker = 'GOOG'
data_source = 'google'
stock_data = DataReader(ticker, data_source, start, end)

stock_data.info()