#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        Up   = 1,
        Out  = 2,
    };

    struct DirectionMask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk2d65d6;
        ::ll::UntypedStorage<1, 1> mUnk902e71;
        ::ll::UntypedStorage<1, 1> mUnk4cfdc3;
        ::ll::UntypedStorage<1, 1> mUnk1f977f;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectionMask& operator=(DirectionMask const&);
        DirectionMask(DirectionMask const&);
        DirectionMask();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk634662;
    ::ll::UntypedStorage<8, 184> mUnkac5ea1;
    ::ll::UntypedStorage<4, 4>   mUnk8d2c21;
    ::ll::UntypedStorage<4, 4>   mUnk33cfcb;
    // NOLINTEND

public:
    // prevent constructor by default
    AttachableDecoration& operator=(AttachableDecoration const&);
    AttachableDecoration(AttachableDecoration const&);
    AttachableDecoration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeMultiDecoration(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::Block const&       block,
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
