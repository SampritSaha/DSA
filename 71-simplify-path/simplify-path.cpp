class Solution {
public:
    string simplifyPath(string path) {
        // Use a vector to simulate a stack.
        vector<string> st; 
        
        // Use stringstream to easily split the path by '/'
        stringstream ss(path);
        string component;
        
        // Iterate through each component separated by '/'
        while (getline(ss, component, '/')) {
            if (component.empty() || component == ".") {
                // Ignore empty components (e.g., from "//" or leading/trailing '/')
                // and '.' (current directory)
                continue;
            } else if (component == "..") {
                // If '..', pop the last directory from the stack if it's not empty
                if (!st.empty()) {
                    st.pop_back();
                }
            } else {
                // Otherwise, it's a valid directory name, push it onto the stack
                st.push_back(component);
            }
        }
        
        // Construct the result path
        string result = "";
        if (st.empty()) {
            // If the stack is empty, it means the path simplifies to the root directory
            result = "/";
        } else {
            // Join the components in the stack with '/'
            for (const string& dir : st) {
                result += "/" + dir;
            }
        }
        
        return result;
    }
};