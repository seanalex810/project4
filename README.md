-USER INPUT/OUTPUT[ 
I used user input output to gather the image files for my project. 
-CONTROL FLOW 
I used control flow in my convert function namely an if statement to determine where the pixels had a high enough value to be read in as white. the if statement made it so i could only change those specific pixels 
-ITERATION 
Also in my convert function I had to use two for loops to go through all my images pixels and change the pixels that were to be changed out for the white screen. 
-DATA STRUCTURES 
In my canConvert function I used a vector of vector Pixel to determine if the images were the same dimension. This made the process of changing the pixels that were of a white color much easier. 
-FUNCTIONS 
One of the functions I used was to loop through two images and compare the sizes. This was a practical function and was only used as a function to make my int main() look cleaner. 
-FILE INPUT/OUTPUT 
In my function convert I used pass by reference to modify the value of the image sizes used. 
CLASSES 
I used a class called WhiteScreenConverter to organize all my functions that were of similar objectives. Then the functions that weren't used in int main() I made private.
