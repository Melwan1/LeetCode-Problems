char* longestCommonPrefix(char** strs, int strsSize) {
    int max = strlen(strs[0]);
    for (int index = 1; index < strsSize; index++)
    {
        for (int string_index = 0; string_index < max; string_index++)
        {
            if (!strs[index][string_index] || (strs[index][string_index] != strs[index - 1][string_index]))
            {
                max = string_index;
                break;
            }
        }
    }
    char *string = calloc(max + 1, 1);
    for (int index = 0; index < max; index++)
    {
        string[index] = strs[0][index];
    }
    return string;
}
