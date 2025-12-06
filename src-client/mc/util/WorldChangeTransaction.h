#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class WorldChangeTransaction {
public:
    // WorldChangeTransaction inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // WorldChangeTransaction inner types define
    struct Data {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>                              mTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldChangeTransaction::Data>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldChangeTransaction& operator=(WorldChangeTransaction const&);
    WorldChangeTransaction(WorldChangeTransaction const&);
    WorldChangeTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldChangeTransaction(::IBlockWorldGenAPI& target);

    MCAPI void setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCAPI ~WorldChangeTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IBlockWorldGenAPI& target);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
