# -*- coding:utf-8 -*-

import math

def quadratic(a,b,c):
	dlta = b*b -4*a*c

	if dlta < 0:
		print("无实数根.")
		return
	else :
		x1 = (-b + math.sqrt(dlta)) / (2*a)
		x2 = (-b - math.sqrt(dlta)) / (2*a)
		return (x1,x2)
a = input('please input a: ')
b = input('please input b: ')
c = input('please input c: ')

print(quadratic(a,b,c))

		

