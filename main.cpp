#include <iostream>
#include <string>
#include <math.h>

enum class FigureColor{
    NONE,
   ORANGE,
   BLUE,
   GREEN,
   YELLOW
};
/*class geometricFigure{


};*/

void descriptionRectangle(double area){
    int wight = 0, height = 0;
    wight = std::sqrt(area);
    height = area/wight;
    for(int i =0; i < height; ++i){
        for(int j=0; j < wight; ++j){
            if ((i== height/2) && (j==wight/2)){
                std::cout << "+";
            } else if (i == 0 || i == height - 1 || j == 0 || j == wight -1){
                std::cout << "1";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "Height: " << height << "  " << "Wight: " << wight << std::endl;
    int areaRectangle = height * wight;
    std::cout  << "Area rectangle: " << areaRectangle << std::endl;
}

int main() {
    std::string command = "unknown";
    double circleRadius;


    while (command != "end"){
        std::cout << "Select one geometric shape 'circle', 'square', 'triangle', 'rectangle' or enter 'end' to end the program:" << std::endl;
        std::cin >> command;
        if (command == "circle"){
            std::cout << "Enter the circle radius value: ";
            std::cin >> circleRadius;
            int areaCircle = std::atan(circleRadius) * 4 * circleRadius;
            std::cout << "Area circle: " << areaCircle << std::endl;
            descriptionRectangle(areaCircle);
        } else if (command == "triangle"){
            std::cout << "triangle" << std::endl;

        }
    }
    return 0;
}
