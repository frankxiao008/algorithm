class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        int idx=0;
        while(true){
            if(idx>=strs[0].length()){
                break;
            }
            char value=strs[0][idx];
            bool different = false;
            for(int i=1;i<strs.size();++i){
                if(idx>=strs[i].length() || strs[i][idx]!=value){
                    different = true;
                    break;
                }
            }
            if(different){
                break;
            }
            idx++;
        }
        return strs[0].substr(0, idx);
    }
};
