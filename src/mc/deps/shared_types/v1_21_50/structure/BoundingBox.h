#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct BoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinX;
    ::ll::TypedStorage<4, 4, int> mMinY;
    ::ll::TypedStorage<4, 4, int> mMinZ;
    ::ll::TypedStorage<4, 4, int> mMaxX;
    ::ll::TypedStorage<4, 4, int> mMaxY;
    ::ll::TypedStorage<4, 4, int> mMaxZ;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
