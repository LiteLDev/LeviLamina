#pragma once
/*
 * @brief This file is a simple header-only SEH-Exception convert helper with minwindef
 */
#include <exception>

#pragma comment(lib, "ntdll")

#include "ll/api/base/StdInt.h"

namespace {
namespace WinAPI {
// import Windows api manually to avoid windows headers import
extern "C" {
long __stdcall RtlNtStatusToDosError(long Status);
__declspec(dllimport) ulong __stdcall FormatMessageA(
    ulong       dwFlags,
    const void* lpSource,
    ulong       dwMessageId,
    ulong       dwLanguageId,
    char*       lpBuffer,
    ulong       nSize,
    char**      Arguments
);
__declspec(dllimport) void* __stdcall LocalFree(void* hMem);
}
namespace FormatMessageFlags {
constexpr int FROM_HMODULE    = 0x00000800;
constexpr int FROM_SYSTEM     = 0x00001000;
constexpr int ALLOCATE_BUFFER = 0x00000100;
} // namespace FormatMessageFlags
} // namespace WinAPI
} // namespace

class seh_exception : std::exception {
public:
    const uint                 _expCode = 0;
    char const*                _expMsg  = nullptr;
    const void* _expInfo = nullptr;

    seh_exception(uint ExpCode, void* ExpInfo) : _expCode(ExpCode), _expInfo(ExpInfo) {}

    ~seh_exception() override {
        if (_expMsg) {
            WinAPI::LocalFree((char*)_expMsg);
            _expMsg = nullptr;
        }
    };

    [[nodiscard]] char const* what() const noexcept override {

        ulong messageLength = WinAPI::FormatMessageA(
            WinAPI::FormatMessageFlags::ALLOCATE_BUFFER | WinAPI::FormatMessageFlags::FROM_SYSTEM
                | WinAPI::FormatMessageFlags::FROM_HMODULE,
            nullptr,
            WinAPI::RtlNtStatusToDosError((long)_expCode),
            0,
            (char*)&_expMsg,
            0,
            nullptr
        );

        if (messageLength) { return _expMsg; }

        return "SEH_UNKNOW_ERROR";
    }

    [[nodiscard]] const void* info() const { return _expInfo; }

    [[nodiscard]] uint code() const { return _expCode; }

    /*
     * @brief Translate SEH Exception to C++ Exception, enable /EHa(Enable SEH Exception) and call
     * _set_se_translator(seh_exception::TranslateSEHtoCE) in new thread
     */
    static void __cdecl TranslateSEHtoCE(uint ExpCode, struct _EXCEPTION_POINTERS* ExpInfo) {
        throw seh_exception(ExpCode, ExpInfo);
    }
};
