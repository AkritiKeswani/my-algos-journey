/* You are given an integer array height of length n. There are n vertical lines drawn such that the two 
endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container 
contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer = 0;
        int rightPointer = height.size() - 1; 
        int maxArea = 0; 
        while (leftPointer < rightPointer && rightPointer>=0 && leftPointer < height.size()) {
            int waterHeight = min(height[leftPointer], height[rightPointer]); 
            int waterWidth = rightPointer - leftPointer; 
            int tempArea = waterHeight*waterWidth; 
            if (maxArea <= tempArea) {
                maxArea = tempArea; 
            }
            if (height[leftPointer] == waterHeight) {
                leftPointer++;
            }
            else {
                rightPointer--; 
            }
        }
        return maxArea; 
    }
};





//max area - 

//we have to find two vertical lines that can hold all the lines (THIS I AM CONFUSED ABOUT) and multiply them to get the area which is output 
//height x width is being calculated here 

// [1, 8, 6, 2, 5, 4, 8, 3, 7] 
//how to calculate width code wise - j - i because leftPointer index is subtracted from rightPointer index, in this case 8 - 0 = 8 


//having two pointers 
// one approaching from 1 and one from 7
// 1 & 7 - width - 8 - store this as maxWidthSeenSoFar 
// max amount of water store - 8 
//minimum element x width  = maxArea 


