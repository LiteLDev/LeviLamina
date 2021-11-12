#pragma once
#include <windows.h>
#include <exception>
#include <string>

template <int len>
struct PatchHelper {
    unsigned char data[len];
    using ref_t = char (&)[len];
    constexpr bool operator==(ref_t ref) const noexcept {
        return memcmp(data, ref, sizeof data) == 0;
    }
    constexpr bool operator!=(ref_t ref) const noexcept {
        return memcmp(data, ref, sizeof data) != 0;
    }
    constexpr bool operator==(PatchHelper ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) == 0;
    }
    constexpr bool operator!=(PatchHelper ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) != 0;
    }
    void operator=(ref_t ref) { memcpy(data, ref, sizeof data); }
    void DoPatch(PatchHelper expected, PatchHelper patched) {
        if (*this == expected)
            *this = patched;
        else
            throw FailedToPatch(*this, expected);
    }
    void EasyPatch(PatchHelper expected, PatchHelper patched) {
        DWORD old, tmp;
        VirtualProtect((LPVOID)this, (SIZE_T)len, PAGE_EXECUTE_READWRITE, &old);
        DoPatch(expected, patched);
        VirtualProtect((LPVOID)this, (SIZE_T)len, old, &tmp);
    }

    std::string Dump() const noexcept {
        char buffer[2 * len + 1] = {};
        char *ptr                = buffer;
        for (auto ch : data)
            ptr += sprintf(ptr, "%02X", (unsigned)ch);
        return {buffer};
    }
};

struct NopFiller {
    template <int len>
    operator PatchHelper<len>() {
        PatchHelper<len> ret;
        memset(ret.data, 0x90, len);
        return ret;
    }
};

struct FailedToPatch : std::exception {
    std::string info;
    template <int len>
    FailedToPatch(PatchHelper<len> const &current, PatchHelper<len> const &expected) {
        info = "Failed to patch: expected " + expected.Dump() + ", but actual " + current.Dump();
    }
    const char *what() const noexcept { return info.c_str(); }
};