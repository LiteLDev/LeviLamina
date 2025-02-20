#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
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

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 126
    virtual void onPush(::Actor& source) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 51
    virtual void setTarget(::Actor* target) /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 148
    virtual bool checkSpawnObstruction() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 154
    virtual bool doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    // vIndex: 8
    virtual ~Warden() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canDisableShield();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD void $onSynchedDataUpdate(int dataId);

    MCAPI void $onPush(::Actor& source);

    MCAPI void $normalTick();

    MCAPI void $setTarget(::Actor* target);

    MCFOLD bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
