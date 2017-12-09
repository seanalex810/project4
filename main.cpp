#include <string> 
#include <iostream> 
#include "WhiteScreenConverter.h" 
#include "bitmap.h"
using namespace std;  
int main() {
string front; 
string back; 
string new_img;
cout <<"enter a whited background bmp image file. "<< endl; 
cin >>back;
cout <<"enter a image you want to fill the whited background. "<< endl; 
cin>>front; 
cout <<"enter a name for your new image file. "<< endl; 
cin >> new_img; 
WhiteScreenConverter wsc;
wsc.setBackgroundImage(back);
wsc.setForegroundImage(front);
 if (wsc.canConvert()){
    wsc.convert(new_img);
 }
    else{ 
cout<< "error enter images with same dimensions. "<< endl; 
    } 
return 0; 
}
