/*Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. 
Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.*/

int solution(vector<int> statues) {
    int max=statues[0];
    int min=statues[0];
    for(int i=0; i<statues.size(); i++){
        if (max<statues[i])
            max=statues[i];
        if(min>statues[i])
            min=statues[i];
    }
    //max-min+1 is the number of statues that are supposed to be in the array
    return max-min+1-statues.size();
}
