#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
namespace mce { struct ServerTexture; }
namespace mce { struct TextureResourceService; }
// clang-format on

namespace TexturePairHelper {
// functions
// NOLINTBEGIN
MCNAPI void updateTexture(
    ::mce::TextureResourceService& textureResourceService,
    ::mce::Image const&            image,
    ::mce::ServerTexture const&    serverTexture,
    ::std::string_view             debugUpdateName
);
// NOLINTEND

} // namespace TexturePairHelper
