// leet code 2833: Furthest Point From Origin

// You are given a string moves of length n consisting only of characters 'L', 'R', and '_'. The string represents your movement on a number line starting from the origin 0.

// In the ith move, you can choose one of the following directions:

// move to the left if moves[i] = 'L' or moves[i] = '_'
// move to the right if moves[i] = 'R' or moves[i] = '_'
// Return the distance from the origin of the furthest point you can get to after n moves.

 

// Example 1:

// Input: moves = "L_RL__R"
// Output: 3
// Explanation: The furthest point we can reach from the origin 0 is point -3 through the following sequence of moves "LLRLLLR".

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int sum = 0;
        int patanhi = 0;
        for(int i = 0 ; i<moves.size();i++){
            if(moves[i]=='L'){
                sum+=-1;
            }
            else if(moves[i]=='R'){
            sum +=1;
        }
        else
        patanhi++;
        }
        return abs(sum)+patanhi;
    }
};
