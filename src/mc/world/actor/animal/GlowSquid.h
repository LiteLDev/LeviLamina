#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Squid.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorHurtResult;
class BlockPos;
struct HurtParameters;
// clang-format on

class GlowSquid : public ::Squid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    ::ll::TypedStorage<1, 1, bool>                                    mGoingDark;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCFOLD float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
