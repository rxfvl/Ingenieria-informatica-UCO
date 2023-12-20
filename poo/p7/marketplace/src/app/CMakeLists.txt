add_library(app app-main.cc)
target_link_libraries(app PUBLIC market)
target_include_directories(app PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(app-main app-main.cc)
target_link_libraries(app-main PUBLIC app)