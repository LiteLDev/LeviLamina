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
    virtual ~PathBlockSource() /*override*/ = default;

    virtual bool isInWater() const /*override*/;

    virtual bool isInLava() const /*override*/;

    virtual bool isWaterBlock(::BlockPos const&) const /*override*/;

    virtual bool isLavaBlock(::BlockPos const&) const /*override*/;

    virtual bool isSolidBlock(::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
