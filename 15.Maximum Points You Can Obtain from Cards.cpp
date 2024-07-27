//problem:There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
//In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.Your score is the sum of the points of the cards you have taken.Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

//approach: brute force - 2 loops - one for left and one for right
// another way is using sliding window --> finding sum of list k elemnts and then  remove the jth element from sum and insert ith elemnt


//solution:
 int n=cardPoints.size();
        int sum=0;
        
        //finding sum of list k elemnts
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int i=n-1;
        int j=k-1;
        int ans=sum;
        
        //remove the jth element from sum and insert ith elemnt
        while(j>=0){
            sum+=(cardPoints[i]-cardPoints[j]);
            ans=std:: max(ans,sum);
            i--;
            j--;
        }
        return ans;
