set(LV_AIRSHOOT_DIR gui)
file(GLOB_RECURSE LV_AIRSHOOT_SOURCES ${LV_AIRSHOOT_DIR}/*.c)

idf_component_register(
    SRCS "main.c" ${LV_AIRSHOOT_SOURCES}
    INCLUDE_DIRS "." ${LV_AIRSHOOT_DIR})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-variable -Wno-unused-function)