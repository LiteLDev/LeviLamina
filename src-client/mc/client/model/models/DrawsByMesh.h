#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DrawsByTexture;
namespace mce { class Mesh; }
// clang-format on

class DrawsByMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh*>                     mMesh;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByTexture>> mDrawsByTexture;
    // NOLINTEND
};
