numbers = list(range(1, 11))
squares = [n * n for n in numbers]
evens = [n for n in numbers if n % 2 == 0]
print("Squares:", squares)
print("Even numbers:", evens)
