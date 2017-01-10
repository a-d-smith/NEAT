# cmake file for building LArReco
#-------------------------------------------------------------------------------------------------------------------------------------------
cmake_minimum_required(VERSION 2.8.2 FATAL_ERROR)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "NEAT requires an out-of-source build.")
endif()

# project name
project(NEAT)

# project version
set(${PROJECT_NAME}_VERSION_MAJOR 01)
set(${PROJECT_NAME}_VERSION_MINOR 00)
set(${PROJECT_NAME}_VERSION_PATCH 00)
set(${PROJECT_NAME}_VERSION "${${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}")

#-------------------------------------------------------------------------------------------------------------------------------------------
# Dependencies

# Prefer local include directory to any paths to installed header files
include_directories(inc)

#-------------------------------------------------------------------------------------------------------------------------------------------
# Low level settings - compiler etc
if (NOT CMAKE_CXX_FLAGS)
    set(CMAKE_CXX_FLAGS "-std=c++11")
endif()

include(CheckCXXCompilerFlag)
unset(COMPILER_SUPPORTS_CXX_FLAGS CACHE)
CHECK_CXX_COMPILER_FLAG(${CMAKE_CXX_FLAGS} COMPILER_SUPPORTS_CXX_FLAGS)

if(NOT COMPILER_SUPPORTS_CXX_FLAGS)
    message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} does not support cxx flags ${CMAKE_CXX_FLAGS}")
endif()

if(APPLE)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -pedantic -Wno-long-long -Wno-sign-compare -Wshadow -fno-strict-aliasing ${CMAKE_CXX_FLAGS}")
else()
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -ansi -pedantic -Wno-long-long -Wno-sign-compare -Wshadow -fno-strict-aliasing ${CMAKE_CXX_FLAGS}")
endif()

#-------------------------------------------------------------------------------------------------------------------------------------------
# Build products

# - Collect sources - not ideal because you have to keep running CMake to pick up changes
file(GLOB_RECURSE NEAT_SRCS RELATIVE ${PROJECT_SOURCE_DIR} "src/*.cxx")

# - Add library and properties
add_library(${PROJECT_NAME} SHARED ${NEAT_SRCS})

# - Executable
add_executable(NEATInterface ${PROJECT_SOURCE_DIR}/test/NEATInterface.cxx)
target_link_libraries(NEATInterface ${PROJECT_NAME})

#-------------------------------------------------------------------------------------------------------------------------------------------
# Install products

# - library
install(TARGETS ${PROJECT_NAME} DESTINATION lib COMPONENT Runtime)

# - headers
install(DIRECTORY inc/ DESTINATION inc COMPONENT Development FILES_MATCHING PATTERN "*.h")

# - executable
install(TARGETS NEATInterface DESTINATION bin PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
