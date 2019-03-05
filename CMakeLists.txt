project(ALGO)

cmake_minimum_required (VERSION 2.6)
if (COMMAND cmake_policy)
  cmake_policy(SET CMP0003 NEW)
endif ()

# ============================================================================ #
# Set the location of the binary
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${ALGO_SOURCE_DIR}/bin")

# ============================================================================ #
# C sources
message(STATUS ">>> Adding src subdirectory")
add_subdirectory(src)
