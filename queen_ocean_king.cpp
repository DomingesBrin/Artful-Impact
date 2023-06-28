#include <iostream> 

using namespace std; 

// This program will demonstrate the artful impact of coding. 
int main() 
{ 
    // Declare and initialize variables
    int num1 = 5, num2 = 10; 
    double num3 = 7.5; 
    
    // Print out the initial values of the variables
    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 
    
    // Add 5 to each of the variables
    num1 += 5; 
    num2 += 5; 
    num3 += 5; 
    
    // Print out the new values of the variables
    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 
    
    // Subtract the initial values of the variables
    num1 -= 5; 
    num2 -= 5; 
    num3 -= 5; 
    
    // Print out the final values of the variables
    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 
    
    // Multiply each of the variables by 10
    num1 *= 10; 
    num2 *= 10; 
    num3 *= 10; 
    
    // Print out the new values of the variables
    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 
    
    // Divide each of the variables by 5
    num1 /= 5; 
    num2 /= 5; 
    num3 /= 5; 
    
    // Print out the final values of the variables
    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 
    
    // Calculate the sum of the three variables
    int sum = num1 + num2 + num3; 
    
    // Print out the sum of the variables
    cout << "The sum of num1, num2, and num3 is: " << sum << endl; 
    
    // Calculate the product of the three variables
    int product = num1 * num2 * num3; 
    
    // Print out the product of the variables
    cout << "The product of num1, num2, and num3 is: " << product << endl; 
    
    // Calculate the average of the three variables
    double average = (double)(num1 + num2 + num3) / 3; 
    
    // Print out the average of the variables
    cout << "The average of num1, num2, and num3 is: " << average << endl; 
    
    // Calculate the largest of the three variables
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3); 
    
    // Print out the largest of the variables
    cout << "The largest of num1, num2, and num3 is: " << largest << endl; 
    
    // Calculate the smallest of the three variables
    int smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3); 
    
    // Print out the smallest of the variables
    cout << "The smallest of num1, num2, and num3 is: " << smallest << endl; 
    
    // Calculate and print out the exponent of num1 
    int exponent = 1; 
    for(int i = 1; i <= num1; i++) { 
        exponent *= 2; 
    }
    cout << "num1 to the power of 2 is: " << exponent << endl; 
    
    // Calculate and print out the square root of num2
    double sqrt = num2 / 2; 
    while((sqrt * sqrt) - num2 > 0.0000000000001) { 
        sqrt = (sqrt + (num2 / sqrt)) / 2; 
    }
    cout << "The square root of num2 is: " << sqrt << endl; 
    
    // Calculate and print out the cube root of num3
    double cbrt = num3 / 3; 
    while((cbrt * cbrt * cbrt) - num3 > 0.0000000000001) { 
        cbrt = (2 * cbrt + num3 / (cbrt * cbrt)) / 3;
    }
    cout << "The cube root of num3 is: " << cbrt << endl; 
    
    // Print out a message about the artful impact of coding
    cout << "Coding can have a powerful and artful impact on the outcome of a program!" << endl; 
    
    return 0; 
}