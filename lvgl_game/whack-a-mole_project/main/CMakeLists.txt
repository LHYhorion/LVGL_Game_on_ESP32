set(LV_MOLE_DIR gui)
file(GLOB_RECURSE LV_MOLE_SOURCES ${LV_MOLE_DIR}/*.c)

idf_component_register(
    SRCS "main.c" ${LV_MOLE_SOURCES}
    INCLUDE_DIRS "." ${LV_MOLE_DIR})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-variable -Wno-unused-function)