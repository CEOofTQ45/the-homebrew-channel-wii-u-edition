#include <coreinit/screen.h>
#include <coreinit/time.h>
#include <rpxloading/rpxloading.h>

int main(int argc, char **argv) {
    OSScreenInit();
    // A super basic test: just boot into an app path if triggered
    // RPX_LoadFile("sd:/wiiu/apps/someapp/someapp.wuhb");
    return 0;
}
