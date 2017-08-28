Start guessing game:
    player's points is equal to 10
    pick random number one
    pick random number two with random number one as minimum number
    pick random number three from between random number one and random number two
    type "I am thinking of a random number between (random number one) and (random number two)"
    Start user input:
        receive input from user
        if input is lower than random number three:
            type "higher"
            player's points minus 1
            start user input again
        if input is higher than random number three:
            type "lower"
            player's points minus 1
            start user input again
        if input is greater than random number two:
            type "number is out of bounds"
            start user input again
        if input is lower than random number one:
            type "number is out of bounds"
            start user input again
        if input is not a number:
            type "character is not a number"
            start user input again
        if input is equal to random number three and player's points are greater than zero:
            type "That's correct! You got (player's points) points!"
        if input is equal to random number three and player's points are zero or less than zero:
            type "That's correct! You got zero points!"
type "Would you like to play again?"
receive input from user
if input is "yes":
    start guessing game again
if input is "no":
    type "Goodbye!"
    wait 2 seconds
    end program
if input is anything else:
    type "I'm sorry, what?"
type "Would you like to play again?"
receive input from user
if input is "yes":
    start guessing game again
if input is "no":
    type "Goodbye!"
    wait 2 seconds
    end program
if input is anything else:
    type "I'm sorry, what?"
type "Would you like to play again?"
receive input from user
if input is "yes":
    start guessing game again
if input is "no":
    type "Goodbye!"
    wait 2 seconds
    end program
if input is anything else:
    type "Okay then, bye..."
    wait 2 seconds
    end program