cmake_minimum_required(VERSION 3.13)

project(TheHomebrewChannelWiiUEdition C CXX)

# Find the Wii U Toolchain configuration
find_package(WUT REQUIRED)

# Tell the compiler where the source code is
add_executable(my_launcher source/main.cpp)

# Link the required internal system libraries
target_link_libraries(my_launcher
    wut::coreinit 
    rpxloading
)

# Tell wuhbtool exactly where the placeholder images live
wut_create_wuhb(my_launcher
    NAME "The Homebrew Channel - Wii U Edition"
    AUTHOR "The TQ Corp."
)
