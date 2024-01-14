#include <iostream>
#include <string>

class geometricFigure{

};
void descriptionRectangle(int wight = 8, int height = 8){

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
}

int main() {
    std::string command = "unknown";
    int widthValue = 0, heightValue = 0;

    while (command != "end"){
        std::cout << "Select one geometric shape 'circle', 'square', 'triangle', 'rectangle' or enter 'end' to end the program:" << std::endl;
        std::cin >> command;
        std::cout << "Enter the coordinates of the circumscribing rectangle: ";
        std::cin >> widthValue;
        std::cout << " ";
        std::cin >> heightValue;
        if (command == "circle"){
            std::cout << "circle" << std::endl;
            descriptionRectangle(widthValue, heightValue);
        } else if (command == "triangle"){
            std::cout << "triangle" << std::endl;
            descriptionRectangle(widthValue, heightValue);
        }
    }
    return 0;
}
