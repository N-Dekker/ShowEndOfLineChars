cmake_minimum_required( VERSION 3.23 )
project( ShowEndOfLineChars )

if(CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_CONFIGURATION_TYPES Release)
else()
  set(CMAKE_BUILD_TYPE Release)
endif()

add_executable(${PROJECT_NAME} ShowEndOfLineChars.cpp)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)
