#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace TreeHelper {

struct AttachableDecoration {
public:
    // AttachableDecoration inner types declare
    // clang-format off
    struct DecorationBlockDescriptor;
    struct DirectionMask;
    // clang-format on

    // AttachableDecoration inner types define
    enum class GrowthDirection : int {
        Down = 0,
        Up   = 1,
        Out  = 2,
    };

    struct DecorationBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> blockDescriptor;
        ::ll::TypedStorage<4, 8, ::IntRange>          count;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DecorationBlockDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct DirectionMask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWest;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        ::ll::TypedStorage<1, 1, bool> mUp;
        ::ll::TypedStorage<1, 1, bool> mDown;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TreeHelper::AttachableDecoration::GrowthDirection> mDirection;
    ::ll::TypedStorage<4, 4, int>                                                 mNumSteps;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                                 mDecorationBlock;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                                mDecorationChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::TreeHelper::AttachableDecoration::DecorationBlockDescriptor>>
        mDecorationSequence;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeMultiDecoration(
        ::IBlockWorldGenAPI& target,
        ::Random&            random,
        ::BlockPos const&    pos,
        ::CommonDirection    dir,
        ::BlockPos const&    origin
    ) const;

    MCAPI void placeDecoration(
        ::IBlockWorldGenAPI&                                     target,
        ::BlockPos const&                                        pos,
        ::Random&                                                random,
        ::TreeHelper::AttachableDecoration::DirectionMask const& mask
    ) const;

    MCAPI ~AttachableDecoration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace TreeHelper
