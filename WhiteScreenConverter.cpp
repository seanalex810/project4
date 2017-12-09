#include <iostream> 
#include "WhiteScreenConverter.h"  
#include "bitmap.h"
#include <vector> 
bool WhiteScreenConverter::canConvert (){ 
vector<vector < Pixel > img = foregroundImage.toPixelMatrix(); 
vector<vector < Pixel > img2 = backgroundImage.toPixelMatrix();
    for(int i=0; i < img[0].size(); i++){ 
        if(img.size() == img2.size()){ 
         if(img[i].size() == img2.size()){ 
                return true; 
        }
        else{ 
            return false; 
            }
                                                                                                        else{ 
                                                                                                                          return false; 
                                                                                                                                  } 
                                                                                                                                      }
                                                                                                                                        }
}
      
      bool WhiteScreenConverter::setBackgroundImage(string img_in){ 
                backgroundImage.open(img_in); 
                  return backgroundImage.isImage();
      } 

      bool WhiteScreenConverter::setForegroundImage(string img_in){ 
                this.foregroundImage.open(img_in);   
                  return foregroundImage.isImage(); 
                        }
                }   
                Bitmap WhiteScreenConverter::convert(string img_out){ 
                          vector<vector < Pixel > frontImageMatrix; 
                            vector<vector < Pixel > backImageMatrix; 
                              frontImageMatrix = foregroundImage.toPixelMatrix(); 
                                backImageMatrix = backgroundImage.toPixelMatrix(); 
                                  for(int i=0; i<frontImageMatrix.size(); i++){ //in rows
                                              for(int j=0; j<frontImageMatrix[i].size(); j++){// in cols
                                                            Pixel rgb;  
                                                                  rgb = frontImageMatrix[i][j] 
                                                                        
                                                                              int whiteMin = 230;
                                                                                    if(rgb.red + rgb.green + rgb.blue > whiteMin){
                                                                                                    frontImageMatrix[i][j].green = backImageMatrix[i][j].green  
                                                                                                            frontImageMatrix[i][j].blue = backImageMatrix[i][j].blue 
                                                                                                                    frontImageMatrix[i][j].red = backImageMatrix[i][j].red
                                                                                                                          } 
                                                                                                                              } 
                                                                                                                                } 
                                                                                                                                foregroundImage.fromPixelMatrix(frontImageMatrix)
                                                                                                                                foregroundImage.save(img_out);
                                                                                                                                  
                }
