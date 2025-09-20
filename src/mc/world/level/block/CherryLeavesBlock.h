#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SeasonsAgnosticLeavesBlock.h"

// auto generated forward declare list
// clang-format off
struct BlockAnimateTickData;
// clang-format on

class CherryLeavesBlock : public ::SeasonsAgnosticLeavesBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 124
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 0
    virtual ~CherryLeavesBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $animateTick(::BlockAnimateTickData const& tickData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
