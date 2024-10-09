#pragma once

#include <filesystem>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

namespace ll::inline utils::font_utils {

enum class FontStyle {
    Normal,
    Oblique,
    Italic,
};
LLNDAPI std::vector<std::filesystem::path> getFilePathFromFontName(
    std::string_view         name,
    optional_ref<uint>       index   = std::nullopt,
    std::optional<float>     weight  = std::nullopt,
    std::optional<float>     stretch = std::nullopt,
    std::optional<FontStyle> style   = std::nullopt
);

LLNDAPI std::vector<std::string> getSystemFontNames();

LLNDAPI std::optional<std::string> getSystemDefaultFontName();

} // namespace ll::inline utils::font_utils
