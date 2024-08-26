#include "ll/api/utils/SystemUtils.h"

#include <string>

#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"

#include "windows.h"

#include "psapi.h"

namespace ll::inline utils::sys_utils {
using namespace ll::string_utils;

std::string getSystemLocaleCode() {
    wchar_t buf[LOCALE_NAME_MAX_LENGTH]{};
    GetUserDefaultLocaleName(buf, LOCALE_NAME_MAX_LENGTH);
    auto str = wstr2str(buf);
    return str;
}
std::string const& getSystemName() {
    static std::string result = []() {
        std::string name{"Unknown"};
        HMODULE     hMod = LoadLibraryEx(L"winbrand.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
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
        HMODULE ntdll = GetModuleHandle(L"ntdll.dll");
        if (!ntdll) return false;
        auto funcWineGetVersion = GetProcAddress(ntdll, "wine_get_version");
        if (funcWineGetVersion) return true;
        else return false;
    }();
    return result;
}

std::span<std::byte> getImageRange(std::string_view name) {
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
            return {(std::byte*)rangeStart, moduleInfo.SizeOfImage};
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
}

std::string getModuleFileName(void* handle, void* process) {
    return getModulePath(handle, process)
        .transform([](auto&& path) { return u8str2str(path.stem().u8string()); })
        .value_or("unknown module");
}

std::pair<std::tm, ushort> getLocalTime() {
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

std::string getEnvironmentVariable(std::string_view name) {
    auto wName = str2wstr(name);
    return wstr2str(adaptFixedSizeToAllocatedResult(
                        [&wName](wchar_t* value, size_t valueLength, size_t& valueLengthNeededWithNul) -> bool {
                            ::SetLastError(ERROR_SUCCESS);
                            valueLengthNeededWithNul =
                                ::GetEnvironmentVariableW(wName.c_str(), value, static_cast<DWORD>(valueLength));
                            if (valueLengthNeededWithNul == 0 && ::GetLastError() != ERROR_SUCCESS) {
                                return false;
                            }
                            if (valueLengthNeededWithNul < valueLength) {
                                valueLengthNeededWithNul++; // It fit, account for the null.
                            }
                            return true;
                        }
    ).value_or(L""));
}
bool setEnvironmentVariable(std::string_view name, std::string_view value) {
    return (bool)SetEnvironmentVariableW(str2wstr(name).c_str(), str2wstr(value).c_str());
}

bool addOrSetEnvironmentVariable(std::string_view name, std::string_view value) {
    auto oldValue = getEnvironmentVariable(name);
    if (!oldValue.empty()) {
        oldValue += ";";
    }
    oldValue += value;
    return setEnvironmentVariable(name, oldValue);
}

bool isStdoutSupportAnsi() {
    DWORD mode;
    if (GetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), &mode)) {
        return mode & ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    }
    return false;
}

std::optional<std::system_error> DynamicLibrary::load(std::filesystem::path const& path) noexcept {
    if (lib) {
        return std::system_error{{}};
    }
    lib = LoadLibrary(path.c_str());
    if (!lib) {
        return error_utils::getLastSystemError();
    }
    return {};
}
std::optional<std::system_error> DynamicLibrary::free() noexcept {
    if (!FreeLibrary((HMODULE)lib)) {
        return error_utils::getLastSystemError();
    }
    return {};
}
void* DynamicLibrary::getAddress(char const* name) noexcept { return GetProcAddress((HMODULE)lib, name); }
} // namespace ll::inline utils::sys_utils
