import functools
list1=[1,2,3,4]
func = lambda x,y:x*y
functools.reduce(func, list1)
