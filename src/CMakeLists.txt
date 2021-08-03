file(GLOB_RECURSE HEADER_FILES *.h)
file(GLOB_RECURSE CODE_FILES *.cpp)

add_executable(create-cpp-app
    ${HEADER_FILES}
    ${CODE_FILES}
)

target_link_libraries(create-cpp-app
    ${CONAN_LIBS}
)
