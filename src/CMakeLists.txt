add_executable(cthulhu main.cpp)

add_subdirectory(logic)

target_link_libraries(cthulhu
    PRIVATE
        logic
)
