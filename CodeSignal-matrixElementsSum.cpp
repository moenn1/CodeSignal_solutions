


/*
After becoming famous, the CodeBots decided to move into a new building together. Each of the rooms has a different cost, and some of them are free, but there's a rumour that all the free rooms are haunted! Since the CodeBots are quite superstitious, they refuse to stay in any of the free rooms, or any of the rooms below any of the free rooms.

Given matrix, a rectangular matrix of integers, where each value represents the cost of the room, your task is to return the total sum of all rooms that are suitable for the CodeBots (ie: add up all the values that don't appear below a 0).
*/



int solution(vector<vector<int>> matrix) {
    int k=0;
    
    for (int j=0; j<matrix[0].size(); j++) {
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][j]==0){
                break;
            }
            else{
                k=k+matrix[i][j];
        }
        }
    }
    return k;
}

