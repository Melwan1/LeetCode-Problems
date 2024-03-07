```mermaid
flowchart TD
classDef easy stroke-width:2px,stroke:#0f0
classDef medium stroke-width:2px,stroke:#ff0
classDef hard stroke-width:2px,stroke:#f00
classDef complete stroke-width:2px,stroke:#050,fill:#050

check_distances_between_same_letters[Distances Between Same Letters]:::easy
count_good_meals[Count Good Meals]:::medium
count_number_of_pairs_with_absolute_difference_k[Absolute Difference Pair Count]:::easy
count_pairs_whose_sum_is_less_than_target[Pairs Sum Less than Target]:::easy
find_all_k_distant_indices_in_an_array[K-Distant Array Indices]:::easy
find_subarrays_with_equal_sum[Equal Sum Subarrays]:::easy
first_letter_to_appear_twice[First Letter to Appear Twice]:::easy
four_sum[4Sum]:::medium
largest_positive_integer_that_exists_with_its_negative[Largest Positive to Match Negative]:::easy
max_number_of_k_sum_pairs[K-Sum Pairs]:::medium
minimum_sum_of_mountain_triplets_i[Minimum Sum of Mountain Triplets I]:::easy
minimum_sum_of_mountain_triplets_ii[Minimum Sum of Mountain Triplets II]:::medium 
node_with_highest_edge_score[Nighest Edge Score Node]:::medium
number_of_arithmetic_triplets[Arithmetic Triplets]:::easy
number_of_distinct_averages[Distinct Averages]:::easy
number_of_excellent_pairs[Excellent Pairs]:::hard
number_of_pairs_of_strings_with_concatenation_equal_to_target[String Pair Concatenation]:::medium
subarray_sum_equals_k[Subarray Sum Equals K]:::medium
three_sum[3Sum]:::medium
three_sum_closest[3Sum Closest]:::medium
two_sum[Two Sum]:::complete
two_sum_ii[Two Sum II - Input Array Is Sorted]:::medium
two_sum_iv[Two Sum IV - Input is a BST]:::easy


two_sum --> three_sum
two_sum --> two_sum_ii
two_sum --> subarray_sum_equals_k
two_sum --> two_sum_iv
two_sum --> max_number_of_k_sum_pairs
two_sum --> count_good_meals
two_sum --> count_number_of_pairs_with_absolute_difference_k
two_sum --> number_of_pairs_of_strings_with_concatenation_equal_to_target
two_sum --> find_all_k_distant_indices_in_an_array
two_sum --> first_letter_to_appear_twice
two_sum --> number_of_excellent_pairs
two_sum --> number_of_arithmetic_triplets
two_sum --> node_with_highest_edge_score
two_sum --> check_distances_between_same_letters
two_sum --> find_subarrays_with_equal_sum
two_sum --> largest_positive_integer_that_exists_with_its_negative
two_sum --> number_of_distinct_averages
two_sum --> count_pairs_whose_sum_is_less_than_target
three_sum --> three_sum_closest
three_sum --> four_sum
three_sum --> number_of_arithmetic_triplets
three_sum --> minimum_sum_of_mountain_triplets_i
three_sum --> minimum_sum_of_mountain_triplets_ii
```
