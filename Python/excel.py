import os
cwd = os.getcwd()
cwd
os.listdir('.')

#importar planilha
import pandas as pd 
file = 'Exportar_custodia_Marcel.xlsx'

#carregar planilha
xl = pd.ExcelFile(file)
print(xl.Exportar_custodia_Marcel)