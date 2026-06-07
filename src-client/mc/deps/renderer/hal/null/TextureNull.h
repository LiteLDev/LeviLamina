#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/base/TextureBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { struct TextureDescription; }
// clang-format on

namespace mce {

class TextureNull : public ::mce::TextureBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createTexture(::mce::RenderContext& renderContext, ::mce::TextureDescription const& textureDescription);
    // NOLINTEND
};

} // namespace mce
