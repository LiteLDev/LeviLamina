#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

struct BlockMapColorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::mce::Color> mMapColor;
    ::ll::TypedStorage<1, 1, ::TintMethod>  mTintMethod;
    // NOLINTEND
};
