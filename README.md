
# Fundamentals_of_Programming - Lab 7: Loops, Largest and Smallest Values — Build, Test, and Explain with AI

# Course Section
## CIS-165-B030

## Initial Plans for Largest and Smallest Values Program
### min_max.cpp
My plan is to use integer variables in order to store the numbers entered by the user & keep track of the smallest and largest values. I will also use a Boolean variable called has_data to determine whether any numbers have been entered. I will then use a while loop to read the numbers entered continuously until -99 is entered. I also will initialize the smallest and largest variables using the first actual number entered. For every additional number, I will compare it with both variables and update when needed. Lastly, I will either display the smallest and largest values or a message indicating no data was entered.

## Testing the Programs
| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Min/Max — positive numbers | 8, 3, 12, -99 | Smallest = 3; Largest = 12 | Smallest = 3; Largest = 12 | Match |
| Min/Max — negative numbers | -8, -3, -12, -99 | Smallest = -12; Largest = -3 | Smallest = -12; Largest = -3 | Match |
| Min/Max — single value | 5, -99 | Smallest = 5; Largest = 5 | Smallest = 5; Largest = 5 | Match |
| Min/Max — zero values | 0, 0, -99 | Smallest = 0; Largest = 0 | Smallest = 0; Largest = 0 | Match |
| Min/Max — no data values | -99 | No data values entered | No data values entered | Match |
| Min/Max — changed values | 14, 2, 19, -4, -99 | Smallest = -4; Largest = 19 | Smallest = -4; Largest = 19 | Match |

## Explaining my code

### Min/Max — Trace one series through the loop, showing when the extrema are initialized and updated.
In my test, I used 8, 3, 12, and -99. First, both smallest and largest are initialized to 8. Next, 3 is entered, so the smallest value is updated to 3. Then, 12 is entered, so the largest value is updated to 12. Finally, -99 stops the loop, and the program displays 3 as the smallest and 12 as the largest.

### Min/Max — How does your code keep -99 out of the calculations?
The while loop checks whether the entered number is different from -99. When -99 is entered, the loop stops before processing it, therefore, it is not included in the calculations.

### Min/Max — Why is initializing both extrema to zero incorrect for some series?
Initializing both variables to zero can produce incorrect results when all the numbers are positive or negative. For example, if the user enters 8, 3, and 12, zero would incorrectly become the smallest value even though it was never entered. Initializing both variables with the first actual number prevents this.

### Min/Max — How do you distinguish an empty series from a series containing zero?
I use a Boolean variable called has_data that initially stores false. When an actual number is entered, it changes to true. If -99 is entered first, it remains false, indicating that no data was entered. If zero is entered, it becomes true, meaning zero is a valid data value.

## Compiling & Running the Program

### min_max.cpp

#### to compile
g++ -std=c++17 -Wall -Wextra min_max.cpp -o min_max

#### to run
./min_max

# I restored the final version of min_max.cpp before my final upload and compiled and ran the program again.
