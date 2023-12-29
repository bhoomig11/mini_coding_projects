
def game(): # 2 players game where each player will choose from the 3 choices
print("Type only one letter to choose")
user1 = input("Player 1, choose [R]ock, [P]aper, [S]cissors:")
user2 = input("Player 2, choose [R]ock, [P]aper, [S]cissors:")

#if something other than the three choices is chosen
#ask player 2 to choose again
while (user1.upper() != "R" and user1.upper() != "P" and user1.upper() != "S"): 
    user1 = input("Player 1, choose [R]ock, [P]aper, [S]cissors:")
    if user1.upper() == "R":
        print("Player 1 chose Rock!")
    elif user1.upper() == "P":
        print("Player 1 chose Paper!")
    elif user1.upper() == "S":
        print("Player 1 chose Scissors!")

#if something other than the three choices is chosen
#ask player 1 to choose again
while (user2.upper() != "R" and user2.upper() != "P" and user2.upper() != "S"): 
    user2 = input("Player 2, choose [R]ock, [P]aper, [S]cissors:")
    if user2.upper() == "R":
        print("Player 2 chose Rock!")
    elif user2.upper() == "P":
        print("Player 2 chose Paper!")
    elif user2.upper() == "S":
        print("Player 2 chose Scissors!")

#possible outcomes
if user1.upper() == "R" and user2.upper() == "R":
    print("it's a draw!")
elif user1.upper() == "R" and user2.upper() == "P":
    print("Player 2 Wins!")
elif user1.upper() == "R" and user2.upper() == "S":
    print("Player 1 Wins!")
elif user2.upper() == "R" and user1.upper() == "P":
    print("Player 1 Wins!")
elif user2.upper() == "R" and user1.upper() == "S":
    print("Player 2 Wins!")

#asking players if they want to play again
restart = input("Would you like play again?:").lower()
while (restart.lower() != "no" and restart.lower() != "yes"): #if something other than yes/no is entered
    restart = input("Would you like play again?:").lower()    #ask again

if restart.lower() == "yes": #play the game again
    game()
elif restart.lower() == "no": 
    print("Thanks for playing!")