```mermaid
flowchart TD
classDef easy stroke-width:2px,stroke:#0f0
classDef easy_locked stroke-width:2px,stroke:#080
classDef medium stroke-width:2px,stroke:#ff0
classDef medium_locked stroke-width:2px,stroke:#880
classDef hard stroke-width:2px,stroke:#f00
classDef hard_locked stroke-width:2px,stroke:#800
classDef complete stroke-width:2px,stroke:#050,fill:#050

check_distances_between_same_letters[Distances Between Same Letters]:::easy_locked
count_good_meals[Count Good Meals]:::medium_locked
count_good_triplets[Count Good Triplets]:::easy_locked
count_good_triplets_in_an_array[Count Good Triplets in an Array]:::hard_locked
count_increasing_quadruplets[Count Increasing Quadruplets]:::hard_locked
count_number_of_pairs_with_absolute_difference_k[Absolute Difference Pair Count]:::easy_locked
count_pairs_whose_sum_is_less_than_target[Pairs Sum Less than Target]:::easy_locked
count_special_quadruplets[Count Special Quadruplets]:::easy_locked
find_all_k_distant_indices_in_an_array[K-Distant Array Indices]:::easy_locked
find_subarrays_with_equal_sum[Equal Sum Subarrays]:::easy_locked
find_the_longest_valid_obstacle_course_at_each_position[Longest Obstacle Course]:::hard_locked
first_letter_to_appear_twice[First Letter to Appear Twice]:::easy_locked
four_sum[4Sum]:::medium_locked
four_sum_ii[4Sum II]:::medium_locked
increasing_triplet_subsequence[Increasing Triplet Sequence]:::medium_locked
largest_positive_integer_that_exists_with_its_negative[Largest Positive to Match Negative]:::easy_locked
longest_ideal_subsequence[Longest Ideal Subsequence]:::medium_locked 
longest_increasing_subsequence[Longest Increasing Subsequence]:::medium_locked
longest_increasing_subsequence_ii[Longest Increasing Subsequence II]:::hard
max_number_of_k_sum_pairs[K-Sum Pairs]:::medium_locked
maximum_length_of_pair_chain[Maximum Length of Pair Chain]:::medium_locked
minimum_ascii_delete_sum_for_two_strings[ASCII Delete Sum]:::medium_locked
minimum_number_of_removals_to_make_mountain_array[Make Mountain Array]:::hard_locked
minimum_operations_to_make_the_array_k_increasing[K-Increasing Array]:::hard_locked
minimum_sum_of_mountain_triplets_i[Minimum Sum of Mountain Triplets I]:::easy_locked
minimum_sum_of_mountain_triplets_ii[Minimum Sum of Mountain Triplets II]:::medium_locked 
node_with_highest_edge_score[Nighest Edge Score Node]:::medium_locked
number_of_arithmetic_triplets[Arithmetic Triplets]:::easy_locked
number_of_distinct_averages[Distinct Averages]:::easy_locked
number_of_excellent_pairs[Excellent Pairs]:::hard_locked
number_of_longest_increasing_subsequence[Number of Longest Increasing Subsequence]:::medium_locked
number_of_pairs_of_strings_with_concatenation_equal_to_target[String Pair Concatenation]:::medium_locked
russian_doll_envelopes[Russian Doll Envelopes]:::hard_locked
subarray_sum_equals_k[Subarray Sum Equals K]:::medium_locked
three_sum[3Sum]:::medium_locked
three_sum_closest[3Sum Closest]:::medium_locked
two_sum[Two Sum]:::complete
two_sum_ii[Two Sum II - Input Array Is Sorted]:::medium_locked
two_sum_iv[Two Sum IV - Input is a BST]:::easy_locked


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
four_sum --> four_sum_ii
four_sum --> count_special_quadruplets
count_special_quadruplets --> increasing_triplet_subsequence
count_special_quadruplets --> count_good_triplets
count_special_quadruplets --> count_increasing_quadruplets
increasing_triplet_subsequence --> longest_increasing_subsequence
increasing_triplet_subsequence --> count_good_triplets_in_an_array
longest_increasing_subsequence --> russian_doll_envelopes
longest_increasing_subsequence --> maximum_length_of_pair_chain
longest_increasing_subsequence --> number_of_longest_increasing_subsequence
longest_increasing_subsequence --> minimum_ascii_delete_sum_for_two_strings
longest_increasing_subsequence --> minimum_number_of_removals_to_make_mountain_array
longest_increasing_subsequence --> find_the_longest_valid_obstacle_course_at_each_position
longest_increasing_subsequence --> longest_ideal_subsequence
longest_increasing_subsequence --> longest_increasing_subsequence_ii
```
