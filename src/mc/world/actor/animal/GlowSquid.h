#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/animal/Squid.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
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
    // prevent constructor by default
    GlowSquid();

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
    // member functions
    // NOLINTBEGIN
    MCNAPI GlowSquid(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI float $_getWalkTargetValue(::BlockPos const& pos);

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $_getInkSquirtSoundEvent() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
