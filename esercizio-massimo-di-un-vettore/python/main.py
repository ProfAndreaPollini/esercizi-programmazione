

valori = [1,2,3,5,3]

massimo = valori[0]

for i in range(1,len(valori)):
	if valori[i] > massimo:
		massimo = valori[i]

print(f"il massimo vale {massimo}")