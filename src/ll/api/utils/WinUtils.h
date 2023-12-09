#pragma once

#include <span>
#include <string>
#include <optional>
#include <filesystem>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::inline utils::win_utils {

LLNDAPI std::string getSystemLocaleName();

LLNDAPI bool isWine();

LLNDAPI std::span<uchar> getImageRange(std::string_view name = "");

LLNDAPI void* getModuleHandle(void* addr);

LLNDAPI std::optional<std::filesystem::path> getModulePath(void* handle);

LLNDAPI std::string getModuleFileName(void* handle);

inline std::string getCallerModuleFileName(void* addr = _ReturnAddress()) {
    return getModuleFileName(getModuleHandle(addr));
}

} // namespace ll::inline utils::win_utils
