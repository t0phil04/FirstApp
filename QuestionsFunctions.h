/*
#ifndef QUESTIONSFUNCTIONS_HPP
#define QUESTIONSFUNCTIONS_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;
// This function assigns the movie questions and each of its 4 associated answer choices
vector<vector<string>> question_bank_movies() {
    vector<vector<string>> movie_questions_and_answers;
    vector<string> questions = {
        // Questions
        "Who directed the 1994 movie \"Pulp Fiction?\"",
        "What is the name of the 1985 movie in which Michael J. Fox travels back in time in a DeLorean?",
        "What is the name of the character played by Brad Pitt in the 1999 movie Fight Club?",
        "Who directed the 1979 movie Apocalypse Now?",
        "Which movie features the character of Jules Winnfield played by Samuel L. Jackson?",
        "Who played the lead role of Travis Bickle in the 1976 movie Taxi Driver?",
        "Which movie won the most Academy Awards in a single year?",
        "Which actor has won the most Academy Awards for Best Actor in a Leading Role?",
        "Which movie features the character of Anton Chigurh, played by Javier Bardem?",
        "Which 2010 movie directed by Darren Aronofsky stars Natalie Portman as a ballerina struggling with mental health issues?"
    };

    vector<vector<string>> answer_options = {
        // Answers to question 1
        {"1.) Quentin Tarantino","2.) Martin Scorsese","3.) Steven Spielberg","4.) Ridley Scott"},
        // Answers to question 2
        {"1.) Back to the Future","2.) Ghostbusters","3.) The Terminator","4.) Indiana Jones and the Temple of Doom"},
        // Answers to Question 3
        {"1.) The Narrator","2.) Tyler Durden"," 3.) Robert Paulson"," 4.) Donnie Brasco"},
        // Answers to question 4
        {"1.) Martin Scorsese","2.) Stanley Kubrick","3.) Francis Ford Coppola","4.) Oliver Stone"},
        // Answers to question 5
        {"1.) Jackie Brown","2.) Pulp Fiction","3.) Reservoir Dogs","4.) Kill Bill: Vol. 1"},
        // Answers to Question 6
        {"1.) Al Pacino","2.) Dustin Hoffman"," 3.) Jack Nicholson"," 4.) Robert De Niro"},
        // Answers to question 7
        {"1.) Ben-Hur (1959)","2.) Titanic (1997)","3.) The Lord of the Rings: The Return of the King (2003)","4.) La La Land (2016)"},
        // Answers to question 8
        {"1.) Daniel Day-Lewis","2.) Marlon Brando","3.) Tom Hanks","4.) Jack Nicholson"},
        // Answers to Question 9
        {"1.) A Serious Man","2.) The Ballad of Buster Scruggs"," 3.) RNo Country for Old Men"," 4.) True Grit"},
        // Answers to Question 10
        {"1.) The Wrestler","2.) Black Swan"," 3.) Requiem for a Dream"," 4.) Mother!"}
    };

    for (int i = 0; i < questions.size(); i++) {
        vector<string> question_and_answer_options;
        question_and_answer_options.push_back(questions[i]);
        for (int j = 0; j < answer_options[i].size(); j++) {
            question_and_answer_options.push_back(answer_options[i][j]);
        }
        movie_questions_and_answers.push_back(question_and_answer_options);
    }

    return movie_questions_and_answers;
}
// This function assigns the Science Questions and each of its 4 associated answer choices
vector<vector<string>> question_bank_science() {
    vector<vector<string>> science_questions_and_answers;
    vector<string> questions = {
        // Questions
        "What is the smallest planet in our solar system?",
        "What is the largest organ in the human body?",
        "What is the smallest unit of matter?",
        "What is the unit of measurement for electric current?",
        "What is the process called by which a cell divides into two identical daughter cells?",
        "What is the name of the phenomenon where light bends as it passes through a medium with a different refractive index?",
        "What is the name of the process by which a gas turns into a liquid?",
        "What is the name of the force that opposes motion between two surfaces in contact?",
        "What is the name of the process by which an atom loses or gains electrons and becomes charged?",
        "What is the name of the process by which an animal sheds its outer layer of skin or exoskeleton?"
    };

    vector<vector<string>> answer_options = {
        // Answers to question 1
        {"1.) Earth","2.) Mercury","3.) Venus","4.) Mars"},
        // Answers to question 2
        {"1.) Heart","2.) Brain","3.) Lungs","4.) Skin"},
        // Answers to Question 3
        {"1.) Atom","2.) Proton"," 3.) Molecule"," 4.) Cell"},
        // Answers to question 4
        {"1.) Joule","2.) Watt","3.) Volt","4.) Ampere"},
        // Answers to question 5
        {"1.) Mitosis","2.) Meiosis","3.) Cytokinesis","4.) Prophase"},
        // Answers to Question 6
        {"1.) Reflection","2.) Diffraction"," 3.) Refraction"," 4.) Interference"},
        // Answers to Question 7
        {"1.) Condensation","2.) Vaporization"," 3.) Sublimation"," 4.) Deposition"},
        // Answers to question 8
        {"1.) Gravitational force","2.) Electromagnetic force","3.) Frictional force","4.) Nuclear force"},
        // Answers to question 9
        {"1.) Ionization","2.) Fusion","3.) Fission","4.) Vaporization"},
        // Answers to Question 10
        {"1.) Moulting","2.) Metamorphosis"," 3.) Regeneration"," 4.) Reproduction"}
    };
    for (int i = 0; i < questions.size(); i++) {
        vector<string> question_and_answer_options;
        question_and_answer_options.push_back(questions[i]);
        for (int j = 0; j < answer_options[i].size(); j++) {
            question_and_answer_options.push_back(answer_options[i][j]);
        }
        science_questions_and_answers.push_back(question_and_answer_options);
    }

    return science_questions_and_answers;
}
// This function assigns the History Questions and each of its 4 associated answer choices
vector<vector<string>> question_bank_history() {
    vector<vector<string>> history_questions_and_answers;
    vector<string> questions = {
        // Questions
        "In what year did World War 1 end?",
        "Who was the first emperor of Rome?",
        "Who was the first woman to fly solo across the Atlantic Ocean?",
        "What year did the Berlin Wall fall?",
        "Who was the first president of the United States?",
        "Who wrote the Communist Manifesto?",
        "What was the name of the US spy plane shot down over the Soviet Union in 1960?",
        "Who was the leader of the Soviet Union during World War II?",
        "What is the significance of the Battle of Waterloo?",
        "Who was the first African American to serve as president of the United States?"
    };

    vector<vector<string>> answer_options = {
        // Answers to question 1
        {"1.) 1914","2.) 1916","3.) 1918","4.) 1920"},
        // Answers to question 2
        {"1.) Julius Caesar","2.) Augustus","3.) Nero","4.) Trajan"},
        // Answers to Question 3
        {"1.) Bessie Coleman","2.) Amelia Earhart"," 3.) Sally Ride"," 4.) Harriet Quimby"},
        // Answers to question 4
        {"1.) 1985","2.) 1987","3.) 1989","4.) 1991"},
        // Answers to question 5
        {"1.) Thomas Jefferson","2.) George Washington","3.) John Adams","4.) Abraham Lincoln"},
        // Answers to Question 6
        {"1.) Vladimir Lenin","2.) Karl Marx"," 3.) Joseph Stalin"," 4.) Leon Trotsky"},
        // Answers to Question 7
        {"1.) U-1","2.) U-2"," 3.) U-3"," 4.) SR-71"},
        // Answers to question 8
        {"1.) Vladimir Putin","2.) Nikita Khrushchev","3.) Joseph Stalin","4.) Leonid Brezhnev"},
        // Answers to question 9
        {"1.) It marked the beginning of World War I","2.) It marked the end of the American Revolution","3.) It marked the end of the Napoleonic Wars","4.) It marked the beginning of the French Revolution"},
        // Answers to Question 10
        {"1.) Condoleezza Rice","2.) Barack Obama"," 3.) Colin Powell"," 4.) Kamala Harris"}
    };

    for (int i = 0; i < questions.size(); i++) {
        vector<string> question_and_answer_options;
        question_and_answer_options.push_back(questions[i]);
        for (int j = 0; j < answer_options[i].size(); j++) {
            question_and_answer_options.push_back(answer_options[i][j]);
        }
        history_questions_and_answers.push_back(question_and_answer_options);
    }

    return history_questions_and_answers;
}

#endif QUESTIONSFUNCTIONS_HPP
*/