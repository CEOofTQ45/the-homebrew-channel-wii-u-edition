cmake_minimum_required(VERSION 3.13)

# Force CMake to load the devkitPro Wii U hardware toolchain rules
set(CMAKE_TOOLCHAIN_FILE "$ENV{DEVKITPRO}/cmake/WiiU.cmake")

project(TheHomebrewChannelWiiUEdition C CXX)

find_package(WUT REQUIRED)

add_executable(my_launcher source/main.cpp)

target_link_libraries(my_launcher
    wut::coreinit 
    rpxloading
)

# Tell wuhbtool exactly where the placeholder images live
wut_create_wuhb(my_launcher
    NAME "The Homebrew Channel - Wii U Edition"
    AUTHOR "The TQ Corp."
)
