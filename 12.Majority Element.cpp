//problem:Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 //approach: brute force - taking that element which is > n/2 times.Counting occurence of each element .

  //solution:
  int count=0;
        int majority=0;
        
        for(int num:nums){
            if(count==0){
                majority=num;
            }
            if(num==majority)
                count+=1;
            else
                count-=1;
        }
        return majority;
