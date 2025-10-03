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
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkb19e91;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

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
    MCNAPI explicit WorldChangeTransaction(::IBlockWorldGenAPI& target);

    MCNAPI void setBlock(::BlockPos const& pos, ::Block const& newBlock, int updateFlags);

    MCNAPI ~WorldChangeTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IBlockWorldGenAPI& target);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
