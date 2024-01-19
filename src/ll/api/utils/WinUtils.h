#pragma once

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

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRange(std::string_view name = "");

LLNDAPI void* getModuleHandle(void* addr);

LLNDAPI std::optional<std::filesystem::path> getModulePath(void* handle);

LLNDAPI std::string getModuleFileName(void* handle);

LLNDAPI std::pair<std::tm, int> getLocalTime(); // tm & ms

[[nodiscard]] inline std::string getCallerModuleFileName(void* addr = _ReturnAddress()) {
    return getModuleFileName(getModuleHandle(addr));
}

} // namespace ll::inline utils::win_utils
