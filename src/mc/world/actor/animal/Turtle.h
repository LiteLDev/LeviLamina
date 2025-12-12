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
    virtual float getShadowRadius() const /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual ~Turtle() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius() const;

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
