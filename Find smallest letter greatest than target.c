char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int start=0,end=lettersSize-1,chk=(int)target,mid;
    for(int i=0;i<lettersSize;i++){
        if((int)letters[i]>chk){
            return letters[i];
        }
    }
    return letters[0];
    /*
    while(start<end){
        mid=start+(end-start)/2;
        if((int)letters[mid]<chk){
            if((int)letters[mid+1]>chk){
                return letters[mid];
            }
            
        }else{
            start=mid+1;
        }
    }
    return letters[0];
    */

}
