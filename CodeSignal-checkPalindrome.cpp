/*
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
solution(inputString) = true;
For inputString = "abac", the output should be
solution(inputString) = false;
For inputString = "a", the output should be
solution(inputString) = true.
*/


bool solution(string inputString) {
    int flag=0;
    for (int i=0, j=inputString.length()-1; i<j && flag==0; i++, j--) {
        if(inputString[i]!=inputString[j])
            flag=1;
    }
    
    if(flag==0)
        return true;
    return false;
}
