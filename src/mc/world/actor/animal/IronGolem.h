#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct HurtEffectsSettings;
// clang-format on

class IronGolem : public ::Mob {
public:
    // IronGolem inner types define
    enum class CrackedAmount : uint {
        High = 0,
        Med  = 1,
        Low  = 2,
        None = 3,
    };

public:
    // prevent constructor by default
    IronGolem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ActorHurtResult
    doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual void
    hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IronGolem(
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
    MCNAPI ::ActorHurtResult $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $hurtEffects(::ActorDamageSource const& source, float damage, ::HurtEffectsSettings const& settings);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
