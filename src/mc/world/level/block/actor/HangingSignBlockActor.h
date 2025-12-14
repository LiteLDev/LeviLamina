#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SignBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class HangingSignBlockActor : public ::SignBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    virtual ~HangingSignBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $getShadowRadius(::BlockSource&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
