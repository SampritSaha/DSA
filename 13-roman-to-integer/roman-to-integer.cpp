class Solution {
public:
    int romanToInt(string s) {
        
        std::unordered_map<char, int> roman_values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total_sum = 0;
        int n = s.length();

        // Iterate through the string, excluding the last character for comparison
        for (int i = 0; i < n - 1; ++i) {
            int current_value = roman_values[s[i]];
            int next_value = roman_values[s[i+1]];

            // If the current symbol's value is less than the next symbol's value,
            // it's a subtraction case (e.g., IV = 4, IX = 9)
            if (current_value < next_value) {
                total_sum -= current_value;
            } else {
                // Otherwise, it's a normal addition
                total_sum += current_value;
            }
        }

        // Add the value of the last character, as it's always added
        total_sum += roman_values[s[n-1]];

        return total_sum;
    }
};