/*
Given an array of strings, return another array containing all of its longest strings.


*/


vector<string> solution(vector<string> inputArray) {
    
    
    int max=0, i;
    for (i=0; i<inputArray.size(); i++) {
        if(inputArray[i].length()>max)
            max=inputArray[i].length();
    }
    int j=0;
    vector<string> longestStrings;
    for (i=0; i<inputArray.size(); i++) {
        if(inputArray[i].length()==max){
            longestStrings.push_back(inputArray[i]);
    }
    }
    return longestStrings;
}
