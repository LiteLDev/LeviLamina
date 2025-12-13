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
    virtual ~PathBlockSource() /*override*/;

    virtual bool isInWater() const /*override*/;

    virtual bool isInLava() const /*override*/;

    virtual bool isWaterBlock(::BlockPos const& blockPos) const /*override*/;

    virtual bool isLavaBlock(::BlockPos const& blockPos) const /*override*/;

    virtual bool isSolidBlock(::BlockPos const& blockPos) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWater() const;

    MCNAPI bool $isInLava() const;

    MCNAPI bool $isWaterBlock(::BlockPos const& blockPos) const;

    MCNAPI bool $isLavaBlock(::BlockPos const& blockPos) const;

    MCNAPI bool $isSolidBlock(::BlockPos const& blockPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
