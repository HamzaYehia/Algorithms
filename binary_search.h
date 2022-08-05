/**
 * Broken !!
 * Read more: https://ai.googleblog.com/2006/06/extra-extra-read-all-about-it-nearly.html
 */


int binary_search(int* nums, int numsSize, int target) {
    if (nums == NULL) return -1;

    int left = 0, right = numsSize - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) return mid;

        if (nums[mid] < target) left = mid + 1;
        if (nums[mid] > target) right = mid - 1;
    }
    return -1;
}