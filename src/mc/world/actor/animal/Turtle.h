#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animal/Animal.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class BlockPos;
// clang-format on

class Turtle : public ::Animal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 171
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 8
    virtual ~Turtle() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getShadowRadius() const;

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
