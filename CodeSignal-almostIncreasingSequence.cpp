/*

Given a sequence of integers as an array, determine whether it is possible to obtain a strictly increasing sequence by removing no more than one element from the array.

Note: sequence a0, a1, ..., an is considered to be a strictly increasing if a0 < a1 < ... < an. Sequence containing only one element is also considered to be strictly increasing.



*/


bool almostIncreasingSequence(std::vector<int> sequence) {

    // Iterate through sequence.size():
    for (int i = 0; i < sequence.size(); i++) {
        std::vector<int> temporary;
        temporary = sequence;
        temporary.erase(temporary.begin() + i);
        
        // Special edge case:
        if (temporary.size() == 1) {
            return true;
        }
        
        // Normal check:
        for (int j = 1; j < temporary.size(); j++) {
            bool tempFlag = true;
            if (temporary[j] <= temporary[j - 1]) {
                tempFlag = false;
            }
            if (tempFlag == false) {
                j = temporary.size() + 100;
            }
            if ( tempFlag == true && j == temporary.size() - 1) {
                return true;
            }
        }
    }
    return false;
}
