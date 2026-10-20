#include <coreinit/screen.h>
#include <rpxloading/rpxloading.h>

// Forces C-style linking so the Wii U system loader can see the main function
extern "C" int main(int argc, char **argv) {
    OSScreenInit();

    // Custom logic will live here
    
    return 0;
}
