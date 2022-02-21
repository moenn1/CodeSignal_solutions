//Given two strings, find the number of common characters between them.


int solution(string s1, string s2) {
    int k = 0;
    int f1[26]={0}, f2[26]={0};
    int i;
    for (i=0; i<s1.length(); i++) {
        f1[s1[i]-'a']++;
    }
    for (i=0; i<s2.length(); i++) {
        f2[s2[i]-'a']++;
    }
    for(i=0; i<26; i++){
        k+=min(f1[i], f2[i]);
    }
    return k;
}
