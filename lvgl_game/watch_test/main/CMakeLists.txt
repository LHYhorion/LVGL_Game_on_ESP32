set(WATCH_UI_DIR gui)
file(GLOB_RECURSE WATCH_UI_SOURCES ${WATCH_UI_DIR}/*.c)

idf_component_register(
    SRCS "main.c" ${WATCH_UI_SOURCES}
    INCLUDE_DIRS "." ${WATCH_UI_DIR})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-unused-variable -Wno-unused-function)