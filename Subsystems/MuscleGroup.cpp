# include <iostream>

// Base class for all other classes to be based off
// Possibly not even needed tbh
class MuscleGroup {
    
    public:

        MuscleGroup(){

        }; 

        virtual void update() = 0;

};