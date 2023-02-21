# simplepackage
A barebone package for crosscompilation

Trying to crosscompile with 
```
colcon build --event-handlers console_direct+ --cmake-args -DCMAKE_TOOLCHAIN_FILE=`pwd`/aarch64.cmake
``` 

but getting 

```
$ colcon build --event-handlers console_direct+ --cmake-args -DCMAKE_TOOLCHAIN_FILE=`pwd`/aarch64.cmake   
Starting >>> my_package                                                                                     -- The C compiler identification is GNU 11.3.0                                                              -- The CXX compiler identification is GNU 11.3.0                                                            -- Detecting C compiler ABI info                                                                            -- Detecting C compiler ABI info - done                                                                     -- Check for working C compiler: /usr/bin/aarch64-linux-gnu-gcc - skipped                                   -- Detecting C compile features                                                                             -- Detecting C compile features - done                                                                      -- Detecting CXX compiler ABI info                                                                          -- Detecting CXX compiler ABI info - done                                                                   -- Check for working CXX compiler: /usr/bin/aarch64-linux-gnu-g++ - skipped                                 -- Detecting CXX compile features                                                                           -- Detecting CXX compile features - done                                                                    -- Found ament_cmake: 1.3.3 (/home/giellamo/roots/opt/ros/humble/share/ament_cmake/cmake)                   -- Found Python3: /usr/bin/python3.10 (found version "3.10.6") found components: Interpreter                -- Found rclcpp: 16.0.3 (/home/giellamo/roots/opt/ros/humble/share/rclcpp/cmake)                            -- Found rosidl_generator_c: 3.1.4 (/home/giellamo/roots/opt/ros/humble/share/rosidl_generator_c/cmake)     -- Found rosidl_adapter: 3.1.4 (/home/giellamo/roots/opt/ros/humble/share/rosidl_adapter/cmake)             -- Found rosidl_generator_cpp: 3.1.4 (/home/giellamo/roots/opt/ros/humble/share/rosidl_generator_cpp/cmake) -- Using all available rosidl_typesupport_c: rosidl_typesupport_fastrtps_c;rosidl_typesupport_introspection_c                                                                                                           -- Using all available rosidl_typesupport_cpp: rosidl_typesupport_fastrtps_cpp;rosidl_typesupport_introspection_cpp                                                                                                     -- Found rmw_implementation_cmake: 6.1.1 (/home/giellamo/roots/opt/ros/humble/share/rmw_implementation_cmake/cmake)
-- Found rmw_fastrtps_cpp: 6.2.2 (/home/giellamo/roots/opt/ros/humble/share/rmw_fastrtps_cpp/cmake)
-- Found OpenSSL: /home/giellamo/roots/usr/lib/aarch64-linux-gnu/libcrypto.so (found version "3.0.2")
-- Found FastRTPS: /home/giellamo/roots/opt/ros/humble/include
-- Using RMW implementation 'rmw_fastrtps_cpp' as default
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
-- Found ament_lint_auto: 0.12.5 (/home/giellamo/roots/opt/ros/humble/share/ament_lint_auto/cmake)
-- Added test 'cppcheck' to perform static code analysis on C / C++ code
-- Configured cppcheck include dirs: $<BUILD_INTERFACE:/home/giellamo/projects/rostest/src/my_package/include>
-- Configured cppcheck exclude dirs and/or files:
-- Added test 'lint_cmake' to check CMake code style
-- Added test 'uncrustify' to check C / C++ code style
-- Configured uncrustify additional arguments:
-- Added test 'xmllint' to check XML markup files
-- Configuring done
CMake Warning at CMakeLists.txt:15 (add_executable):
  Cannot generate a safe runtime search path for target my_node because files
  in some directories may conflict with libraries in implicit directories:

    runtime library [libpython3.10.so] in /usr/lib/aarch64-linux-gnu may be hidden by files in:
      /home/giellamo/roots/usr/lib/aarch64-linux-gnu

  Some of these libraries may not be found correctly.


-- Generating done
-- Build files have been written to: /home/giellamo/projects/rostest/build/my_package
gmake[2]: *** No rule to make target '/usr/lib/aarch64-linux-gnu/libpython3.10.so', needed by 'my_node'.  Stop.
gmake[2]: *** Waiting for unfinished jobs....
[ 50%] Building CXX object CMakeFiles/my_node.dir/src/my_node.cpp.o
gmake[1]: *** [CMakeFiles/Makefile2:137: CMakeFiles/my_node.dir/all] Error 2
gmake: *** [Makefile:146: all] Error 2
--- stderr: my_package
CMake Warning at CMakeLists.txt:15 (add_executable):
  Cannot generate a safe runtime search path for target my_node because files
  in some directories may conflict with libraries in implicit directories:

    runtime library [libpython3.10.so] in /usr/lib/aarch64-linux-gnu may be hidden by files in:
      /home/giellamo/roots/usr/lib/aarch64-linux-gnu

  Some of these libraries may not be found correctly.


gmake[2]: *** No rule to make target '/usr/lib/aarch64-linux-gnu/libpython3.10.so', needed by 'my_node'.  Stop.
gmake[2]: *** Waiting for unfinished jobs....
gmake[1]: *** [CMakeFiles/Makefile2:137: CMakeFiles/my_node.dir/all] Error 2
gmake: *** [Makefile:146: all] Error 2
---
Failed   <<< my_package [17.2s, exited with code 2]

Summary: 0 packages finished [17.3s]
  1 package failed: my_package
  1 package had stderr output: my_package
  
```  
