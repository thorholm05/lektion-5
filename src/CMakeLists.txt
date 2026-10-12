
add_executable(cirkel cirkel.c)
target_link_libraries(cirkel m) # link with math library

add_executable(trekant trekant.c)
target_link_libraries(trekant m) # link with math library

add_executable(live_cirkel live_cirkel.c)
target_link_libraries(live_cirkel m) # link with math library

add_executable(live_trekant live_trekant.c)
target_link_libraries(live_trekant m) # link with math library
