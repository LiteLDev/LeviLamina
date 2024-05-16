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
std::string const& getSystemName() {
    static std::string result = []() {
        std::string name{"Unknown"};
        HMODULE     hMod = LoadLibraryEx(L"winbrand.dll", NULL, LOAD_LIBRARY_SEARCH_SYSTEM32);
        if (hMod) {
            PWSTR(WINAPI * pfnBrandingFormatString)(PCWSTR pstrFormat);
            (FARPROC&)pfnBrandingFormatString = GetProcAddress(hMod, "BrandingFormatString");
            if (pfnBrandingFormatString) {
                PWSTR pstrOSName = pfnBrandingFormatString(L"%WINDOWS_LONG%");
                name             = wstr2str(pstrOSName);
                // Remember to free the memory!
                GlobalFree((HGLOBAL)pstrOSName);
            }
            FreeLibrary(hMod);
        }
        return name;
    }();
    return result;
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

std::optional<std::filesystem::path> getModulePath(void* handle, void* process) {
#if _HAS_CXX23
    return adaptFixedSizeToAllocatedResult(
               [module = (HMODULE)handle,
                process](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                   DWORD  copiedCount{};
                   size_t valueUsedWithNul{};
                   bool   copyFailed{};
                   bool   copySucceededWithNoTruncation{};
                   if (process != nullptr) {
                       // GetModuleFileNameExW truncates and provides no error or other indication it has done so.
                       // The only way to be sure it didn't truncate is if it didn't need the whole buffer. The
                       // count copied to the buffer includes the nul-character as well.
                       copiedCount = ::GetModuleFileNameExW(process, module, value, static_cast<DWORD>(valueLength));
                       valueUsedWithNul              = static_cast<size_t>(copiedCount) + 1;
                       copyFailed                    = (0 == copiedCount);
                       copySucceededWithNoTruncation = !copyFailed && (copiedCount < valueLength - 1);
                   } else {
                       // In cases of insufficient buffer, GetModuleFileNameW will return a value equal to
                       // lengthWithNull and set the last error to ERROR_INSUFFICIENT_BUFFER. The count returned does
                       // not include the nul-character
                       copiedCount      = ::GetModuleFileNameW(module, value, static_cast<DWORD>(valueLength));
                       valueUsedWithNul = static_cast<size_t>(copiedCount) + 1;
                       copyFailed       = (0 == copiedCount);
                       copySucceededWithNoTruncation = !copyFailed && (copiedCount < valueLength);
                   }
                   if (copyFailed) {
                       return false;
                   }
                   // When the copy truncated, request another try with more space.
                   valueLengthNeededWithNul = copySucceededWithNoTruncation ? valueUsedWithNul : (valueLength * 2);
                   return true;
               }
    ).transform([](auto&& path) { return std::filesystem::path(path); });
#else
    return {};
#endif
}

std::string getModuleFileName(void* handle, void* process) {
#if _HAS_CXX23
    return getModulePath(handle, process)
        .transform([](auto&& path) { return u8str2str(path.filename().u8string()); })
        .value_or("unknown module");
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
