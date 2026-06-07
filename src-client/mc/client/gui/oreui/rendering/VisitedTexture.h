#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct TextureDescription; }
namespace mce::framebuilder { struct GamefaceMeshTexture; }
// clang-format on

namespace Gameface {

struct VisitedTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::TextureDescription const&>             mDescription;
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::GamefaceMeshTexture const&> mTexture;
    ::ll::TypedStorage<8, 8, ::std::array<float, 4> const&>                   mTextureSize;
    ::ll::TypedStorage<4, 4, int>                                             mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedTexture& operator=(VisitedTexture const&);
    VisitedTexture(VisitedTexture const&);
    VisitedTexture();
};

} // namespace Gameface
