#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/IPathBlockSource.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class PathBlockSource : public ::IPathBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf4b1d0;
    ::ll::UntypedStorage<1, 1> mUnka0ab3a;
    ::ll::UntypedStorage<8, 8> mUnkf2f219;
    // NOLINTEND

public:
    // prevent constructor by default
    PathBlockSource& operator=(PathBlockSource const&);
    PathBlockSource(PathBlockSource const&);
    PathBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PathBlockSource() /*override*/;

    // vIndex: 1
    virtual bool isInWater() const /*override*/;

    // vIndex: 2
    virtual bool isInLava() const /*override*/;

    // vIndex: 3
    virtual bool isWaterBlock(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 4
    virtual bool isLavaBlock(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 5
    virtual bool isSolidBlock(::BlockPos const& blockPos) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInWater() const;

    MCFOLD bool $isInLava() const;

    MCAPI bool $isWaterBlock(::BlockPos const& blockPos) const;

    MCAPI bool $isLavaBlock(::BlockPos const& blockPos) const;

    MCAPI bool $isSolidBlock(::BlockPos const& blockPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
