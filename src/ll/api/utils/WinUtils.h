#pragma once

#include <concepts>
#include <filesystem>
#include <optional>
#include <span>
#include <string>

#include <intrin.h>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::win_utils {

extern "C" struct _IMAGE_DOS_HEADER __ImageBase; // NOLINT(bugprone-reserved-identifier)

[[nodiscard]] inline void* getCurrentModuleHandle() { return &__ImageBase; }

LLNDAPI std::string getSystemLocaleName();

LLNDAPI std::string const& getSystemName();

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRange(std::string_view name = "");

LLNDAPI void* getModuleHandle(void* addr);

LLNDAPI std::optional<std::filesystem::path> getModulePath(void* handle, void* process = nullptr);

LLNDAPI std::string getModuleFileName(void* handle, void* process = nullptr);

LLNDAPI std::pair<std::tm, int> getLocalTime(); // tm & ms

[[nodiscard]] inline std::string getCallerModuleFileName(void* addr = _ReturnAddress()) {
    return getModuleFileName(getModuleHandle(addr));
}

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
} // namespace ll::inline utils::win_utils
