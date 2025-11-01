#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Squid.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class BlockPos;
// clang-format on

class GlowSquid : public ::Squid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    ::ll::TypedStorage<1, 1, bool> mGoingDark;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 172
    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 178
    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const /*override*/;

    // vIndex: 8
    virtual ~GlowSquid() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _startGoingDark();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCFOLD float $_getWalkTargetValue(::BlockPos const& pos);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
