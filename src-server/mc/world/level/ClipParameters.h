#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class Vec3;
// clang-format on

struct ClipParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mA;
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mB;
    ::ll::TypedStorage<8, 8, ::Actor*> mActor;
    ::ll::TypedStorage<1, 1, bool> mLiquid;
    ::ll::TypedStorage<1, 1, bool> mFullOnly;
    ::ll::TypedStorage<1, 1, bool> mStopOnFirstLiquidHit;
    ::ll::TypedStorage<1, 1, bool> mIgnoreBorderBlocks;
    ::ll::TypedStorage<1, 1, ::ShapeType> mShapeType;
    ::ll::TypedStorage<4, 4, int> mMaxDistance;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const> mShouldCheckBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipParameters& operator=(ClipParameters const&);
    ClipParameters(ClipParameters const&);
    ClipParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClipParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
