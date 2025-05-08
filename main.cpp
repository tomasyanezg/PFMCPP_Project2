#include <iostream>
using namespace std;

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:

int, float, double, char, bool, void


2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)

void variableDeclarations() 
{
    // example:
    int number = 2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'

    int a = 1;
    int b = 2;
    int c = 3;

    float aa = 1.1f;
    float ab = 2.5666f;
    float ac = 3.14f;

    double ba = 1.1;
    double bb = 3.222;
    double bc = 92.999;

    char ca = 'c';
    char cb = 'x';
    char cc = 'z';

    bool da = true;
    bool db = false;
    bool dc = true;

    ignoreUnused(number, a, b, c, aa, ab, ac, ba, bb, bc, ca, cb, cc, da, db, dc); // passing each variable declared to the ignoreUnused() function
} 

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  // function declaration with random number of arguments, arbitrary number of arguments have default value
{   
    ignoreUnused(rentalDuration, carType);          // passing each function parameter to the ignoreUnused() function
    return {};                                      // if your function returns something other than void, add 'return                                                                                                           // {};' at the end of it.
}

/*
 1)
 */
float measureHeight(float height, int amountPatients = 5) 
{
    ignoreUnused(height, amountPatients);
    return height;
}

/*
 2)
 */
void makeBread(int amountOfBread, bool isFresh = true) 
{
     ignoreUnused(amountOfBread, isFresh);
}

/*
 3)
 */

int createSongs(int amountOfSongs, bool elecGuitar = true,
                bool elecKeyboard = false) 
{
    ignoreUnused(amountOfSongs, elecGuitar, elecKeyboard);
    return {};
}
/*
 4)
 */

char firstLetterOfName(char firstLetter, int amountOfNames,
                       bool lastName = false) 
{
    ignoreUnused(firstLetter, amountOfNames, lastName);
    return {};
}

/*
 5)
 */
double calculateMass(double volume, double density, bool isSolid = true) 
{
    ignoreUnused(volume, density, isSolid);
    return {};
}

/*
 6)
 */
void goForAWalk(int distance, bool morning = true, bool pet = false) 
{
    ignoreUnused(distance, morning, pet);
}
/*
 7)
 */
int howManyDrinks(int amountOfDrinks, int amountOfFriends,
                  bool isAlcohol = true) 
{
    ignoreUnused(amountOfDrinks, amountOfFriends, isAlcohol);
    return {};
}
/*
 8)
 */

int getPersonalInfo(int age, char gender, bool isMarried = false) 
{
    ignoreUnused(age, gender, isMarried);
    return {};
}
/*
 9)
 */
double getCheck(double amountOfMoney, bool isCash, bool isCreditCard,
                float tip) 
{
    ignoreUnused(amountOfMoney, isCash, isCreditCard, tip);
    return {};
}
/*
 10)
 */
void goToRestaurant(bool tableReserved = true, int amountOfPeople = 2,
                    bool isFamily = false) 
{
    ignoreUnused(tableReserved, amountOfPeople, isFamily);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main() 
{
  
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);

  // 1)
    auto measuredHeight = measureHeight(1.75f);
    //cout << measuredHeight << endl;
  // 2)
    makeBread(5);   
  
  // 3)
    auto createdSongs = createSongs(10);
  
  // 4)
    auto firstLetter = firstLetterOfName('a', 2);
   
  // 5)
    auto calculatedMass = calculateMass(300.0, 10.5);
   
  // 6)
    goForAWalk(5);
  // 7)
    auto barDrinks = howManyDrinks(5, 10);
   
  // 8)
    auto personalInfo = getPersonalInfo(36, 'f');
   
  // 9)
    auto bill = getCheck(256.68, false, true, 22);
   
  // 10)
    goToRestaurant();

    ignoreUnused(carRented, measuredHeight, createdSongs, firstLetter, calculatedMass, barDrinks, personalInfo, bill);
    std::cout << "good to go!" << std::endl;

    return 0;
}



