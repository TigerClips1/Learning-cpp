#include <iostream>
#include <cmath>

using namespace std;

//intro

/*int main() { 
    cout << "Hello World!" << endl;
    return 0;
}
*/

//Drawing shape using print statement

/*int main2 () 
{
    cout << "   / |" << endl; //cout mean console out and endl mean end line in C++ terms
    cout << "  /  |" << endl;
    cout << " /   |" << endl;
    cout << "/_ _ |" << endl;

    return 0;
}
*/

//Variables

/*int main3() {
    
    *string CharacterName = "Tom";
    *int CharacterAge;
    *CharacterAge = 50;
    *
    *cout << "There once was a man name " << CharacterName << endl;
    *cout << "He was "<< CharacterAge << " years old" << endl;
    *
    *CharacterName = "Mike";
    *cout << "He liked the name " << CharacterName << endl;
    *cout << "But did not like being " << CharacterAge << endl;
    *
    *return 0;
*}
*/

//Data Types

/*int main4()
{

    char grade = "A";
    string phrase = "Giraffe Academy";
    int age = 50;
    int age_negative = -50;
    float e = 25; //float in python C/C++ i just don't get fun fact
    double gpa = 4.5;
    bool isMale = true; // or false bool is bool like python
    
    /*
    all data type i found online about C++
    
    short int  2-32,768 to 32,767
    
    unsigned short int 2 0 to 65,535
    
    unsigned int 4 0 to 4,294,967,295
    
    int 4 -2,147,483,648 to 2,147,483,647
    
    long int 4 -2,147,483,648 to 2,147,483,647
    
    unsigned long int 4 0 to 4,294,967,295
    
    long long int 8 -(2^63) to (2^63)-1
    
    unsigned long long int 8 0 to 18,446,744,073,709,551,615
    
    signed char 1 -128 to 127
    
    unsigned char 1 0 to 255

    float 4 -3.4×10^38 to 3.4×10^38

    double 8-1.7×10^308 to1.7×10^308

    long double 12-1.1×10^4932 to1.1×10^4932

    wchar_t 2 or 4 1 wide character
    

    return 0;
}
*/

// Working with Strings

/*int main4()
*{
    *string phrase = "Giraffe Academy";
    *string phrases;
    *phrases = phrase.substr(8, 3 );
    *or you can use phrase.length() to see the full text
    *phrase [0] = 'w';
    *cout << phrase.find("Academy", 0) << endl; //endl is \n but high C++ cout make so much stuff easy
    *cout << phrases << endl;
    *cout << "Hello" << endl;

    return 0;
*}
*/

// you can also use printf in C++ By the way don't remember what lib to include

// Working With Numbers

//int main5()
//{

    //int wnum = 5;
    //double dnum = 5.5;
    //wnum++;  //work the same in C By the 
    /*+= or you can do -= or you can do *= or /= work the same in C By The Way*/
    //wnum += 80;
    //cout << wnum << endl;
    //cout << -40 << endl;
    //cout << 40 << endl;
    //cout << -40.0982 << endl;
    //cout << (4 + 5) * 10 << endl; 
    //cout << 5.5 + 9 << endl;
    //cout << 10/3 << endl;
    //cout << pow(3, 3) << endl;
    //cout << sqrt(36) << endl;
    //cout << round(4.6) << endl;
    //cout << ceil(4.6) << endl;
    //cout << floor(4.6) << endl;
    //cout << fmax(3, 10) << endl;
    //cout << fmin(10, 41) << endl;
    /*jut google math function i can't name all of them it will be too much typing and one is pi 3.14*/
    /* the math you cn do is 
      + adding
      - subtracting
      * mutiple
      / devid
      % remainder
      much more
      like PEMDAS
      also all this math is the same in C just type #include <math>
      */

    //return 0;
//}

// Getting User Input 

/*int main6 () {
    // i love cout and cin make it so easy to get user input compare to printf
    string name; // or double will work or char or string will work
    cout << "Enter your name: ";
    getline(cin, name);
    //cin >> age;
    cout << "Hello " << name << endl;

    //cout << " you are " << age << " years old. " << endl;
    return 0;
}*/

// Arrays
/*int main7() {
    
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 19;

    cout << luckyNums[0] << endl; // or 2


    return 0;
}
*/

//Functions 
/*may be the same in C where you use void or int in C++*/

/*void sayhi(string name, int age);

int main8() {
    
    sayhi("Mike", 60);
    
    return 0;
}

void sayhi(string name, int age)
{
    cout << "Hello " << name << " Your age " << age;
}
*/

// Return Statement

/*double cube (double num) {
    return num * num * num;
    //return result;
}

int main9() {
    
    //double answer =  cube(5.0); // old 
    cout << cube(5.0);

    return 0;
}
*/

// If Statements basic

/*this is the same in C beside the bool that a C++ only thing*/

/*int main10() {
   bool is_male = false;
   bool is_tall = false;
   
   if(is_male && is_tall) { // || or is in c++ fun
    cout << "you are a tall Male" << endl;
   } else if(is_male && !is_tall) {
    cout << "you are a short male" << endl;
   } else if(!is_male && is_tall){
    cout << "you are tall but not male" << endl; 

   } else {
    cout << "you are not a male and not tall" << endl;
   }
    return 0;
}
*/
 
// more If Statements

/*int getMax(int num1, int num2, int num3){
    int result;

    //if(num1 > num2){ // you can use >= <= == < !=
      //  result = num1;
    //} else {
      //  result = num2;
    //}

    if(num1 >= num2 && num1 >= num3) { // and you can compare double and character and float and int 
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
} 

int main11(){

    cout << getMax(200, 200, 10) << endl;

    return 0;
}
*/

//switch Statements

/*string getDay(int daynum) {
    string dayName;
    
    switch(daynum) {
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }
    
    return dayName;
}

int main12(){
    
    cout << getDay(10);

    return 0;
}
*/

//While Loops

/*int main13()
{

    int index = 6;
    do{
    
        cout << index << endl;
        index++;
    }while(index <= 5); // same syntax as C
    
    return 0;
}
*/

//for Loops

/*int main14() {
    int nums[] = {1, 2, 5, 7, 3};
    for(int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}
*/

// Exponent Function 

/*finally the new stuff in C++*/

/*int power(int baseNum, int powNum) {
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}
int main15() {
    cout << power(4, 2);

    return 0;
}
*/

// 2D Arrays & Nested Loops

/*int main16() {
    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {4, 5}
                    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    return 0;
}
*/

// Comments

/*int main17() {
    * Comment
    *long Comment
    *see
    *see
    *see
    *see
    *sorry
    *
    *
    *return 0;
*}
*/

// Pointers

/*int main18() {
    
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;
    
    //cout << "Age: " << &age << endl;
    //cout << "Gpa: " << &gpa << endl;
    //cout << "Name: " << &name << endl;
    //cout << pAge;
    //cout << *pAge;
    cout << &*&gpa;

    return 0;
}
*/

/*finally the New stuff in C++*/

// Classes & Objects

/*class Book {
    public:
        string title;
        string author;
        int pages;
};

int main20() {
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 900;
    
    
    Book book2;
    book2.title = "Mr. Robot";
    book2.author = "Sam";
    book2.pages = 3000;

    cout << book2.title;

    return 0;
}
*/

// Constructor Functions

/*class Book {
    public:
        string title;
        string author;
        int pages;
        // you can make mutiple Constructor but once again don't fell like showing you an example
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            
        }
};

int main21() {
    
    Book book1("Harry Potter", "JK Rowling", 900 );
    // you can still modifed it but i don't fell like doing it 
    Book book2("Mr. Robot", "Sam", 3000);

    cout << book1.title;

    return 0;
}
*/

//Object Functions

/*you can also use struct in C++ work the same when you do it in C and const can be use in C++ work the same as it will in C*/

/*writing file and reading file you can also o in C++ work the same in C*/

/*class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 2.0) {
                return true;
            } 
            return false;
           
        }
};

int main22() {

    Student student1("jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors();

    return 0;
}
*/

//Getters & Setters

/*class Movie {
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating) {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
            rating = aRating;
        } else {
            rating = "NR";
        }
    }

    string getRating() {
        return rating;
    }
};

int main() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("DOG000");

    cout << avengers.getRating() << std::endl;

    return 0;
}
*/

//Inheritance
/*
*class Chef { //super class
    *public:
     *   void makeChicken() {
      *      cout << "The chef makes chicken" << endl;
       * }
        *void makeSalad() {
         *   cout << "The chef makes salad" << endl;
        *}
        *void makeSpecialDish() {
         *   cout << "The chef make bbq ribs" << endl;
        *}
*};

*class ItalianChef : public Chef{ //sub class
 *   public:
  *      void makePasta() {
   *         cout << "The chef make pasta" << endl;
    *    }
     *   void makeSpecialDish() {
      *      cout << "The chef make chicken afritada" << endl;
       * }
*};

*int main() {
 *   Chef chef;
  *  chef.makeSpecialDish();
   * ItalianChef italianChef;
    *italianChef.makeSpecialDish();
  *return 0;  
*}
*/
