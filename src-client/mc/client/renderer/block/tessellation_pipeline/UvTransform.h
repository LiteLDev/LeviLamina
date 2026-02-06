#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/Flip.h"

namespace ClientBlockPipeline {

class UvTransform {
public:
    // UvTransform inner types define
    enum class BoxType : uchar {
        CustomBoxWithLegacyTopRotation = 0,
        CustomBoxNoLegacyTopRotation   = 1,
        MinecraftFullBlock             = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::std::array<::Vec2, 4>> mUVs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void flipTransform(::Flip flip);
    // NOLINTEND
};

} // namespace ClientBlockPipeline
