    #include <iostream>

    using namespace std;
    
    int light_x{3}; // the X position of the light of power
    int light_y{0}; // the Y position of the light of power
    int initial_tx{0}; // Thor's starting X position
    int initial_ty{0}; // Thor's starting Y position
    int remaining_turns{5};

int main(){


    while (remaining_turns > 0) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.

        if ((initial_tx < light_x) && (initial_ty < light_y) ){
            initial_tx += 1;
            initial_ty += 1;
            cout << "SE"<< endl;
        }

        else if ((initial_tx < light_x) && (initial_ty > light_y)){
            initial_tx += 1;
            initial_ty -= 1;
            cout << "NE" << endl;
        }

        else if ((initial_tx > light_x) && (initial_ty > light_y)){
            initial_tx -= 1;
            initial_ty -= 1;
            cout << "NW" << endl;
        }

        else if ((initial_tx > light_x) && (initial_ty < light_y)){
            initial_tx -= 1;
            initial_ty += 1;
            cout << "SW" << endl;     
        }


        else if (initial_tx < light_x){
            cout << "E" << endl;    
            initial_tx += 1;
        }

        else if (initial_tx > light_x){
            initial_tx -= 1;
            cout << "W"<< endl;
        }

        else if (initial_ty < light_y){
            initial_ty += 1;
            cout << "S"<< endl;
        }

        else if(initial_ty > light_y){
            initial_ty -= 1;
            cout << "N" << endl;
        }

    }
}