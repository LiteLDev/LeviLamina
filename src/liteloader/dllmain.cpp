#pragma comment(linker, "/export:HookFunction=PreLoader.HookFunction")
#pragma comment(linker, "/export:dlsym_real=PreLoader.dlsym_real")
#pragma comment(linker, "/export:?dlsym_reverse@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@H@Z=PreLoader.?dlsym_reverse@@YA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@H@Z")


#include <windows.h>
BOOL WINAPI DllMain(HMODULE, DWORD ul_reason_for_call, LPVOID) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}