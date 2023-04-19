add_library(Stack_light Stack_light.h Stack_light.cpp)

add_executable(Stack_light_test Stack_light_test.cpp)
target_link_libraries(Stack_light_test Stack_light)
