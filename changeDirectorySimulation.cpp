// Change Directory Simulation

// Simulate a series of cd commands starting from the root directory /, and return the final absolute path 
// after executing all commands. (cd /,cd ., cd .. etc)



#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string changeDirectorySimulation(vector<string>& commands) {
        vector<string> path;

        for(int i = 0; i < commands.size(); i++)
        {
            string cmd = commands[i];
            string folder = cmd.substr(3);        // Extract folder name after 'cd '

            if(folder == "/")
            {
                path.clear();                     // 'cd /' -> Reset to root directory
            }
            else if(folder == ".")
            {
                continue;                        // 'cd .' -> Stay in the same directory (do nothing)
            }
            else if(folder == "..")               
            {
                if(!path.empty())
                {
                    path.pop_back();             // 'cd ..' -> Move one directory up if possible
                }
            }
            else{
                path.push_back(folder);         // 'cd folderName' -> Move into a new folder
            }
        }


        if (path.empty()) return "/";

        string finalPath = "";
        for (int i = 0; i < path.size(); ++i) 
        {
            finalPath += "/" + path[i];            // Build the final absolute path
        }
        
        return finalPath;
    }
};

int main() {
    Solution sol;

    // Test case example
    vector<string> commands = {"cd folder1", "cd folder2", "cd ..", "cd folder3", "cd ."};
    
    string finalPath = sol.changeDirectorySimulation(commands);
    cout << "Final Path: " << finalPath << endl;  // Output: /folder1/folder3

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(d)  -->  where d is the depth of folders you traverse into.