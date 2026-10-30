n=int(input("Enter a non-negative integer: "))
if n < 0:
  print("Factoria; is not defined for negative integer.")
else:
  result=1
  for i in range(2,n+1):
    result *=i
    print("Factorial:",result)
