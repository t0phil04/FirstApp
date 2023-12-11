/*
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "QuestionsFunctions.h"
#include <random>
#include <algorithm>
#include <unordered_map>


using namespace std;

// Defined below the main function
void clear();
void wait_for_enter();
void DifficultySelector();
bool check_answer(int user_answer, const vector<int>& correct_answers, int i);

void easy_mode();
int medium_mode();
int hard_mode();
vector<int> shuffleAnswers(vector<vector<string>> questions_original, vector <vector<string>> current_bank, vector<int> correct_answers);



    int final_score = 0;
   
  



void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Press enter to continue function
void wait_for_enter() {
    cout << "Press enter to keep the show going!";
    cin.ignore();
    cin.get();
}



// Difficulty selection function
void DifficultySelector() {
    int difficulty = 0; // Sets initial difficulty to zero

    cout << "Welcome to the quiz!\nPlease choose a difficulty by entering it's value:" << endl;
    cout << "Easy = 1\nMedium = 2\nHard = 3\n";
    cin >> difficulty;
    // Nested if statements to run the associated difficulty functions.
    // Easy difficulty
    if (difficulty == 1) {
        cout << "\nYou have chosen the easy difficulty\n" << endl;
        wait_for_enter();
        clear();
        easy_mode();
    }
    // Medium difficulty
    else if (difficulty == 2) {
        cout << "\nYou have chosen the medium difficulty\n" << endl;
        wait_for_enter();
        clear();
        medium_mode();
    }
    // Hard difficulty
    else if (difficulty == 3) {
        cout << "\nYou have chosen the hard difficulty\n" << endl;
        wait_for_enter();
        clear();
        hard_mode();
    }

}

// Easy mode function
void easy_mode() {
    int answer;
    bool is_answer_correct = false;
    int category_count = 3;
    int category_chosen_count = 0;
    int categories_chosen[3] = { 1, 2, 3 };
    // ***** Answers for Categories *****
    vector<int> correct_answer_movies = { 1, 1, 2, 3, 2, 4, 3, 1, 3, 2 };
    vector<int> correct_answer_science = { 2, 4, 1, 4, 1, 3, 1, 3, 1, 1 };
    vector<int> correct_answer_history = { 2, 2, 2, 3, 2, 2, 2, 3, 3, 2 };
    // **********************************
    vector<vector<string>> current_bank;

    random_device randomizer;
    mt19937 g(randomizer());

    bool should_quit = false;
    // Loop to output questions
    while (!should_quit) {
        for (int k = 0; k < category_count; k++) {
            int category_name = 0;
            cout << "Which Category would you like to choose from?\n(Please enter a number)" << endl;
            cout << " 1. Movies\n 2. Science\n 3. History\n \n ****Press 0 to end the game, we will miss you!" << endl;
            cin >> category_name;
            if (category_name == 0) {
                should_quit = true;
                cout << "Play again soon!" << endl;
                break;
            }

            wait_for_enter();
            clear();

            // First if Statement is for the Movie Questionaire
            if (category_name == 1) {
                vector<vector<string>> temp_bank = question_bank_movies();
                current_bank = question_bank_movies();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_movies);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;
                    wait_for_enter();
                    clear();

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                    }
                    else {
                        cout << "Incorrect! Try again!" << endl;
                        cout << current_bank[i][0] << endl;

                        // *** Start Loop to re-ask user the question if they got it wrong
                        for (int j = 1; j < current_bank[i].size(); j++) {
                            cout << current_bank[i][j] << endl;
                        }
                        cin >> answer;
                        is_answer_correct = check_answer(answer, shuffled_answers, i);
                        // *** Checks if second answer is correct
                        if (is_answer_correct == true) {
                            cout << "You got it! Let's see if you can get the next one!" << endl;
                            wait_for_enter();
                            clear();
                        }
                        else {
                            cout << "Looks like you got it wrong again! No worries, let's just move on to the next one!" << endl;
                            wait_for_enter();
                            clear();
                        }
                    }
                }
            } // Second if-Statement is for the Science Questionaire
            else if (category_name == 2) {

                vector<vector<string>> temp_bank = question_bank_science();
                current_bank = question_bank_science();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_science);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time
                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;
                    wait_for_enter();
                    clear();

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                    }
                    else { cout << "Incorrect! Maybe next time!" << endl; }
                }
            } // Third if statement is for the History questionaire
            else {
                vector<vector<string>> temp_bank = question_bank_history();
                current_bank = question_bank_history();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_history);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time
                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;
                    wait_for_enter();
                    clear();

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                    }
                    else { cout << "Incorrect! Maybe next time!" << endl; }
                }
            }
        }
    }
}

// Medium mode function
int medium_mode() {
    int points = 0;
    int answer;
    bool is_answer_correct = false;
    int category_count = 3;
    int category_chosen_count = 0;
    int categories_chosen[3] = { 1, 2, 3 };
    // ***** Answers for Categories *****
    vector<int> correct_answer_movies = { 1, 1, 2, 3, 2, 4, 3, 1, 3, 2 };
    vector<int> correct_answer_science = { 2, 4, 1, 4, 1, 3, 1, 3, 1, 1 };
    vector<int> correct_answer_history = { 2, 2, 2, 3, 2, 2, 2, 3, 3, 2 };
    // **********************************
    vector<vector<string>> current_bank;

    random_device randomizer;
    mt19937 g(randomizer());

    bool should_quit = false;
    // Loop to output questions
    while (!should_quit) {
        for (int k = 0; k < category_count; k++) {
            int category_name = 0;
            cout << "Which Category would you like to choose from?\n(Please enter a number)" << endl;
            cout << " 1. Movies\n 2. Science\n 3. History\n \n ****Press 0 to end the game, we will miss you!" << endl;
            cin >> category_name;
            if (category_name == 0) {
                should_quit = true;
                cout << "Play again soon!" << endl;
                break;
            }
            wait_for_enter();
            clear();

            // First if Statement is for the Movie Questionaire
            if (category_name == 1) {
                vector<vector<string>> temp_bank = question_bank_movies();
                current_bank = question_bank_movies();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_movies);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);

                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Try again!" << endl;
                        wait_for_enter();
                        clear();
                        cout << current_bank[i][0] << endl;


                        // *** Start Loop to re-ask user the question if they got it wrong
                        for (int j = 1; j < current_bank[i].size(); j++) {
                            cout << current_bank[i][j] << endl;
                        }
                        cin >> answer;
                        is_answer_correct = check_answer(answer, shuffled_answers, i);
                        // *** Checks if second answer is correct
                        if (is_answer_correct == true) {
                            cout << "Nice! You get 5 points for second tries!" << endl;
                            points += 5;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }
                        else {
                            cout << "Looks like you got it wrong again! Minus 10 points!" << endl;
                            points -= 10;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }
                        // *** Ends loop to re-ask user the question
                    }
                }
            } // Second if Statement is for the Science Questionaire
            else if (category_name == 2)
            {
                vector<vector<string>> temp_bank = question_bank_science();
                current_bank = question_bank_science();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_science);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);

                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Try again!" << endl;
                        wait_for_enter();
                        clear();
                        cout << current_bank[i][0] << endl;

                        // *** Start Loop to re-ask user the question if they got it wrong
                        for (int j = 1; j < current_bank[i].size(); j++) {
                            cout << current_bank[i][j] << endl;
                        }
                        cin >> answer;
                        is_answer_correct = check_answer(answer, shuffled_answers, i);
                        if (is_answer_correct == true) {
                            cout << "Nice! You get 5 points for second tries!" << endl;
                            points += 5;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }
                        else {
                            cout << "Looks like you got it wrong again! Minus 10 points!" << endl;
                            points -= 10;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }
                        // *** Ends loop to re-ask user the question
                    }
                }
            }
            else // Third if Statement is for the History Questionaire
            {
                vector<vector<string>> temp_bank = question_bank_history();
                current_bank = question_bank_history();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_history);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);

                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Try again!" << endl;
                        wait_for_enter();
                        clear();
                        cout << current_bank[i][0] << endl;

                        for (int j = 1; j < current_bank[i].size(); j++) {
                            cout << current_bank[i][j] << endl;
                        }
                        cin >> answer;
                        is_answer_correct = check_answer(answer, shuffled_answers, i);
                        // *** Checks if second answer is correct
                        if (is_answer_correct == true) {
                            cout << "Nice! You get 5 points for second tries!" << endl;
                            points += 5;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }
                        else {
                            cout << "Looks like you got it wrong again! Minus 10 points!" << endl;
                            points -= 10;
                            cout << "You new total score is: " << points << " points." << endl;
                            wait_for_enter();
                            clear();
                        }

                    } // *** Ends loop to re-ask user the question
                }
            }
        }
    }
    return points;
}

// Hard mode function
int hard_mode() {
    int points = 0;
    int answer;
    bool is_answer_correct = false;
    int category_count = 3;
    int try_again;
    int category_chosen_count = 0;
    int categories_chosen[3] = { 1, 2, 3 };
    // ***** Answers for Categories *****
    vector<int> correct_answer_movies = { 1, 1, 2, 3, 2, 4, 3, 1, 3, 2 };
    vector<int> correct_answer_science = { 2, 4, 1, 4, 1, 3, 1, 3, 1, 1 };
    vector<int> correct_answer_history = { 2, 2, 2, 3, 2, 2, 2, 3, 3, 2 };
    // **********************************
    vector<vector<string>> current_bank;

    random_device randomizer;
    mt19937 g(randomizer());

    bool should_quit = false;
    // Loop outputs questions
    while (!should_quit) {
        for (int k = 0; k < category_count; k++) {
            int category_name = 0;
            cout << "Which Category would you like to choose from?\n(Please enter a number)" << endl;
            cout << " 1. Movies\n 2. Science\n 3. History\n \n ****Press 0 to end the game, we will miss you!" << endl;
            cin >> category_name;
            if (category_name == 0) {
                should_quit = true;
                cout << "Play again soon!" << endl;
                break;
            }
            wait_for_enter();
            clear();

            // First if Statement is for the Movie Questionaire
            if (category_name == 1) {
                vector<vector<string>> temp_bank = question_bank_movies();
                current_bank = question_bank_movies();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_movies);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    //bool check_recycle = recycle_question();
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Minus 10 points!" << endl;
                        points -= 10;
                        cout << "You lost 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    if (points < 0) {
                        cout << "Oh no! You have lost all points and lost hard mode.\n Try again?\n 1 = Yes, 2 = No" << endl;
                        cin >> try_again;
                        if (try_again == 1) {
                            wait_for_enter();
                            clear();
                            DifficultySelector();
                        }
                        else if (try_again == 2) {
                            cout << "Thanks for playing!";
                            return 0;
                        }
                    }
                }
            } // Second if Statement is for the Science Questionaire
            else if (category_name == 2)
            {
                vector<vector<string>> temp_bank = question_bank_science();
                current_bank = question_bank_science();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_science);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    //bool check_recycle = recycle_question();
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Minus 10 points!" << endl;
                        points -= 10;
                        cout << "You lost 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    if (points < 0) {
                        cout << "Oh no! You have lost all points and lost hard mode.\n Try again?\n 1 = Yes, 2 = No" << endl;
                        cin >> try_again;
                        if (try_again == 1) {
                            wait_for_enter();
                            clear();
                            DifficultySelector();
                        }
                        else if (try_again == 2) {
                            cout << "Thanks for playing!";
                            return 0;
                        }
                    }
                }
            } // Last if statement is for the History Questions
            else
            {
                vector<vector<string>> temp_bank = question_bank_history();
                current_bank = question_bank_history();
                shuffle(current_bank.begin(), current_bank.end(), g);
                vector<int> shuffled_answers = shuffleAnswers(temp_bank, current_bank, correct_answer_history);

                for (int i = 0; i < current_bank.size(); i++) {
                    // Output one question at a time and randamizes it

                    cout << current_bank[i][0] << endl;

                    // Output answer options
                    for (int j = 1; j < current_bank[i].size(); j++) {
                        cout << current_bank[i][j] << endl;
                    }

                    // Get user input
                    cin >> answer;

                    // Check if the answer is correct
                    is_answer_correct = check_answer(answer, shuffled_answers, i);
                    //bool check_recycle = recycle_question();
                    if (is_answer_correct == true)
                    {
                        cout << "Correct! Go get the next one!" << endl;
                        points += 10;
                        cout << "You earned 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    else {
                        cout << "Incorrect! Minus 10 points!" << endl;
                        points -= 10;
                        cout << "You lost 10 Points!\nYou now have: " << points << " points." << endl;
                        wait_for_enter();
                        clear();
                    }
                    if (points < 0) {
                        cout << "Oh no! You have lost all points and lost hard mode.\n Try again?\n 1 = Yes, 2 = No" << endl;
                        cin >> try_again;
                        if (try_again == 1) {
                            wait_for_enter();
                            clear();
                            DifficultySelector();
                        }
                        else if (try_again == 2) {
                            cout << "Thanks for playing!";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return points;
}

// Checks if user answer is the same as the correct answer
bool check_answer(int user_answer, const vector<int>& correct_answers, int question_index) {
    if (user_answer == correct_answers[question_index]) {
        return true;
    }
    return false;
}

vector<int> shuffleAnswers(vector<vector<string>> questions_original, vector<vector<string>> current_bank, vector<int> correct_answers) {
    // create a mapping of each question in the original bank to its index
    unordered_map<string, int> original_question_index;
    for (int i = 0; i < questions_original.size(); i++) {
        original_question_index[questions_original[i][0]] = i;
    }

    // create a mapping of each question in the current bank to its index
    unordered_map<string, int> current_question_index;
    for (int i = 0; i < current_bank.size(); i++) {
        current_question_index[current_bank[i][0]] = i;
    }

    // create a vector to store the new answer key
    vector<int> new_answer_key(current_bank.size());

    // iterate through each question in the current bank
    for (int i = 0; i < current_bank.size(); i++) {
        // find the corresponding index of the question in the original bank using the original_question_index map
        int original_index = original_question_index[current_bank[i][0]];
        // use the original index to retrieve the correct answer from the original answer key
        // and add it to the new answer key at the current index i
        new_answer_key[i] = correct_answers[original_index];
    }

    // return the new answer key
    return new_answer_key;
}
*/