cmake_minimum_required(VERSION 3.0.0)
project(visapp VERSION 0.1.0)

include(CTest)
include_directories(include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
enable_testing()


#add_library(Character src/v1/Character.cpp)
#add_library(InGame src/v1/InGame.cpp)
#target_link_libraries(InGame Character)

add_executable(corona src/vis_app.cpp) 
target_link_libraries(corona ${Boost_LIBRARIES})
target_compile_features(corona PUBLIC cxx_std_17)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)


