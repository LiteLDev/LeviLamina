#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class BlockPos;
struct VariantParameterList;
// clang-format on

class Animal : public ::Mob {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI float $_getWalkTargetValue(::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
