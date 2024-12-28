#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class Warden : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf2c8ff;
    ::ll::UntypedStorage<8, 24> mUnk5ac932;
    // NOLINTEND

public:
    // prevent constructor by default
    Warden& operator=(Warden const&);
    Warden(Warden const&);
    Warden();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 20
    virtual bool canDisableShield() /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 129
    virtual void onPush(::Actor& source) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 52
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 152
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 153
    virtual bool checkSpawnObstruction() const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 159
    virtual bool doHurtTarget(::Actor* target, ::ActorDamageCause const& cause) /*override*/;

    // vIndex: 8
    virtual ~Warden() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Warden(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canDisableShield();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $onPush(::Actor& source);

    MCAPI void $normalTick();

    MCAPI void $setTarget(::Actor* entity);

    MCAPI bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool $doHurtTarget(::Actor* target, ::ActorDamageCause const& cause);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
