// Kadane's Algorithm : this algorithm is use for find "maximum sumSubarray" in O(n) time.
// In this algorithm we remove sub-array which give use -ve sum, for make more element sub-arrays.


// arr: input array
// n: size of array
//Function to find the sum of contiguous subarray with maximum sum.

//Method-1: This is valide for the input ----> which have atleast one +ve element
long long maxSubarraySum(int arr[], int n){
    long long maxSum = 0, currentSum = 0;
    for(int i = 0; i < n; i++) {
        currentSum += arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

//Method-2 : for all -ve element array-----------> for this we need to reset maxSum initial value. 
long long maxSubarraySum(int arr[], int n){
    long long maxSum = -10e7, currentSum = 0;
    for(int i = 0; i < n; i++) {
        currentSum += arr[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }
        if(currentSum < 0) {
            currentSum = 0;
        } 
    }
    return maxSum;
}