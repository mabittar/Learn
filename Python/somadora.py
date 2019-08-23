print('Digite os valores a somar Seguido por .')
print('Para encerrar digite zero: 0')
n = float (input(':'))
total = n
while n != 0:
	n = float(input(':'))
	total = total + n
print ('Total: %s' %total)
input()