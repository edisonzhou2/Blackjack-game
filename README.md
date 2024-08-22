# Blackjack Game

Welcome to the **Blackjack Game**! This is a simple command-line version of the classic card game, Blackjack, written in C++.

## Features
- Player vs. Dealer: The player competes against the dealer.
- Hit or Stand: The player can choose to hit (draw another card) or stand (keep their current total).
- Dealer Logic: The dealer automatically draws cards until their total is 17 or higher.
- Bust Detection: If either the player or dealer goes over 21, they bust and lose the game.
- Win/Loss Logic: The game automatically determines the winner based on the final totals.

## How to Play
1. **Initial Deal:**
   - The game starts by dealing two cards to both the player and the dealer.
   - The player’s and dealer’s initial card values are displayed.

2. **Player’s Turn:**
   - The player can choose to either hit (draw a new card) or stand (keep the current hand).
   - If the player’s total exceeds 21 after hitting, they bust and lose the game.

3. **Dealer’s Turn:**
   - The dealer automatically draws cards until their total is 17 or higher.
   - If the dealer’s total exceeds 21, the dealer busts and the player wins.

4. **Game End:**
   - The game compares the player’s total with the dealer’s total to determine the winner.
   - The result is displayed (win, loss, or tie).

## Code Explanation
- The game uses the `rand()` function to simulate card drawing by generating random numbers between 1 and 10.
- The player's total is updated each time they hit.
- The dealer's total is updated automatically based on the rules of the game.
- The game runs continuously in a loop, allowing you to play multiple rounds.

## Sample Output
```bash
Player's card is: 5
Player's card is: 7
Dealer's card is: 6
Enter 1 to hit or enter 2 to stand: 
1
Player's card is: 3
The total of the player's cards is: 15
Enter 1 to hit or enter 2 to stand: 
2
Player's total: 15
Dealer's card (in the loop): 8
Dealer's total: 14
Dealer's card (in the loop): 7
Dealer's total: 21
Dealer wins
