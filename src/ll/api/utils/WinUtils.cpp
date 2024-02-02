#include "ll/api/utils/WinUtils.h"

#include <string>

#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

#include "psapi.h"

using namespace ll::string_utils;
namespace ll::inline utils::win_utils {

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

std::span<uchar> getImageRange(std::string_view name) {
    static auto process = GetCurrentProcess();
    HMODULE     rangeStart;
    if (name.empty()) {
        rangeStart = GetModuleHandle(nullptr);
    } else {
        rangeStart = GetModuleHandle(str2wstr(name).c_str());
    }
    if (rangeStart) {
        MODULEINFO moduleInfo;
        if (GetModuleInformation(process, rangeStart, &moduleInfo, sizeof(MODULEINFO))) {
            return {(uchar*)rangeStart, moduleInfo.SizeOfImage};
        }
    }
    return {};
}

void* getModuleHandle(void* addr) {
    HMODULE hModule = nullptr;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        reinterpret_cast<LPCTSTR>(addr),
        &hModule
    );
    return hModule;
}

std::optional<std::filesystem::path> getModulePath(void* handle) {
    std::wstring path(32767, '\0');
    if (auto res = GetModuleFileName((HMODULE)handle, path.data(), 32767); res != 0 && res != 32767) {
        path.resize(res);
        return std::filesystem::path(path);
    } else {
        return std::nullopt;
    }
}

std::string getModuleFileName(void* handle) {
#if _HAS_CXX23
    return getModulePath(handle).transform([](auto&& path) { return u8str2str(path.filename().u8string()); }
    ).value_or("");
#else
    return {};
#endif
}

LLNDAPI std::pair<std::tm, int> getLocalTime() {
    SYSTEMTIME sysTime;
    GetLocalTime(&sysTime);
    std::tm time{
        .tm_sec   = sysTime.wSecond,      // seconds after the minute - [0, 60] including leap second
        .tm_min   = sysTime.wMinute,      // minutes after the hour - [0, 59]
        .tm_hour  = sysTime.wHour,        // hours since midnight - [0, 23]
        .tm_mday  = sysTime.wDay,         // day of the month - [1, 31]
        .tm_mon   = sysTime.wMonth - 1,   // months since January - [0, 11]
        .tm_year  = sysTime.wYear - 1900, // years since 1900
        .tm_wday  = sysTime.wDayOfWeek,   // days since Sunday - [0, 6]
        .tm_isdst = -1                    // daylight savings time flag
    };
    return {time, sysTime.wMilliseconds};
}

} // namespace ll::inline utils::win_utils
