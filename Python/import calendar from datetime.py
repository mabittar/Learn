import calendar
import datetime

# set variables
now = datetime.datetime.now()
yy = int(now.year)
mm = int(now.month)

#display the year, month and day
print (" Hoje eh: %s \n" %now.strftime("%Y-%m-%d"))

# display the calendar
print("O calendario para esse mes eh: ")
print(calendar.month(yy, mm))
input()
