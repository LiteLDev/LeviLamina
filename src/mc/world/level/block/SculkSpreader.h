#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/Block.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class SculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk12233c;
    ::ll::UntypedStorage<4, 4>  mUnk794889;
    ::ll::UntypedStorage<4, 4>  mUnkded1eb;
    ::ll::UntypedStorage<4, 4>  mUnk7ef054;
    ::ll::UntypedStorage<4, 4>  mUnkf04999;
    ::ll::UntypedStorage<8, 24> mUnka74eae;
    ::ll::UntypedStorage<8, 16> mUnk4093a2;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const&);
    SculkSpreader(SculkSpreader const&);
    SculkSpreader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addCursors(::BlockPos const& pos, int charge);

    MCNAPI void save(::CompoundTag& tag) const;

    MCNAPI void updateCursors(
        ::IBlockWorldGenAPI& target,
        ::BlockSource*       region,
        ::BlockPos const&    originPos,
        ::Random&            random,
        bool                 spreadVeins
    );

    MCNAPI ~SculkSpreader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
