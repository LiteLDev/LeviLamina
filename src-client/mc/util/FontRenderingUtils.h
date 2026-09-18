#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Font;
class ScreenContext;
namespace mce { class Color; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

namespace FontRenderingUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::mce::Font::RenderingParameters> tryGetRenderingParameters(
    ::Font const&          font,
    ::ScreenContext const& screenContext,
    int                    glyphSheet,
    float                  guiScale,
    ::mce::Color const&    textColor,
    bool                   hasShadow,
    uint                   textureWidth,
    uint                   textureHeight
);
// NOLINTEND

} // namespace FontRenderingUtils
