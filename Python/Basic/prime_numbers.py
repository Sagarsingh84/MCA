n=int(input("Enter a integer:"))
if n<2:
  print("Not prime")
else:
  is_prime=True
  for i in range(2,int(n**0.5)+1):
    if n%i==0:
      is_prime=False
      break
  print("Prime" if is_prime else "Not prime")
