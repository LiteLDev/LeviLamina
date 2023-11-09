#include "ll/api/utils/WinUtils.h"

#include <string>

#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

#include "psapi.h"

using namespace ll::utils::string_utils;
namespace ll::utils::win_utils {

std::string getSystemLocaleName() {
    wchar_t buf[LOCALE_NAME_MAX_LENGTH]{};
    GetSystemDefaultLocaleName(buf, LOCALE_NAME_MAX_LENGTH);
    auto str = wstr2str(buf);
    std::replace(str.begin(), str.end(), '-', '_');
    return str;
}

bool isWine() {
    static bool result = []() {
        HMODULE ntdll = GetModuleHandleW(L"ntdll.dll");
        if (!ntdll) return false;
        auto funcWineGetVersion = GetProcAddress(ntdll, "wine_get_version");
        if (funcWineGetVersion) return true;
        else return false;
    }();
    return result;
}

std::span<uchar> getImageRangeSpan() {
    static const uintptr_t rangeStart = [] {
        DWORD_PTR baseAddress   = 0;
        HANDLE    processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId());
        HMODULE*  moduleArray;
        DWORD     bytesRequired = 0;

        if (!processHandle) return baseAddress;

        if (!EnumProcessModules(processHandle, nullptr, 0, &bytesRequired) || !bytesRequired) {
            CloseHandle(processHandle);
            return baseAddress;
        }

        std::string tmp(bytesRequired, ' ');

        moduleArray = (HMODULE*)tmp.data();
        if (EnumProcessModules(processHandle, moduleArray, bytesRequired, &bytesRequired)) {
            baseAddress = (DWORD_PTR)moduleArray[0];
        }

        CloseHandle(processHandle);
        return baseAddress;
    }();

    static MODULEINFO miModInfo;
    static bool       init = [&] {
        GetModuleInformation(GetCurrentProcess(), (HMODULE)rangeStart, &miModInfo, sizeof(MODULEINFO));
        return true;
    }();
    static const uintptr_t rangeEnd = rangeStart + miModInfo.SizeOfImage;

    return {(uchar*)rangeStart, (uchar*)rangeEnd};
}

} // namespace ll::utils::win_utils
