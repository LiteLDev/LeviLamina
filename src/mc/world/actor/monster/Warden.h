#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class Warden : public ::Monster {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick>                           mTouchAngerCooldownExpiryTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mSonicBoomCooldown;
    // NOLINTEND

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
    virtual void setTarget(::Actor* entity) /*override*/;

    // vIndex: 148
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 149
    virtual bool checkSpawnObstruction() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 155
    virtual bool doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    // vIndex: 8
    virtual ~Warden() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canDisableShield();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD void $onSynchedDataUpdate(int dataId);

    MCAPI void $onPush(::Actor& source);

    MCAPI void $normalTick();

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $checkSpawnRules(bool);

    MCAPI bool $checkSpawnObstruction() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool $doHurtTarget(::Actor* target, ::SharedTypes::Legacy::ActorDamageCause const& cause);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
