#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace TreeHelper {

struct AttachableDecoration {
public:
    // AttachableDecoration inner types declare
    // clang-format off
    struct DirectionMask;
    // clang-format on
    
    // AttachableDecoration inner types define
    enum class GrowthDirection : int {
        Down = 0,
        Up = 1,
        Out = 2,
    };
    
    struct DirectionMask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWest;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mDecorationChance;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor> mDecorationBlock;
    ::ll::TypedStorage<4, 4, int> mNumSteps;
    ::ll::TypedStorage<4, 4, ::TreeHelper::AttachableDecoration::GrowthDirection> mDirection;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeMultiDecoration(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, ::BlockPos const& origin) const;

    MCAPI void placeDecoration(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::TreeHelper::AttachableDecoration::DirectionMask const& mask) const;

    MCAPI ~AttachableDecoration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
