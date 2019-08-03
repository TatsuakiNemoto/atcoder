#include "bits/stdc++.h"
using namespace std;

int stl = 0;
int H, W;

/*void erodeimage(char srcImage[H][W], char dstImage[H][W]){
  for (int i = 1; i < H - 1; i++){
		for (int j = 1; j < W - 1; j++){
      for (int k = 0; k < 3; k++){
				for (int l = 0; l < 3; l++){
					if (srcImage[i + k - 1][j + l - 1] == '#'){
						dstImage[i + k - 1][j + l] = '#';
            dstImage[i + k + 1][j + l] = '#';
            dstImage[i + k][j + l - 1] = '#';
            dstImage[i + k][j + l + 1] = '#';
					}
				}
			}
		}
	}
}*/

/*void check(char a[H][W]){
  int ch = 0;
  for (size_t i = 0; i < H; i++) {
    for (size_t j = 0; j < W; j++){
      if(a[H][W] == '#'){
        ch += 1;
      }
    }
  }
  if(ch == H*W){
    stl = 1;
  }
}
*/
int main(){
  int count =0;
  cin >> H >> W;
  char image[H][W], temp[H][W], srcImage[H][W], dstImage[H][W];
  for (size_t i = 0; i < H; i++) {
    for (size_t j = 0; j < W; j++) {
      cin >> image[i][j];
    }
  }
  memcpy(image, srcImage, W*H);
  while(stl == 0){

//    erodeimage(srcImage, temp);
for (int i = 1; i < H - 1; i++){
  for (int j = 1; j < W - 1; j++){
    for (int k = 0; k < 3; k++){
      for (int l = 0; l < 3; l++){
        if (srcImage[i + k - 1][j + l - 1] == '#'){
          dstImage[i + k - 1][j + l] = '#';
          dstImage[i + k + 1][j + l] = '#';
          dstImage[i + k][j + l - 1] = '#';
          dstImage[i + k][j + l + 1] = '#';
        }
      }
    }
  }
}

//    check(srcImage);
int ch = 0;
for (size_t i = 0; i < H; i++) {
  for (size_t j = 0; j < W; j++){
    if(dstImage[H][W] == '#'){
      ch += 1;
    }
  }
}
if(ch == H*W){
  stl = 1;
}
    count += 1;
    memcpy(dstImage, srcImage, W*H);
  }


  cout << count << endl;
  return 0;
}
