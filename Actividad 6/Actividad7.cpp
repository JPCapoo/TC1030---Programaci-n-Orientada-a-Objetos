#include <iostream>
#include <vector>

using namespace std;

#include "claseCirculo.h"

int main() {
    vector<Shape*> vecShapes;
    Shape *objShapes;

    objShapes = new Circle(5,6,7);
    vecShapes.push_back(objShapes);

    objShapes = new Rectangle(5,6,7,8);
    vecShapes.push_back(objShapes);

    objShapes = new Circle(15,16,17);
    vecShapes.push_back(objShapes);

    cout << "--- show Vector DRAW ---"<<endl;
    for(int i = 0; i <vecShapes.size(); i++){
        vecShapes[i] -> draw();
    }
    return 0;
}

