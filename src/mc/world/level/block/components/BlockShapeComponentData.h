#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Matrix;
// clang-format on

struct BlockShapeComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                   mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mOriginalAABBs;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mTransformedAABBs;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BlockShapeComponentData& operator=(BlockShapeComponentData const&);
    BlockShapeComponentData(BlockShapeComponentData const&);
    BlockShapeComponentData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::BlockShapeComponentData& operator=(::BlockShapeComponentData&&);
#endif

    MCAPI ~BlockShapeComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void transformAABBs(::BlockShapeComponentData& data, ::Matrix const& transform);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
