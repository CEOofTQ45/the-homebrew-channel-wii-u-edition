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

# Added SHORT_NAME (this stops the script from crashing with exit code 2)
wut_create_wuhb(my_launcher
    NAME "The Homebrew Channel - Wii U Edition"
    SHORT_NAME "thehomebrewchannel"
    AUTHOR "The TQ Corp."
    VERSION "1.0.0"
)
