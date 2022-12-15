import random

user_wins=0
computer_wins=0

option=["piatra","hartie","foarfeca"]

while True:
    user_input=input("Type piatra/hartie/foarfeca sau q").lower()
    if user_input=="q":
         break
    if user_input not in option:
        continue

    random_number=random.randint(0,2)
    computer_pick=option[random_number]
    print("Computer picked ",computer_pick)

    if user_input=="piatra" and computer_pick=="foarfeca":
        print("You won")
        user_wins +=1
    if user_input == "foarfeca" and computer_pick == "hartie":
        print("You won")
        user_wins += 1
    if user_input == "hartie" and computer_pick == "piatra":
        print("You won")
        user_wins += 1
    else:
        print("You lost")
        computer_wins +=1

print("You won ",user_input," times")
print("Computer won ",computer_wins," times")
print("Goodbye!")