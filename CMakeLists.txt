cmake_minimum_required( VERSION 2.8 )
project(main)
include_directories(./JudgePointInTriangle)
LINK_LIBRARIES(m)
add_executable(test main.c 
                    ./JudgePointInTriangle/judgePointInTriangle.c)
