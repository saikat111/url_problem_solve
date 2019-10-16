name = input()
salary = float(input())
sell = float (input())
total = (sell * (15/100)) + salary
print(name)
print("TOTAL = R$ " + "{:.2f}".format(total))

