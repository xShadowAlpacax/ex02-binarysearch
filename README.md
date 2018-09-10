## Exercise: Binary Search (25 Points)

The purpose of this assignment is for your to become familiar the binary search algorithm for a sorted array.

The first thing you will need to do is fork and clone this assignment
from GitHub. Follow the instructions 
[here](https://github.com/vcc-csv15-fall2018/Course-Information/wiki)
to get started. 

Be sure that you fork the project first and use the URL from
the forked project when you clone it in CLion.

### Problem Description

The problem for this assignment is fairly simple: implement a binary search function for an
array of objects of any type (a templated function). The function takes a value to find, a sorted array, 
and the size of the array and returns the index of the element found, if its in the array,
otherwise it returns -1.

The functions declaration should look like the following: 

```cpp
#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

template <class T>
int64_t binarysearch(const T& value, T array[], size_t size) {
	// put your code here
}

}}}}
```

The declaration should be in a file named `binarysearch.h` and the implementation can be
in any file with the extension `.cc`.

### Writing the code for this Project

Writing the code for this project is very simple. Since the 
objective of this assignment is understanding the workflow, 
the code is given to you. Simply create the one file below 
`main.cc` in CLion
and then copy the content into the files. 

#### Header file

In CLion in the project explorer, right-click the `include` directory
and chose `New => C++ Header File`. 

Under **Name** fill in
binarysearch. CLion will add the extension, but by default 
adds the `.h` extension. You should now see the file `binarysearch.h` in
the project explorer in the `include` directory.

Properly set up the namespaces and declare the function described above in this file.

#### Implementation file

In CLion in the project explorer, right-click the `src` directory
and chose `New => C++ Source File`. 

Under **Name** fill in
binarysearch , or whatever name you want to give it. CLion will add the extension, but by default 
adds the `.cpp` extension. All projects in this class will
use the `.cc` extension. Select `.cc` in the **Type** drop-down
and press **OK**. You should now see the file `binarysearch.cc`, or whatever you called it, in
the project explorer in the `src` directory.

Properly set up the namespaces and implement the function described above in this file.

### Running the code for this project

Running this code should be straightforward. In the drop-down 
menu in the upper right-hand corner you should see a *Run
Configuration* called `Helloworld | Debug`. Make sure this 
configuration is selected and press the play button next to it.
In the **Run** view below the code you should see the output 
of running the program. It should look something like this:

```bash
/Users/username/githubusername/ex02-binarysearch/bin/
Found value at index 3.

Process finished with exit code 0
```
Success! Now you can move on to testing your code. Remember that your output might be
different, but should look similar to this.

### Testing the code for this project

Testing the code for this project is similar to running your code
as outlined above. In the drop-down menu in the upper right-hand
corner select the configuration `BinarySearch_Gtest` and press the 
play button next to it. In the **Run** view below the code you should
see the output of running these tests. It should look something
like this:

```bash
Running main() from gtest_main.cc
[==========] Running 3 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 3 tests from BinarySearchTest
[ RUN      ] BinarySearchTest.FindInt10
[       OK ] BinarySearchTest.FindInt10 (0 ms)
[ RUN      ] BinarySearchTest.NotFound
[       OK ] BinarySearchTest.NotFound (0 ms)
[ RUN      ] BinarySearchTest.Efficiency
[       OK ] BinarySearchTest.Efficiency (0 ms)
Your unit test score is 18 out of 20 (-2)
The assignment is worth a total of 25 where the remainder of 5 points
comes from grading related to documentation, algorithms, and other
criteria.

[----------] 3 tests from BinarySearchTest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 3 tests.

Process finished with exit code 0
```

Remember, red good, green bad. If your tests pass you should see green
text and your code ran fine. You should also see your score for this
assignment minus code styling points which I will add later.

### Submitting the code for this project

First, right click on the project name, then select `Git -> Commit Directory...`. 
Make sure only the files you want to push are selected, `main.cc` and `binarysearch.h`.
Then uncheck `Perform code analysis` and `Check TODO`. It's OK to leave them checked,
but committing will take longer. Leave `Run git hooks` checked. Put a message in `Commit Message`
and then press the **Commit** button. If anything goes wrong check the _Version Control_ view
in the lower left corner and select the _Console_ tab.
 
Finally, right click on the project name,
then select `Git -> Repository -> Push...`. Follow the onscreen directions
and press **OK**. This step will run the tests again, check that everything is OK
and then submit them to the cloud to have the tests run for grading.

If you do not understand these directions, or wish to do them on the command
line rather than in CLion, then read these [directions](https://github.com/vcc-csv15-fall2018/Course-Information/wiki/How-to-Turn-In-Every-Project).

