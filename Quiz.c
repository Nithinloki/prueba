int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Quiz!\n");
    printf("We'll have 5 topics\nEach topic having 3 questions\nEach question carrying 1 mark.\n");
    printf("ALL THE BEST!!!\n\n");

    printf("Let's begin with a quiz on C programming\n\n");
    
    // Question 1
    printf("Question 1: What does 'printf' do?\n");
    printf("A. Reads input from user\nB. Prints output to the console\nC. Performs mathematical calculations\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\nQuestion 2: Which symbol is used for comments in C?\n");
    printf("A. //\nB. /* */\nC. #\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\nQuestion 3: What is the format specifier for a character in 'printf'?\n");
    printf("A. %%d\nB. %%f\nC. %%c\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nLet's move on to a quiz on Mathematics\n\n");

    // Question 1
    printf("\nQuestion 1: What is the result of 2^8?\n");
    printf("A. 256\nB. 512\nC. 1024\nD. 2048\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\nQuestion 2: What is the square root of 169?\n");
    printf("A. 12\nB. 13\nC. 14\nD. 15\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\nQuestion 3: What is the value of 3! (3 factorial)?\n");
    printf("A. 3\nB. 6\nC. 9\nD. 6\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }


    printf("Let's begin with a quiz on Geometry \n\n");
    
    // Question 1: Area of square
    printf("Question 1: What is the formula for the area of a square?\n");
    printf("A. side * side\nB. side + side\nC. 2 * side\nD. side / 2\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2: Pythagoras theorem
    printf("\nQuestion 2: In the Pythagorean theorem, which side represents the hypotenuse?\n");
    printf("A. Opposite side\nB. Adjacent side\nC. Longest side\nD. Shortest side\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3: Perimeter of rectangle
    printf("\nQuestion 3: What is the formula for the perimeter of a rectangle?\n");
    printf("A. length + width\nB. 2 * length + 2 * width\nC. length * width\nD. 2 * length * width\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

printf("Let's begin with a General Knowledge quiz\n\n");

    // Question 1
    printf("Question 1: What is the capital city of France?\n");
    printf("A. Paris\nB. London\nC. Berlin\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\nQuestion 2: Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Jupiter\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\nQuestion 3: Who painted the Mona Lisa?\n");
    printf("A. Vincent van Gogh\nB. Leonardo da Vinci\nC. Pablo Picasso\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("\nLet's begin with a quiz on Science\n\n");

    // Question 1: Physics
    printf("Question 1: What is the SI unit of force?\n");
    printf("A. Watt\nB. Newton\nC. Joule\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 2: Chemistry
    printf("\nQuestion 2: What is the chemical symbol for water?\n");
    printf("A. H2O\nB. CO2\nC. O2\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    // Question 3: Biology
    printf("\nQuestion 3: What is the powerhouse of the cell?\n");
    printf("A. Nucleus\nB. Mitochondria\nC. Ribosome\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }

    printf("\nTopic ended.\nWELL DONE!!!\nYour score: %d/15\n", score);

}
