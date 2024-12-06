Wumpus Hunt

Author: Wangming Chen
C++ Version: CXX_STANDARD 20
Build Tool: cmake, ninja
Building Process:
1 Open the project with CLion. 
2 Select the given CMakeLists.txt
3 Press Shift+F10 to Compile.
4 After the compilation, the executable file is in cmake-build-debug/untitled.exe
5 Run the application by double click the untitled.exe file. 

The key that make the executable file runnable:
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")