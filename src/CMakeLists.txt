

set(DinossauroSRCS
    vars.cpp
    main.cpp
    Sprites.cpp
    redeNeural.cpp
    FuncoesAuxiliares.cpp
    DNAs.cpp
    Desenhar.cpp
    GeradorObstaculos.cpp
    Inicializar.cpp
    Alocacoes.cpp
    Colisao.cpp
    Movimentar.cpp
    Atualizar.cpp
    InputsRedeNeural.cpp
    
)

add_executable(Dino ${DinossauroSRCS})
target_link_libraries(Dino Pig::pig)
