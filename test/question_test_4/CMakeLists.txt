add_executable(q_04_tests "question_tests_4.cpp")
target_link_libraries(q_04_tests q_04_library)
add_test(NAME q_04_tests COMMAND q_04_tests -s)