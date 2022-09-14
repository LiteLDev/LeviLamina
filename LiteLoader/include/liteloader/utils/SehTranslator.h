#pragma once
/*
 * @brief This file is a simple header-only SEH-Exception convert helper with minwindef
 */
#ifndef _AMD64_
#define _AMD64_
#endif

#ifdef SEH_TRANS_INFO_STRUCT
#include <minwindef.h>
#define SEH_EXP_INFO_POINTER struct _EXCEPTION_POINTERS*
#else
#define SEH_EXP_INFO_POINTER void*
#endif

#include <exception>

#pragma comment(lib, "ntdll")

namespace {
namespace WinAPI {
// import windows api manually to avoid windows headers import
extern "C" {
long __stdcall RtlNtStatusToDosError(long Status);
__declspec(dllimport) unsigned long __stdcall FormatMessageA(unsigned long dwFlags, const void* lpSource, unsigned long dwMessageId, unsigned long dwLanguageId, char* lpBuffer, unsigned long nSize, char** Arguments);
__declspec(dllimport) void* __stdcall LocalFree(void* hMem);
}
namespace FormatMessageFlags {
constexpr int FROM_HMODULE = 0x00000800;
constexpr int FROM_SYSTEM = 0x00001000;
constexpr int ALLOCATE_BUFFER = 0x00000100;
}; // namespace FormatMessageFlags
}; // namespace WinAPI
}; // namespace

class seh_exception : std::exception {
public:
    const unsigned int _expCode = 0;
    const char* _expMsg = nullptr;
    const SEH_EXP_INFO_POINTER _expInfo = nullptr;

    seh_exception(unsigned int ExpCode, SEH_EXP_INFO_POINTER ExpInfo)
    : _expCode(ExpCode), _expInfo(ExpInfo) {
    }

    ~seh_exception() override {
        if (_expMsg) {
            WinAPI::LocalFree((char*)_expMsg);
            _expMsg = nullptr;
        }
    };

    [[nodiscard]] const char* what() const noexcept override {

        unsigned long messageLength = WinAPI::FormatMessageA(
            WinAPI::FormatMessageFlags::ALLOCATE_BUFFER | WinAPI::FormatMessageFlags::FROM_SYSTEM | WinAPI::FormatMessageFlags::FROM_HMODULE,
            nullptr,
            WinAPI::RtlNtStatusToDosError((long)_expCode),
            0,
            (char*)&_expMsg,
            0,
            nullptr);

        if (messageLength) {
            return _expMsg;
        }

        return "SEH_UNKNOW_ERROR";
    }

    [[nodiscard]] const SEH_EXP_INFO_POINTER info() const {
        return _expInfo;
    }

    [[nodiscard]] unsigned int code() const {
        return _expCode;
    }

    /*
     * @brief Translate SEH Exception to C++ Exception, enable /EHa(Enable SEH Exception) and call _set_se_translator(seh_exception::TranslateSEHtoCE) in new thread
     */
    static void __cdecl TranslateSEHtoCE(unsigned int ExpCode, struct _EXCEPTION_POINTERS* ExpInfo) {
        throw seh_exception(ExpCode, ExpInfo);
    }
};
