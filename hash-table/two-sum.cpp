class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        # Dictionary to store the value and its index
        num_map = {}
        
        for i, num in enumerate(nums):
            # Calculate the difference needed to reach the target
            complement = target - num
            
            # If the complement exists in our map, we found the pair
            if complement in num_map:
                return [num_map[complement], i]
            
            # Otherwise, add the current number and its index to the map
            num_map[num] = i
            
        return []