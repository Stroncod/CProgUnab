linea = input()
var=input()
n = int(var)
linea2 = input()
arr = []
arr = linea2.split(" ")
dic = {}
lista = list()
j=0
for i in range(0,(len(linea)-n+1)):
	print(i)
	print(j)
	if(j<n):
		print("entro al if")
		dic[arr[j]]=linea[i]
		
		print(arr[j])
		print(linea[i])
		print(dic)
		j+=1
		print(j)
	elif j==n:
		print("entro al else")
		j=0
		print(dic)
		lista.append(dic)
		dic.clear()	
	print(j)
for x in lista:
	print(x) 
