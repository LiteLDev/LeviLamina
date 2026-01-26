#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

struct BlockShapeComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mOriginalAABBs;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mTransformedAABBs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockShapeComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
