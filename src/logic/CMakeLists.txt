add_library(logic "")

target_sources(logic
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/deck.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/deck.hpp
)
target_include_directories(logic
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
