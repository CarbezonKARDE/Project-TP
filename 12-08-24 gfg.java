class Solution {
    public int sumOfMiddleElements(int[] arr1, int[] arr2) {
        List<Integer> merged = new ArrayList<Integer>();
        int i = 0;
        int j = 0;
        
        while(i < arr1.length && j < arr2.length){
            if(arr1[i] < arr2[j]){
                merged.add(arr1[i]);
                i++;
            }else{
                merged.add(arr2[j]);
                j++;
            }
        }
        
        // add rest of elements
        while(i < arr1.length){
            merged.add(arr1[i]);
            i++;
        }
        // left values from array 2
        while(j < arr2.length){
            merged.add(arr2[j]);
            j++;
        }
        
        int mid = merged.size() / 2;
        if (merged.size() % 2 == 0) {
            return merged.get(mid - 1) + merged.get(mid);
        } else {
            return merged.get(mid);
        }
        }
}
