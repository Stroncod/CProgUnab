from decimal import *
linea3 = input()
linea = input()
arr = []
arr = linea.split(' ')
n1,n2 = linea3.split(' ')
n1_int =int(n1)
n2_int =int(n2)

puntos = 1
arr2 =[]
flag=0

for x in arr:
	arr2.append(int(x))

costo = arr2[0]
	
for i in range(1, n1_int):
	if puntos >= n2_int:

		if (i+1) < (n1_int):
			#print(i)
			if (puntos/n2_int) == (n1_int-i):
				print(costo)
				exit()
			if arr2[i]<arr2[i+1]:
				puntos+=1
				#print("costo1: " + str(costo))
				costo +=arr2[i]
				#print("costo2: " + str(costo))
				flag = 1
			else:
				puntos -= n2_int
				#puntos+=1
				flag=1
		if i == n1_int-1:
			print(costo)
			exit()
	if flag==0:	
		costo += arr2[i]
		#print("costo sin salto: " + str(costo))
		puntos+=1
	flag = 0				


print (costo)

#10 3 12 15 12 18
