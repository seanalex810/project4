#ifndef WHITESCREENCONVERTER_H
#define WHITESCREENCONVERTER_H

#include <iostream> 
#include <string> 
#include "bitmap.h"
class WhiteScreenConverter{ 
          public: 
                bool setBackgroundImage(std::string img_in);  //open file at img_in and convert to Bitmap, then store at this.backgroungImage 
                    bool setForegroundImage(std::string img_in);            // same as above but this.foregroundImage
                        bool canConvert();
                            void convert(std::string img_out); //uses images from (6) and (7)
                                
                                  private: 
                                      Bitmap backgroundImage; // (6) stores here (8) reads from here
                                          Bitmap foregroundImage; // (7) stores here (8) reads/loops over
};

#endif
