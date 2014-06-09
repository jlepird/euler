num1 = 1
num2 = 1
total = 0
while num2 < 4000000:
	new = num1 + num2
	if new%2 == 0:
		total = total + new
	num1 = num2
	num2 = new

print(total)