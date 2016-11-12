
k = input()
count= 0
while count <int(k):
	m,n = input().split()
	adds = input().split()
	gets = input().split()

	for val in adds:
		aux = int(val)
		i = adds.index(val)
		adds.remove(val)
		adds.insert(i,aux)
	for val in gets:
		aux = int(val)
		i = gets.index(val)
		gets.remove(val)
		gets.insert(i,aux)
	it = 0
	get_it = 0
	blackbox = []
	for number in adds:
		for x in range(0,int(n)):
			if len(blackbox) == gets[x] :
				print(blackbox[it])
				#print (it,get_it)
				it +=1
				#get_it +=1
		
		blackbox.append(number)
		blackbox.sort()
	print("\n")
	count +=1	
		#print (blackbox)
		

