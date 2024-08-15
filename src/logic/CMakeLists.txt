add_library(logic "")

target_sources(logic
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/logic.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/logic.hpp
)
target_include_directories(logic
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
