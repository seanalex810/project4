#include <string> 
#include <iostream> 
#include "WhiteScreenConverter.h" 
#include "bitmap.h"
using namespace std;  
int main() {
string front; 
string back;
cout <<"enter a whited background bmp image file. "<< endl; 
cin >>back
cout <<"enter a image you want to fill the whited background. "<< endl; 
cin>>front;
WhiteScreenConverter wsc;
wsc.setBackgroundImage(back);
wsc.setForegroundImage(front);
           if (canConvert()){
                        wsc.convert();
                          }
                            else{ 
                                        cout<< "error enter images with same dimensions. "<< endl; 
                                          } 
                                            return 0; 
                                    }
