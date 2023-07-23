

#include <iostream>
int main() {

  //Image
  const int imageWidth = 256;
  const int imageHeight = 256;

  //Render
  

  std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

  for (int i = imageHeight - 1; i >= 0; --i) {
    std::cerr << "\rScan lines remaining: " << i << std::flush;
    for (int j = imageWidth - 1; j >= 0; --j) {
    
      double r = double(j) / (imageWidth - 1);
      double g = double(i) / (imageHeight - 1);
      double b = 0.25;

      int ir = static_cast<int>(255.999 * r);
      int ig = static_cast<int>(255.999 * g);
      int ib = static_cast<int>(255.999 * b);

      std::cout << ir << ' ' << ig << ' ' << ib << std::endl;
    }

  }

  std::cerr << "Done.\n";


}
