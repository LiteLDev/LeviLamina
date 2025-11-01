#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
struct BlockAnimateTickData;
// clang-format on

class FireflyBushBlock : public ::BushBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 0
    virtual ~FireflyBushBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
