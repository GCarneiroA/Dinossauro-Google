
set(DinossauroSRCS
    main.cpp
)

add_executable(Dino ${DinossauroSRCS})
target_link_libraries(Dino ${SDL2_LIBRARIES})
