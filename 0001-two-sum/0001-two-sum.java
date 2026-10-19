class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> M = new HashMap<>();

        for (int i=0; i<nums.length;i++){
            int C = target - nums[i];
            if (M.containsKey(C)){
                return new int[]{M.get(C),i};
            }
            M.put(nums[i],i);
        }
        return new int[]{};
    }
}