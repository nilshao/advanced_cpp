cmake_minimum_required (VERSION 3.8)
project (visapp-skeleton)

include(CTest)
include_directories(include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# We need to enable testing before we can define tests
#enable_testing()

# add_library(helper src/helper.cpp)
# add_library(vis_app src/vis_app.cpp)
# target_link_libraries(vis_app helper)

# add_executable(vis src/vis_app.cpp src/helper.cpp) 

add_executable(vis src/vis_app.cpp ) 
target_compile_features(vis PUBLIC cxx_std_17)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
