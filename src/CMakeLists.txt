# Find external libraries and dependencies

# ============================================================================ #
# Set compiler flags
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS} -std=c99 -O3 -Wall -Wunused-variable -Wno-unknown-pragmas -g -fPIC -ffast-math -lpthread")

# ============================================================================ #
# Set include directories
include_directories(${ALGO_SOURCE_DIR}/inc)

# ============================================================================ #
# Set source files
set(ALGO_SRCS
	helper.c
	sort.c
	search.c
    )

# ============================================================================ #
# Make the executable
add_executable(algo main.c ${ALGO_SRCS})
