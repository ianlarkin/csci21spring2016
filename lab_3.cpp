/*
 * Name        : lab_3.cpp
 * Author      : Ian Larkin
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
    if(item == "porridge") {
        if(number == 1) {
            return "This porridge is too hot";
        } else if(number == 2) {
            return "This porridge is too cold";
        } else {
            return "This porridge is just right";
        }
    } else if(item == "chair") {
        if(number == 1) {
            return "This chair is too big";
        } else if(number == 2) {
            return "This chair is too small";
        } else {
            return "This chair is just right";
        }
    } else {
        if(number == 1) {
            return "This bed is too hard";
        } else if(number == 2) {
            return "This bed is too small";
        } else {
            return "This bed is just right";
        }
    }
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
    switch(toupper(player_one)){
        case 'R':
            if(toupper(player_two) == 'S') {
                return 1;
            } else if(toupper(player_two) == 'P') {
                return 2;
            } else {
                return 3;
            }
            break;
        case 'S':
            if(toupper(player_two) == 'P') {
                return 1;
            } else if(toupper(player_two) == 'R') {
                return 2;
            } else {
                return 3;
            }
            break;
        case 'P':
            if(toupper(player_two) == 'R') {
                return 1;
            } else if(toupper(player_two) == 'S') {
                return 2;
            } else {
                return 3;
            }
            break;
        default:
            return 0;
        
        }
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
    for(unsigned int i = 0; i < input.length(); i++) {
        input[i] = tolower(input[i]);
    }
    return input;
    
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
    for(unsigned int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
    }
    return input;
    
}
int main() {
    return 0;
}