#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ArmorTrimTextureData;
class ArmorTrimUnloader;
namespace cg { class ImageBuffer; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class ArmorTrimUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void adjustLeatherTrimAlpha(::cg::ImageBuffer& trim);

    MCAPI static ::mce::TexturePtr createTexture(
        ::mce::TextureGroup&          textureGroup,
        ::ArmorTrimTextureData const& armorTrimTextureData,
        ::ArmorTrimUnloader*          trimUnloader
    );
    // NOLINTEND
};
