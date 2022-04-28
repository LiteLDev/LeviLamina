#include "pch.h"
#include "Utils.h"
#include <Psapi.h>
std::string GetCallerModuleFileName(unsigned long FramesToSkip)
{
    static const int maxFrameCount = 1;
    void* frames[maxFrameCount];
    int frameCount = CaptureStackBackTrace(FramesToSkip + 2, maxFrameCount, frames, NULL);

    HANDLE hProcess = GetCurrentProcess();

    if (0 < frameCount)
    {
        HMODULE hModule;
        GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          (LPCWSTR)frames[0], &hModule);
        wchar_t buf[MAX_PATH] = {0};
        GetModuleFileNameEx(GetCurrentProcess(), hModule, buf, MAX_PATH);
        return std::filesystem::path(buf).filename().u8string();
    }
    return "Unknown";
}