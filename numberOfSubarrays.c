int atMost(int* nums, int numsSize, int k) {
    if (k < 0) return 0;
    int left = 0, ans = 0;
    for (int right = 0; right < numsSize; right++) {
        k -= (nums[right] % 2);
        while (k < 0) {
            k += (nums[left] % 2);
            left++;
        }
        ans += (right - left + 1);
    }
    return ans;
}

int numberOfSubarrays(int* nums, int numsSize, int k) {
    return atMost(nums, numsSize, k) - atMost(nums, numsSize, k - 1);
}
