cmake_minimum_required(VERSION 3.0.0)
project(cpp_test VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
    )

file(GLOB SOURCES_EXERCISE
    ${CMAKE_CURRENT_SOURCE_DIR}/exercise/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/exercise/*.hpp
    )

# file(GLOB SOURCES_TONGXUNGUANLIXITONG
#     ${CMAKE_CURRENT_SOURCE_DIR}/tongxunluguanli/*.cpp
#     ${CMAKE_CURRENT_SOURCE_DIR}/tongxunluguanli/*.hpp
#     )


add_executable(cpp_test ${SOURCES} ${SOURCES_EXERCISE} ${SOURCES_TONGXUNGUANLIXITONG})

#  target_include_directories(cpp_test PUBLIC
#      ${CMAKE_CURRENT_SOURCE_DIR}/exercise
#   )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
