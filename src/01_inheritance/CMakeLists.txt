set(TARGET 01_inheritance)

set(HEADERS Employee.h)
set(SOURCES Employee.cpp)

include_directories(${EXTERN_INC})

add_executable(${TARGET} main.cpp ${HEADERS} ${SOURCES})

target_include_directories(${TARGET} PRIVATE ${EXTERN_INC} ${HEADERS})
target_link_libraries(${TARGET} PRIVATE ${UTIL_LIBS})