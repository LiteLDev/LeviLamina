#include "windows.h"
#include "imgui/ImGuiHooks.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;
    ImGuiHooks::init();
    return TRUE;
}
