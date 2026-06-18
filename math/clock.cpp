class Solution {
public:
    double angleClock(int hour, int minutes) {
        if (hour == 12){
            hour = 0;
        }
        double angel = abs(30*hour-5.5*minutes);


        if(angel>180){
           angel= 360-angel;
        
        }
        
        return angel;
    }
};
