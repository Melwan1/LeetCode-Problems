#include <vector>

#include "removeElement.hh"

int removeElement(std::vector<int>& nums, int val) {
    std::vector<int> new_vec = {};
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        if (*it != val) {
            new_vec.push_back(*it);
        }
    }
    int new_vec_size = new_vec.size();
    for (int index = 0; index < nums.size(); index++) {
        if (index < new_vec_size) {
            nums[index] = new_vec[index];
        }
        else {
            nums[index] = val;
        }
    }
    return new_vec_size;

}
