set(LV_PVZ_DIR gui)
file(GLOB_RECURSE LV_PVZ_SOURCES ${LV_PVZ_DIR}/*.c)

idf_component_register(
    SRCS "main.c" ${LV_PVZ_SOURCES}
    INCLUDE_DIRS "." ${LV_PVZ_DIR})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-variable -Wno-unused-function)