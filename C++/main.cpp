#include <iostream>
#include <vector>

void threeWayQuickSort(std::vector<int>& nums, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivot = nums[low];
    int lt = low;    // 左指針，指向小於基準點的元素的最右邊位置.
    int gt = high;   // 右指針，指向大於基準點的元素的最左邊位置.
    int i = low + 1; // 遍歷指針.

    while (i <= gt) {
        if (nums[i] < pivot) {
            std::swap(nums[lt], nums[i]);
            lt++;
            i++;
        } else if (nums[i] > pivot) {
            std::swap(nums[i], nums[gt]);
            gt--;
        } else {
            i++;
        }
    }

    // 遞迴處理左右兩部分.
    threeWayQuickSort(nums, low, lt - 1);
    threeWayQuickSort(nums, gt + 1, high);
}

int main() {
    std::vector<int> nums = {50, 90, 70, 20, 10, 30, 40, 60, 80};

    // 原始數列.
    std::cout << "Original array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 三路快速排序.
    threeWayQuickSort(nums, 0, nums.size() - 1);

    // 排序後數列.
    std::cout << "Sorted array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
