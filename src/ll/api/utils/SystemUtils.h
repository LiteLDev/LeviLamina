#pragma once

#include <concepts>
#include <cstddef>
#include <filesystem>
#include <optional>
#include <span>
#include <string>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::sys_utils {

using HandleT = void*;

[[nodiscard]] inline HandleT getCurrentModuleHandle() { return internal::getCurrentModuleHandle(); }

LLNDAPI HandleT getModuleHandle(void* addr);

LLNDAPI std::optional<std::filesystem::path> getModulePath(HandleT handle, HandleT process = nullptr);

LLNDAPI std::string getModuleFileName(HandleT handle, HandleT process = nullptr);

[[nodiscard]] inline std::string getCallerModuleFileName(void* addr = LL_RETURN_ADDRESS) {
    return getModuleFileName(getModuleHandle(addr));
}
LLNDAPI std::span<std::byte> getImageRange(std::string_view name = "");

LLNDAPI std::string getSystemLocaleName();

LLNDAPI std::string const& getSystemName();

LLNDAPI std::pair<std::tm, int> getLocalTime(); // tm & ms

LLNDAPI std::string getEnvironmentVariable(std::string_view name);

LLAPI bool setEnvironmentVariable(std::string_view name, std::string_view value);

LLAPI bool addOrSetEnvironmentVariable(std::string_view name, std::string_view value);

LLNDAPI bool isStdoutSupportAnsi();

LLNDAPI bool isWine();

class DynamicLibrary {
    HandleT lib = nullptr;

public:
    [[nodiscard]] DynamicLibrary() {}
    [[nodiscard]] DynamicLibrary(std::filesystem::path const& path) { load(path); }
    ~DynamicLibrary() {
        if (lib) free();
    }

    DynamicLibrary(DynamicLibrary&&) noexcept            = default;
    DynamicLibrary& operator=(DynamicLibrary&&) noexcept = default;
    DynamicLibrary(DynamicLibrary const&)                = delete;
    DynamicLibrary& operator=(DynamicLibrary const&)     = delete;

    LLAPI std::optional<std::system_error> load(std::filesystem::path const& path) noexcept;
    LLAPI std::optional<std::system_error> free() noexcept;

    LLNDAPI void* getAddress(char const* name) noexcept;

    template <class T>
    T getAddress(char const* name) noexcept {
        return reinterpret_cast<T>(getAddress(name));
    }

    [[nodiscard]] constexpr HandleT handle() const noexcept { return lib; }
};

template <std::invocable<wchar_t*, size_t, size_t&> Fn>
[[nodiscard]] inline std::optional<std::wstring> adaptFixedSizeToAllocatedResult(Fn&& callback) noexcept {
    constexpr size_t arraySize = 256;

    wchar_t value[arraySize]{};
    size_t  valueLengthNeededWithNull{};

    std::optional<std::wstring> result{std::in_place};

    if (!std::invoke(std::forward<Fn>(callback), value, arraySize, valueLengthNeededWithNull)) {
        result.reset();
        return result;
    }
    if (valueLengthNeededWithNull <= arraySize) {
        return std::optional<std::wstring>{std::in_place, value, valueLengthNeededWithNull - 1};
    }
    do {
        result->resize(valueLengthNeededWithNull - 1);
        if (!std::invoke(std::forward<Fn>(callback), result->data(), result->size() + 1, valueLengthNeededWithNull)) {
            result.reset();
            return result;
        }
    } while (valueLengthNeededWithNull > result->size() + 1);
    if (valueLengthNeededWithNull <= result->size()) {
        result->resize(valueLengthNeededWithNull - 1);
    }
    return result;
}
} // namespace ll::inline utils::sys_utils
