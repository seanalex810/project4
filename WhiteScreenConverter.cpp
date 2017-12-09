#include <iostream> 
#include "WhiteScreenConverter.h"  
#include "bitmap.h"
#include <vector> 
using namespace std; 
bool WhiteScreenConverter::canConvert (){ 
  vector<vector < Pixel > > img = foregroundImage.toPixelMatrix(); 
  vector<vector < Pixel > > img2 = backgroundImage.toPixelMatrix();
  if (img.size() != img2.size()){
          return false;
  }
  for(int i=0; i < img.size(); i++){ 
    if(img[i].size() != img2[i].size()){ 
      return false; 
    }

  }
}

bool WhiteScreenConverter::setBackgroundImage(string img_in){ 
        backgroundImage.open(img_in); 
        return backgroundImage.isImage();
} 

bool WhiteScreenConverter::setForegroundImage(string img_in){ 
        foregroundImage.open(img_in);   
        return foregroundImage.isImage(); 
}
 
void WhiteScreenConverter::convert(string img_out){ 
        vector<vector < Pixel > > frontImageMatrix; 
        vector<vector < Pixel > > backImageMatrix; 
        frontImageMatrix = foregroundImage.toPixelMatrix(); 
        backImageMatrix = backgroundImage.toPixelMatrix(); 
        for(int i=0; i<frontImageMatrix.size(); i++){ //in rows
                for(int j=0; j<frontImageMatrix[i].size(); j++){// in cols
                        Pixel rgb;  
                        rgb = frontImageMatrix[i][j]; 

                        int whiteMin = 230;
                        if(rgb.red + rgb.green + rgb.blue > whiteMin){
                                frontImageMatrix[i][j].green = backImageMatrix[i][j].green;  
                                frontImageMatrix[i][j].blue = backImageMatrix[i][j].blue; 
                                frontImageMatrix[i][j].red = backImageMatrix[i][j].red;
                        } 
                } 
        } 
        foregroundImage.fromPixelMatrix(frontImageMatrix);
        foregroundImage.save(img_out);

}
