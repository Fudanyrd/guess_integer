#set variable
set(ANSWER "" CACHE STRING "Answer to the game")

#assert is ANSWER is null
if(ANSWER STREQUAL "")
    message(SEND_ERROR "answer must not be empty")
endif()

add_library(guess INTERFACE)
target_include_directories(guess
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_definitions(guess INTERFACE ANSWER=${ANSWER})