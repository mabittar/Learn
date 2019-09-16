import panda as pd 

#csv file
amex = pd.read_csv('amex.csv')
amex.info()

amex = pd.read_csv('amex.csv', na_value='n/a')
amex.info()

amex = pd.read_csv('amex.csv', 
	na_value='n/a',
	parse_dates='[Last Update]')
amex.info()

amex.head()

#excel file
#getting sheet names
xls=pd.ExcelFile('listings.xlsx')
exchanges = xls.sheet_names
print(exchanges)

#read excel files
amex = pd.read_excel('listings.xlsx', 
						sheetname=['amex', 'nasdaq'], 
						na_value='n/a')
listings['nasdaq'].info()

#concatenate 2 sheets
amex = pd.read_excel('list.xlsx', sheet_names='amex', na_value='n/a')
nyse = pd.read_excel('list.xlsx', sheet_names='nyse', na_value='n/a')

pd.concat([amex, nyse]).info()
amex['Exchange'] = 'AMEX' # add colunn reference source
nyse['Exchange'] = 'NYSE'

listings = pd.concat([amex, nyse])



#to concatenat all sheets
xls = pd.ExcelFile('listings.xlsx')
exchanges = xls.sheet_names
listings = [] # creat a empty list
for exchange in exchanges
	listings = pd.read_excel(xls, sheetname=exchange)
	listings['Exchange'] = exchange #add reference colunn
	listings.append(listings) #add DataFrame to list

combined_listings = pd.concat(listings) #list of dataframes

combined_listings.info()



