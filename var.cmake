# extern
set(EXTERN_ROOT "${PROJECT_SOURCE_DIR}/extern")
message("EXTERN_ROOT: ${EXTERN_ROOT}")

set(EXTERN_LIB "${EXTERN_ROOT}/lib")
message("EXTERN_LIB: ${EXTERN_LIB}")

set(EXTERN_INC "${EXTERN_ROOT}/inc")
message("EXTERN_INC: ${EXTERN_INC}")

# shared


# lib
set(FMT_LIB "${EXTERN_LIB}/fmt/libfmt.a")
message("FMT_LIB: ${FMT_LIB}")

# quick
set(UTIL_LIBS
        ${FMT_LIB})
message("UTIL_LIBS: ${UTIL_LIBS}")