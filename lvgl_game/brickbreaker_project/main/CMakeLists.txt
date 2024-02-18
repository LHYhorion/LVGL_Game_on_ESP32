idf_component_register(
    SRCS "main.c" "ballgame.c" "qiu.c"
    INCLUDE_DIRS ".")

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-variable -Wno-unused-function)