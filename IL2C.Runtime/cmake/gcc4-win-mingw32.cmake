cmake_minimum_required (VERSION 3.7)

set(CMAKE_BUILD_TYPE, "#{CONFIGURATION}")

add_definitions(-DWIN32)
add_definitions(-D_LIB)
add_definitions(-DWIN32_LEAN_AND_MEAN)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -g2 -fdata-sections -ffunction-sections -Wl,--gc-sections -Wl,--enable-stdcall-fixup -Wl,--add-stdcall-alias")

if("${CONFIGURATION}" STREQUAL "Release")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Ofast -fomit-frame-pointer -DNDEBUG")
else()
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -D_DEBUG")
endif()

set(IL2C_LIBRARY_NAME_BASE "il2c-gcc4-win-${PLATFORM}")
set(IL2C_LIBRARY_NAME "${IL2C_LIBRARY_NAME_BASE}-${CONFIGURATION}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/${CONFIGURATION}/lib${IL2C_LIBRARY_NAME_BASE}.a)