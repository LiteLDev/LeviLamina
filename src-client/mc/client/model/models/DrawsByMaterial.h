#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class DrawsByMesh;
// clang-format on

class DrawsByMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mMaterial;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByMesh>> mDrawsByMesh;
    // NOLINTEND
};
