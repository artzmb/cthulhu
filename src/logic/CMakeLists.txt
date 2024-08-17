add_library(logic "")

target_sources(logic
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/deck.cpp
        ${CMAKE_CURRENT_LIST_DIR}/card.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/deck.hpp
        ${CMAKE_CURRENT_LIST_DIR}/card.hpp
)
target_include_directories(logic
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
