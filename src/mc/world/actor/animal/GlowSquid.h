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
    ::ll::UntypedStorage<8, 8> mUnk3a0a2a;
    ::ll::UntypedStorage<1, 1> mUnk29ae7c;
    // NOLINTEND

public:
    // prevent constructor by default
    GlowSquid& operator=(GlowSquid const&);
    GlowSquid(GlowSquid const&);
    GlowSquid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual float _getWalkTargetValue(::BlockPos const& pos) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent _getInkSquirtSoundEvent() const /*override*/;

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

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

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
