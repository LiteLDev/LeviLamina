#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceRenderTargetTexture; }
// clang-format on

namespace Gameface {

struct VisitedRenderTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mColor;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mColorDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceRenderTargetTexture const*> mDepth;
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const*>                     mDepthDescription;
    // NOLINTEND
};

} // namespace Gameface
