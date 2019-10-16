p1 = input()
quantity1 = int(input())
price1 = float(input())
p2 = input()
quantity2 = int(input())
price2 = float(input())
pr1 = quantity1 * price1 
pr2 = quantity2 * price2
total = pr1 + pr2
print("VALOR A PAGAR: R$ " + "{:.2f}".format(total))


