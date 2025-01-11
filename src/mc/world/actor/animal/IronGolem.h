#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockPos;
class EntityContext;
struct ActorDefinitionIdentifier;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 159
    virtual bool doHurtTarget(::Actor* target, ::ActorDamageCause const& cause) /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 149
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 8
    virtual ~IronGolem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IronGolem(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $doHurtTarget(::Actor* target, ::ActorDamageCause const& cause);

    MCFOLD void $die(::ActorDamageSource const& source);

    MCFOLD float $getShadowRadius() const;

    MCAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCFOLD void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
