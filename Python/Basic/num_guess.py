import random
secret = random.randint(1, 20)
print("Guess a number from 1 to 20.")
while True:
    guess = int(input("Your guess: "))
    if guess < secret:
        print("Too low!")
    elif guess > secret:
        print("Too high!")
    else:
        print("Correct!")
        break
