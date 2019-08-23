#calculadora.py - Calculadora de Gastos
print('Balanco de despesas')
x = input('Quanto gastou a primeira pessoa? ')
y = input('Quanto gastou a segunda pessoa? ')
total = float(x) + float(y)
media = total / 2
print('Total de gastos = R$ %s.' %total)
print('Gastos por pessoa = R$ %s. '%media)
input()